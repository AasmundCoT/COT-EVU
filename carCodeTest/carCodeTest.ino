#include "Car.h"

Car car("ruter_cot", "ESP_32_is_best");

double ntcData;
int proxData;
int lineData;
bool linjefolgermodus = false;

int speed = 100;

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
        drive(50+lineData, 50-lineData, FORWARD, FORWARD);
        return;
    }
}

void w(bool state) {
  if(state==DOWN) {
    drive(speed,speed,FORWARD,FORWARD);
  }else if(state==UP) {
    drive(0,0,FORWARD,FORWARD);
  }
}

void a(bool state) {
  if(state==DOWN) {
    drive(speed,speed,BACKWARD,FORWARD);
  }else if(state==UP) {
    drive(0,0,FORWARD,FORWARD);
  }
  Serial.println('a');
}

void s(bool state) {
  if(state==DOWN) {
    drive(speed,speed,BACKWARD,BACKWARD);
  }else if(state==UP) {
    drive(0,0,FORWARD,FORWARD);
  }
}

void d(bool state) {
  if(state==DOWN) {
    drive(speed,speed,FORWARD,BACKWARD);
  }else if(state==UP) {
    drive(0,0,FORWARD,FORWARD);
  }
}

void q(bool state) {
  if(state==DOWN) {
    drive(0,speed,FORWARD,FORWARD);
  }else if(state==UP) {
    drive(0,0,FORWARD,FORWARD);
  }
}

void e(bool state) {
  if(state==DOWN) {
    drive(speed,0,FORWARD,FORWARD);
  }else if(state==UP) {
    drive(0,0,FORWARD,FORWARD);
  }
}

void line(bool state) {
    linjefolgermodus = state;
    drive(0,0,FORWARD,FORWARD);
};

void circle(bool state) {
    if(state) calibrate();
};

void square(bool state) {};
