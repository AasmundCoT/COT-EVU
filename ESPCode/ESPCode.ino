#include "Car.h"

Car car("ruter_cot", "ESP_32_is_best");

double ntcData;
int proxData;
int lineData;
bool linjefolgermodus = false;

void setup() {
    car.initCar();
}

void loop() {

    ntcData = readNTC();
    sendData(1,ntcData);

    lineData = readLine();
    sendData(2,lineData);

    proxData = readProx();
    sendData(3,proxData);

    if(linjefolgermodus) {
        drive(125-lineData, 125+lineData, FORWARD, FORWARD);
        return;
    }
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

void line(bool state) {
    linjefolgermodus = state;
    drive(0,0,0,0);
};

void circle(bool state) {
    if(state) calibrate();
};

void square(bool state) {};
