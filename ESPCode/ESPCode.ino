#include "Car.h"

Car car("iPhone", "testPassord");

void setup(){
    car.initCar();
}

void loop() {
    car.carLoop();
}
