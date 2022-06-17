#include "Car.h"

Car car("Nestingan_EXT", "Nestingan2019");

double ntcData;
double proxData;
double lineData;

void setup() {
    car.initCar();
}

void loop() {

    ntcData = car.readData(NTC);
    proxData = car.readData(PROX);
    lineData = car.readData(LINE);

    sendData(1, ntcData);
    sendData(2, proxData);
    sendData(3, lineData);
}

void w(bool state) {
  if(state==DOWN) {
    drive(200,200,FORWARD,FORWARD);
  }else if(state==UP) {
    drive(0,0,FORWARD,FORWARD);
  }
}

void a(bool state) {
  if(state==DOWN) {
    drive(200,200,BACKWARD,FORWARD);
  }else if(state==UP) {
    drive(0,0,FORWARD,FORWARD);
  }
}

void s(bool state) {
  if(state==DOWN) {
    drive(200,200,BACKWARD,BACKWARD);
  }else if(state==UP) {
    drive(0,0,FORWARD,FORWARD);
  }
}

void d(bool state) {
  if(state==DOWN) {
    drive(200,200,FORWARD,BACKWARD);
  }else if(state==UP) {
    drive(0,0,FORWARD,FORWARD);
  }
}

void q(bool state) {
  if(state==DOWN) {
    drive(200,0,FORWARD,FORWARD);
  }else if(state==UP) {
    drive(0,0,FORWARD,FORWARD);
  }
}

void e(bool state) {
  if(state==DOWN) {
    drive(0,200,FORWARD,FORWARD);
  }else if(state==UP) {
    drive(0,0,FORWARD,FORWARD);
  }
}

void line(bool state) {};
void circle(bool state) {};
void square(bool state) {};
