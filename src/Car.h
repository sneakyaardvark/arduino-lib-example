/**
 * Example libary implementation for Arduino
 * Car class header
 */

#ifndef _CAR_H
#define _CAR_H

#include "Arduino.h"

#define MAX_MILEAGE UINT16_MAX

class Car {
  public:
    Car(String make);
    bool start();
    void drive(uint16_t miles);
    void stop();
    uint16_t getMileage();
    String make;
    bool started;
  private:
    uint16_t mileage;
};

#endif // _CAR_H
