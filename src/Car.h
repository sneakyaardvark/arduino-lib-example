/**
 * Example implementation for Arduino
 * without a library
 * Car hear
 */

#ifndef _CAR_H
#define _CAR_H

#include "Arduino.h"

#define MAX_MILEAGE UINT16_MAX
extern String make;
extern bool carStarted;

void carInit(String);
void carDrive(uint16_t);
void carStop();
bool carStart();
uint16_t carGetMileage();

#endif // _CAR_H
