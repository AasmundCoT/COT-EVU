#include "Car.h"

Car car("Nestingan_EXT", "Nestingan2019");

void setup() {
    car.initCar();
}

void loop() {
    car.carLoop();
    sendData(1, car.readData(NTC));
    sendData(2, car.readData(PROX));
    sendData(3, car.readData(LINE));
}
