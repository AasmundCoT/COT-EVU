#include "Car.h"

//Car car("nettverksnavn", "nettverkspassord");
Car car("kornblomst12b", "Skilpadde.445!");

void setup() {
  car.initCar(BLACK); //BLACK for svart linje og WHITE for hvit linje
}

//lag variabler her
bool linemode = false;
int linjetall;


void loop() { //ikke fjern denne linjen!

  //skriv kode for å sende data her
  sendData(1,readNTC());
  sendData(2,readProx());
  
  if(linemode == true) {
    //skriv linjefølger-kode her
    linjetall = readLine();
    
    sendData(3,linjetall);
    
    if(linjetall<-10) {
      drive(0,60);
    }
    if(linjetall>10) {
      drive(60,0);
    }
    if(linjetall>-10&&linjetall<10) {
      drive(60,60);
    }
    
  }
}

//dette er koden for kjøre framover
void w(bool button) { //ikke fjern denne linjen!
  if(button==DOWN) {
    //dette skjer når knappen trykkes ned
    drive(100,100); 
  }
  if(button==UP) {
    //dette skjer når knappen slippes opp
    drive(0,0);
  }
}

void a(bool button) { //ikke fjern denne linjen!
  //BEGYNN HER!
  if(button==DOWN) {
    //dette skjer når knappen trykkes ned
    drive(-100,100); 
  }
  if(button==UP) {
    //dette skjer når knappen slippes opp
    drive(0,0);
  }
}

void s(bool button) { //ikke fjern denne linjen!
  //skriv kode her
  if(button==DOWN) {
    //dette skjer når knappen trykkes ned
    drive(-100,-100); 
  }
  if(button==UP) {
    //dette skjer når knappen slippes opp
    drive(0,0);
  }
}

void d(bool button) { //ikke fjern denne linjen!
  //skriv kode her
  if(button==DOWN) {
    //dette skjer når knappen trykkes ned
    drive(100,-100); 
  }
  if(button==UP) {
    //dette skjer når knappen slippes opp
    drive(0,0);
  }
}

void e(bool button) { //ikke fjern denne linjen!
  //skriv kode her
  if(button==DOWN) {
    //dette skjer når knappen trykkes ned
    drive(100,0); 
  }
  if(button==UP) {
    //dette skjer når knappen slippes opp
    drive(0,0);
  }
}

void q(bool button) { //ikke fjern denne linjen!
  //skriv kode her
  if(button==DOWN) {
    //dette skjer når knappen trykkes ned
    drive(0,100); 
  }
  if(button==UP) {
    //dette skjer når knappen slippes opp
    drive(0,0);
  }
}

void triangle(bool button) { //ikke fjern denne linjen!
  //skriv kode her
  if(button==DOWN) {
    linemode = true;
  }
}

void circle(bool button) { //ikke fjern denne linjen!
  //skriv kode her
  if(button==DOWN) {
    linemode = false;
    drive(0,0);
  }
}

void square(bool button) { //ikke fjern denne linjen!
  //skriv kode her

}
