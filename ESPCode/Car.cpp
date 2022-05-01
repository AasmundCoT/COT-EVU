#include <WiFi.h>
#include <AsyncTCP.h>
#include <ESPAsyncWebServer.h>
#include "Car.h"

// Create AsyncWebServer object on port 80
AsyncWebServer server(80);
AsyncWebSocket ws("/ws");

#define RXD2 16
#define TXD2 17

const char index_html[] PROGMEM = R"rawliteral(

<!DOCTYPE HTML><html>
<head>
  <title>ESP Web Server</title>
  <meta name="viewport" content="width=device-width, initial-scale=1">
  <link rel="icon" href="data:,">
<title>ESP Web Server</title>
<meta name="viewport" content="width=device-width, initial-scale=1">
<link rel="icon" href="data:,">
</head>
<script>
  var gateway = `ws://${window.location.hostname}/ws`;
  var websocket;
  window.addEventListener('load', onLoad);
  function initWebSocket() {
    console.log('Trying to open a WebSocket connection...');
    websocket = new WebSocket(gateway);
    websocket.onopen    = onOpen;
    websocket.onclose   = onClose;
    websocket.onmessage = onMessage; // <-- add this line
  }

  function onOpen(event) {
    console.log('Connection opened');
  }

  function onClose(event) {
    console.log('Connection closed');
    setTimeout(initWebSocket, 2000);
  }

  function onMessage(event) {
    console.log(event.data);
  }

  function onLoad(event) {
    initWebSocket();
    setInterval(toggle, 1000);
  }

  function handleButtonDown(button) {
    //button is a string representing which button has been pressed
    //line to send data string
    websocket.send("D" + button);
  }

  function handleButtonUp(button) {
      websocket.send("U" + button);
  }

</script>
</html>
)rawliteral";

Car::Car(char* ssid, char* password): ssid{ssid}, password{password} {};


void Car::notifyClients() {
    ws.textAll("aString");
}

void Car::handleWebSocketMessage(void *arg, uint8_t *data, size_t len) {
  
    AwsFrameInfo *info = (AwsFrameInfo*)arg;

    if (info->final && info->index == 0 && info->len == len && info->opcode == WS_TEXT) {
    data[len] = 0;

    char commandType = *(char*)data[0];
    char commandData = *(char*)data[1];

    switch (commandType) {
        case 'D':
            
            break;

        case 'U':

            break;
        
        default:
            Serial.println("Bad package");
            break;
    }

    /*
    if (strcmp((char*)data, "toggle") == 0) {
        ledState = !ledState;
        notifyClients();
    }*/
    } 
}

void Car::onEvent(AsyncWebSocket *server, AsyncWebSocketClient *client, AwsEventType type,
             void *arg, uint8_t *data, size_t len) {
    switch (type) {
    case WS_EVT_CONNECT:
        Serial.printf("WebSocket-klient #%u koblet til med IP: %s\n", client->id(), client->remoteIP().toString().c_str());
        break;
    case WS_EVT_DISCONNECT:
        Serial.printf("WebSocket client #%u disconnected\n", client->id());
        break;
    case WS_EVT_DATA:
        handleWebSocketMessage(arg, data, len);
        break;
    case WS_EVT_PONG:
    case WS_EVT_ERROR:
        break;
    }
}

void Car::initWebSocket() {
    ws.onEvent(onEvent);
    server.addHandler(&ws);
}

String Car::processor(const String& var){
    Serial.print("yeet");
    return String();
}

void Car::carLoop() {
    ws.cleanupClients();
}

void Car::initCar() {

    Serial.begin(9600);
    Serial2.begin(9600, SERIAL_8N1, RXD2, TXD2);

    // Connect to Wi-Fi
    WiFi.begin(ssid, password);
    while (WiFi.status() != WL_CONNECTED) {
    delay(1000);
    Serial.println("Kobler til internett...");
    }

    // Print ESP Local IP Address
    Serial.print("Koblet til internett med IP: ");
    Serial.println(WiFi.localIP());

    initWebSocket();

    // Route for root / web page
    server.on("/", HTTP_GET, [](AsyncWebServerRequest *request){
        request->send_P(200, "text/html", index_html, processor);
    });

    // Start server
    server.begin();

    Serial.println("Bil klar!");

}
