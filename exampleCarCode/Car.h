#pragma once

#include <WiFi.h>
#include <AsyncTCP.h>
#include <ESPAsyncWebServer.h>

#define LINE 0
#define PROX 1

#define UP 0
#define DOWN 1

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

void drive(int leftSpeed, int rightSpeed);

void w(bool knapp);
void a(bool knapp);
void s(bool knapp);
void d(bool knapp);
void q(bool knapp);
void e(bool knapp);

void triangle(bool knapp);
void circle(bool knapp);
void square(bool knapp);
