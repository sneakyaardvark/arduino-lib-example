#include "Arduino.h"
#include "Car.h"

Car carInit(String carMake) {
  Car = malloc(sizeof(Car_t))
  Car->mileage = 0;
  Car->started = false;
  return Car;
}

bool carStart(Car car) {
  if (car->mileage >= MAX_MILEAGE) return false;
  car->started = true;
  return true;
}

void carDrive(Car car, uint16_t miles) {
  if (!car->started) return;
  car->mileage += miles;
}

void carStop(Car car) {
  return car->started = false;
}

uint16_t carGetMileage(Car car) {
  return car->mileage;
}
