#include "Car.h"

Car car("kornblomst12b", "Skilpadde.445!");
//Car car("iPhone", "testPassord");

void setup() {
  car.initCar(BLACK); //BLACK for svart linje og WHITE for hvit linje
}

//lag variabler her
bool linemode = false;

int speed = 50;

int leftSpeed = 0;
int rightSpeed = 0;

void loop() { //ikke fjern denne linjen!

  //skriv kode for å sende data her
  sendData(1,speed);
  sendData(2,readLine());
  sendData(3,readProx());
  
  if(linemode == true) {
    //skriv linjefølger-kode her
    drive(75+readLine()/2, 75-readLine()/2);
  } else {
    drive(leftSpeed, rightSpeed);
  }
}

//dette er koden for kjøre framover
void w(bool button) { //ikke fjern denne linjen!
  if(button==DOWN) {
    leftSpeed += speed; 
    rightSpeed += speed;
  }
  if(button==UP) {
    leftSpeed -= speed;
    rightSpeed -= speed;
  }
}

void a(bool button) { //ikke fjern denne linjen!
  //BEGYNN HER!
  if(button==DOWN) { 
    leftSpeed -= speed;
    rightSpeed += speed;
  }
  if(button==UP) {
    leftSpeed += speed;
    rightSpeed -= speed;
  }
}

void s(bool button) { //ikke fjern denne linjen!
  //skriv kode her
  if(button==DOWN) {
    leftSpeed -= speed;
    rightSpeed -= speed;
  }
  if(button==UP) {
    leftSpeed += speed;
    rightSpeed += speed;
  }
}

void d(bool button) { //ikke fjern denne linjen!
  //skriv kode her
  if(button==DOWN) {
    leftSpeed += speed;
    rightSpeed -= speed; 
  }
  if(button==UP) {
    leftSpeed -= speed;
    rightSpeed += speed;
  }
}

void e(bool button) { //ikke fjern denne linjen!
  //skriv kode her
  if(button==DOWN) {
    leftSpeed += speed;
  }
  if(button==UP) {
    leftSpeed -= speed;
  }
}

void q(bool button) { //ikke fjern denne linjen!
  //skriv kode her
  if(button==DOWN) {
    rightSpeed += speed; 
  }
  if(button==UP) {
    rightSpeed -= speed;
  }
}

void triangle(bool button) { //ikke fjern denne linjen!
  //skriv kode her
  if(!button) return;
  linemode = !linemode; 
  leftSpeed = 0;
  rightSpeed = 0;
}

void circle(bool button) { //ikke fjern denne linjen!
  //skriv kode her
  if(button) speed-=10;
}

void square(bool button) { //ikke fjern denne linjen!
  //skriv kode her
  if(button) speed+=10;
}
