#include "Car.h"

Car car("ruter_cot", "ESP_32_is_best");

void setup() {
    car.initCar();
}

//lag variabler her

void loop() { //ikke fjern denne linjen!
  //skriv kode for linjefølger her

}

//dette er koden for kjøre framover
void w(bool state) { //ikke fjern denne linjen!
  if(state==DOWN) {
    drive(50,50,FORWARD,FORWARD);
  }else if(state==UP) {
    drive(0,0,FORWARD,FORWARD);
  }
}

void a(bool state) { //ikke fjern denne linjen!
  //skriv kode her

}

void s(bool state) { //ikke fjern denne linjen!
  //skriv kode her

}

void d(bool state) { //ikke fjern denne linjen!
  //skriv kode her

}

void q(bool state) { //ikke fjern denne linjen!
  //skriv kode her

}

void e(bool state) { //ikke fjern denne linjen!
  //skriv kode her

}


void line(bool state) { //ikke fjern denne linjen!
  //skriv kode her

}

void circle(bool state) { //ikke fjern denne linjen!
  //skriv kode her

}

void square(bool state) { //ikke fjern denne linjen!
  //skriv kode her

}
