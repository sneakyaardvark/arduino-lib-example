#include "Arduino.h"
#include "Car.h"

Car::Car(String carMake) {
  make = carMake;
  mileage = 0;
}

bool Car::start() {
  if (mileage >= MAX_MILEAGE) return false;
  started = true;
  return true;
}

void Car::drive(uint16_t miles) {
  if (!started) return;
  mileage += miles;
}

void Car::stop() {
  return started = false;
}

void Car::getMileage() {
  return mileage;
}
