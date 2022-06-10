#include <WiFi.h>
#include <AsyncTCP.h>
#include <ESPAsyncWebServer.h>
#include "Car.h"
#include "HTML.h"

#include "Wire.h"
#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>

// Create AsyncWebServer object on port 80

#define port 80
#define ntc 36

AsyncWebServer server(port);
AsyncWebSocket ws("/ws");

#define SCREEN_WIDTH 128
#define SCREEN_HEIGHT 64 

Adafruit_SSD1306 display(SCREEN_WIDTH, SCREEN_HEIGHT, &Wire, -1);

#define RXD2 16
#define TXD2 17

Car::Car(char* ssid, char* password): ssid{ssid}, password{password} {};

void writeDisplay(String str, int line) {
  display.setCursor(0, line*8);
  display.println(str);
  display.display();
}

void drive(int rightSpeed, int leftSpeed, int rightDirection, int leftDirection) {
    Serial2.write('k');
    Serial2.write(rightSpeed);
    Serial2.write(leftSpeed);
    Serial2.write(rightDirection);
    Serial2.write(leftDirection);
}

void fetchData() {
  Serial2.write('p');
}

void readData() {
  while(Serial2.available()) {
    delay(20);
    int8_t received = (int8_t)Serial2.read();
    Serial.print("Recieved data: ");
    Serial.println(received);
    ws.textAll(String(received));
  }
}

void Car::handleWebSocketMessage(void *arg, uint8_t *data, size_t len) {
  
    AwsFrameInfo *info = (AwsFrameInfo*)arg;

    if (info->final && info->index == 0 && info->len == len && info->opcode == WS_TEXT) {
      
      data[len] = 0;

      switch(*(char*)data) {
          case 'K':
              drive(100,100,1,1);
              break;

          case 'S':
              drive(0,0,1,1);
              break;

          case 'D':
              fetchData();
              break;

          default:
              Serial.print("Bad package");
              break;
        }
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
    Serial.println("Data sent!");
    return String();
}

void Car::carLoop() {
    ws.cleanupClients();
    readData();
    display.clearDisplay();
    display.setCursor(0, 8);
    display.println(analogRead(ntc));
    display.display();
}

void Car::initCar() {

    Serial.begin(9600);
    Serial2.begin(9600, SERIAL_8N1, RXD2, TXD2);

    pinMode(ntc, INPUT);

    if(!display.begin(SSD1306_SWITCHCAPVCC, 0x3C)) {
      Serial.println(F("SSD1306 allocation failed"));
      for(;;);
    }
  
    delay(2000);
    display.clearDisplay();
    display.setTextSize(1);
    display.setTextColor(WHITE);
    writeDisplay("Skjerm klar", 1);
    
    // Connect to Wi-Fi
    WiFi.begin(ssid, password);

    while (WiFi.status() != WL_CONNECTED) {
      delay(1000);
      Serial.println("Kobler til WIFI...");
      display.clearDisplay();
      writeDisplay("Kobler til WIFI...", 1);
    }

    // Print ESP Local IP Address
    Serial.print("Koblet til internett med IP: ");
    Serial.println(WiFi.localIP() + ":80");
    display.clearDisplay();
    writeDisplay("Koblet til med IP: ", 1);
    display.print(WiFi.localIP());
    display.println(":" + static_cast<String>(port));
    display.println("WiFi: " + static_cast<String>(ssid)); //Seb la inn
    display.display();

    initWebSocket();

    // Route for root / web page
    server.on("/", HTTP_GET, [](AsyncWebServerRequest *request){
        request->send_P(200, "text/html", index_html, processor);
    });

    // Start server
    server.begin();

    Serial.println("Bil klar!");

}
