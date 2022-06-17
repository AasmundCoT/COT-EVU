#include "Car.h"

Car car("Nestingan_EXT", "Nestingan2019");

double ntcData;
double proxData;
double lineData;

void setup() {
    car.initCar();
}

void loop() {

    sendData(1, car.readData(NTC));
    sendData(2, car.readData(PROX));
    sendData(3, car.readData(LINE));
    
    ntcData = car.readData(NTC);
    proxData = car.readData(PROX);
    lineData = car.readData(LINE);

    sendData(1, ntc);
    sendData(2, prox);
    sendData(3, line);
}

void w(bool state){
  if(state==DOWN){
    drive(100,100,FORWARD,FORWARD);
  }else if(state==UP){
    drive(0,0,FORWARD,FORWARD);
  }
}

void a(bool state){
  if(state==DOWN){
    drive(100,100,BACKWARD,FORWARD);
  }else if(state==UP){
    drive(0,0,FORWARD,FORWARD);
  }
}

void s(bool state){
  if(state==DOWN){
    drive(100,100,BACKWARD,BACKWARD);
  }else if(state==UP){
    drive(0,0,FORWARD,FORWARD);
  }
}

void d(bool state){
  if(state==DOWN){
    drive(100,100,FORWARD,BACKWARD);
  }else if(state==UP){
    drive(0,0,FORWARD,FORWARD);
  }
}

void q(bool state){
  if(state==DOWN){
    drive(0,100,FORWARD,FORWARD);
  }else if(state==UP){
    drive(0,0,FORWARD,FORWARD);
  }
}

void e(bool state){
  if(state==DOWN){
    drive(100,0,FORWARD,FORWARD);
  }else if(state==UP){
    drive(0,0,FORWARD,FORWARD);
  }
}
