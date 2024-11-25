/**
 * Example implementation for Arduino
 * without a library
 * Car hear
 */

#ifndef _CAR_H
#define _CAR_H

#include "Arduino.h"

#define MAX_MILEAGE UINT16_MAX

typedef struct {
  String make;
  bool started;
  uint16_t mileage;
} Car_t *Car;

Car carInit(String);
void carDrive(Car, uint16_t);
void carStop(Car);
bool carStart(Car);
uint16_t carGetMileage(Car);

#endif // _CAR_H
