#include "Car.h"

Car car("ruter_cot", "ESP_32_is_best");

void setup() {
    car.initCar();
}

void loop() {

}

void w(bool state) {
  if(state==DOWN) {
    drive(200,200,FORWARD,FORWARD);
  }else if(state==UP) {
    drive(0,0,FORWARD,FORWARD);
  }
}

void a(bool state) {}
void s(bool state) {}
void d(bool state) {}
void q(bool state) {}
void e(bool state) {}

void line(bool state) {}
void circle(bool state) {}
void square(bool state) {}
