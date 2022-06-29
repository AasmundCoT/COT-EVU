#include "Car.h"

Car car("ruter_cot", "ESP_32_is_best");

void setup() {
  car.initCar();
}

//lag variabler her
bool linemode = false;


void loop() { //ikke fjern denne linjen!

  //skriv kode for å sende data her
  sendData(1,readNTC());
  sendData(2,readLine());
  sendData(3,readProx());
  
  if(linemode == true) {
    //skriv linjefølger-kode her
    drive(50+readLine()/2, 50-readLine()/2);
  }
}

//dette er koden for kjøre framover
void w(bool button) { //ikke fjern denne linjen!
  if(button==DOWN) {
    drive(50,50); 
  }
  if(button==UP) {
    drive(0,0);
  }
}

void a(bool button) { //ikke fjern denne linjen!
  //BEGYNN HER!
  if(button==DOWN) {
    drive(-50,50); 
  }
  if(button==UP) {
    drive(0,0);
  }
}

void s(bool button) { //ikke fjern denne linjen!
  //skriv kode her
  if(button==DOWN) {
    drive(-50,-50); 
  }
  if(button==UP) {
    drive(0,0);
  }
}

void d(bool button) { //ikke fjern denne linjen!
  //skriv kode her
  if(button==DOWN) {
    drive(50,-50); 
  }
  if(button==UP) {
    drive(0,0);
  }
}

void e(bool button) { //ikke fjern denne linjen!
  //skriv kode her
  if(button==DOWN) {
    drive(50,0); 
  }
  if(button==UP) {
    drive(0,0);
  }
}

void q(bool button) { //ikke fjern denne linjen!
  //skriv kode her
  if(button==DOWN) {
    drive(0,50); 
  }
  if(button==UP) {
    drive(0,0);
  }
}

void tast1(bool button) { //ikke fjern denne linjen!
  //skriv kode her
  //bruk denne buttonen til å skru på linjeModus og bruke calibrate()
  calibrate();
  linemode = !linemode; 
  drive(0,0);
}

void tast2(bool button) { //ikke fjern denne linjen!
  //skriv kode her

}

void tast3(bool button) { //ikke fjern denne linjen!
  //skriv kode her

}
