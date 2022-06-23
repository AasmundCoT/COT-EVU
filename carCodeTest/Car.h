#pragma once

#include <WiFi.h>
#include <AsyncTCP.h>
#include <ESPAsyncWebServer.h>

#define LINE 0
#define PROX 1

#define UP 0
#define DOWN 1

#define OFF 0
#define ON 1

#define BACKWARD 0
#define FORWARD 1

class Car {
    private:
        const char* ssid;
        const char* password;

    public:
        Car(char* ssid, char* password);
        static void notifyClients();
        static void handleWebSocketMessage(void *arg, uint8_t *data, size_t len);
        static void onEvent(AsyncWebSocket *server, AsyncWebSocketClient *client, AwsEventType type,
             void *arg, uint8_t *data, size_t len);
        static void initWebSocket();
        static String processor(const String& var);
        void initCar();
};

double readNTC();
int readLine();
int readProx();
void sendData(int graph, double data);

void drive(int leftSpeed, int rightSpeed, int leftDirection, int rightDirection);
void calibrate();

void w(bool state);
void a(bool state);
void s(bool state);
void d(bool state);
void q(bool state);
void e(bool state);

void line(bool state);
void circle(bool state);
void square(bool state);
