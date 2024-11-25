/**
 * Example libary implemenation for Arduino
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
  private:
    bool started;
    uint16_t mileage;
    String make;
};

#endif // _CAR_H
