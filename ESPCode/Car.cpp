#include <WiFi.h>
#include <AsyncTCP.h>
#include <ESPAsyncWebServer.h> //library change: https://github.com/me-no-dev/ESPAsyncWebServer/blob/master/src/WebResponseImpl.h#L62
#include "Car.h"
#include "HTML.h"

#include "Wire.h"
#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>

// Create AsyncWebServer object on port 80

#define port 80

unsigned long prevDataMillis = 0;
unsigned long prevReadMillis[3] = {0,0,0};
int dataPerSec = 4;
int readPerSec = dataPerSec;

AsyncWebServer server(port);
AsyncWebSocket ws("/ws");

#define SCREEN_WIDTH 128
#define SCREEN_HEIGHT 64

Adafruit_SSD1306 display(SCREEN_WIDTH, SCREEN_HEIGHT, &Wire, -1);

#define RXD2 16
#define TXD2 17

#define NTCpin 36

TaskHandle_t websocketCore; 

Car::Car(char* ssid, char* password): ssid{ssid}, password{password} {};

void writeDisplay(String str, int line) {
    display.setCursor(0, line*8);
    display.println(str);
    display.display();
}

void drive(int leftSpeed, int rightSpeed, int leftDirection, int rightDirection) {
    Serial2.write('k');
    Serial2.write(rightSpeed);
    Serial2.write(leftSpeed);
    Serial2.write(rightDirection);
    Serial2.write(leftDirection);
}

void sendData(int graph, double data) {
    //if((millis()-prevDataMillis)<(1000/dataPerSec)) return;
    if(data==3.14159265359) return;
    if(graph<1) graph = 1;
    if(graph>3) graph = 3;
    data = floor(data*10)/10;
    ws.textAll(String(graph) + String(data));
    prevDataMillis = millis();
}

float bitToVolt(int n) {
    float volt = (float)n*3.3/4095;
    return volt;
}

double readNTC() {
    float voltNTC = bitToVolt(analogRead(NTCpin));
    float voltR10 = 3.3-voltNTC;
    float RNTC = (voltNTC/voltR10)*10000;
    double coeff = 0.000253164556962; //1/B
    double tempcoeff = 0.00335402; //1/T0
    double Rcoeff = RNTC/10000; //R/R0
    double temperatureK = 1/(tempcoeff+coeff*log(Rcoeff));
    double temperatureC = temperatureK - 273.15;
    return temperatureC;
}

void fetchLine() {
    Serial2.write('l');
}

void fetchProx() {
    Serial2.write('p');
}

double Car::readData(int sensor) {

    switch (sensor) {
        case 0:
            if((millis()-prevReadMillis[0])<(1000/readPerSec)) return 3.14159265359;
            prevReadMillis[0] = millis();
            return readNTC();

        case 1:
            if((millis()-prevReadMillis[1])<(1000/readPerSec)) return 3.14159265359;
            prevReadMillis[1] = millis();
            fetchLine();
            break;

        case 2:
            if((millis()-prevReadMillis[2])<(1000/readPerSec)) return 3.14159265359;
            prevReadMillis[2] = millis();
            fetchProx();
            break;

        default:
            break;
    }

    delay(5);
    while (Serial2.available()) {
        int8_t received = (int8_t)Serial2.read();

        switch (received) {
            case 'l':
                Serial.print("Recieved data from line sensor: ");
                if(Serial2.available()) {
                    int8_t data = Serial2.read();
                    Serial.println(data);
                    return (double)data;
                }

            case 'p':
                int8_t data[2];
                Serial.print("Recieved data from proximity sensor: ");
                for(int i = 0; i<2; i++) {
                    if(Serial2.available()) {
                        data[i] = Serial2.read();
                    }
                }
                Serial.println((data[0]+data[1])/2);
                return (data[0]+data[1])/2;

            default:
                break;
        }
    }

    return 3.14159265359;
}

void Car::handleWebSocketMessage(void *arg, uint8_t *data, size_t len) {

    AwsFrameInfo *info = (AwsFrameInfo*)arg;

    if (info->final && info->index == 0 && info->len == len && info->opcode == WS_TEXT) {

        data[len] = 0;

        switch(*(char*)data) {
            case 'f':
                Serial2.write('c');
                line(ON);
                break;

            case 'g':
                circle(ON);
                break;

            case 'h':
                square(ON);
                break;

            case 'q':
                q(DOWN);
                break;

            case 'w':
                w(DOWN);
                break;

            case 'e':
                e(DOWN);
                break;

            case 'a':
                a(DOWN);
                break;

            case 's':
                s(DOWN);
                break;

            case 'd':
                d(DOWN);
                break;

            case 'F':
                line(OFF);
                break;

            case 'G':
                circle(OFF);
                break;

            case 'H':
                square(OFF);
                break;

            case 'Q':
                q(UP);
                break;

            case 'W':
                w(UP);
                break;

            case 'E':
                e(UP);
                break;

            case 'A':
                a(UP);
                break;

            case 'S':
                s(UP);
                break;

            case 'D':
                d(UP);
                break;

            default:
                Serial.println("Bad package");
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

String Car::processor(const String& var) {
    Serial.println("Data sent!");
    return String();
}

void websocketLoop( void * pvParameters ){
  Serial.print("Websocket connection runniong on core: ");
  Serial.println(xPortGetCoreID());

  for(;;) {
    ws.cleanupClients();
  } 
}

void Car::initCar() {

    Serial.begin(9600);
    Serial2.begin(9600, SERIAL_8N1, RXD2, TXD2);

    xTaskCreatePinnedToCore(
                    websocketLoop, 
                    "websocket",   
                    10000,     
                    NULL,        
                    1,           
                    &websocketCore,    
                    1);

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
    Serial.print(WiFi.localIP());
    Serial.println(":" + static_cast<String>(port));
    display.clearDisplay();
    writeDisplay("Koblet til med IP: ", 1);
    display.print(WiFi.localIP());
    display.println(":" + static_cast<String>(port));
    //display.println("WiFi: " + static_cast<String>(ssid)); //Seb la inn
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
