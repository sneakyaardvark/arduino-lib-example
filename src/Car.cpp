#include "Arduino.h"
#include "Car.h"

String make;
uint16_t mileage;
bool carStarted;


void carInit(String carMake) {
  make = carMake;
  mileage = 0;
  started = false;
}

bool carStart() {
  if (mileage >= MAX_MILEAGE) return false;
  started = true;
  return true;
}

void carDrive(uint16_t miles) {
  if (!started) return;
  mileage += miles;
}

void carStop() {
  return started = false;
}

void carGetMileage() {
  return mileage;
}
