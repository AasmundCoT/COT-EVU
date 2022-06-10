#pragma once

#include <WiFi.h>
#include <AsyncTCP.h>
#include <ESPAsyncWebServer.h>

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
        void carLoop();
        void initCar();
        void w();
        void a();
        void s();
        void d();
        void q();
        void e();
        void en();
        void to();
        void tre();
};
