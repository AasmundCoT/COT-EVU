#include "Car.h"

Car car("iPhone", "testPassord");

double ntcData;
double proxData;
double lineData;

void setup() {
    car.initCar();
}

void loop() {

    ntcData = car.readData(NTC);
    sendData(1, ntcData);

    fetchData(LINE);
    fetchData(PROX);

    double data = readData();

    sendData(2, data[PROX]);
    sendData(3, data[LINE]);
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
