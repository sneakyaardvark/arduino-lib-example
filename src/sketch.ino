#include "Car.h"

void setup() {
  Serial.begin(115200);
  carInit("Volvo");
  carStart();
}

void loop() {
  if (carStarted) {
    carDrive(10);
    Serial.println("My %s drove 10 miles", make);
    // can't access myCar.mileage directly, it's private
    // use accessor Car::getMileage() instead
    if (carGetMileage() > 50) {
      carStop()
      Serial.println("I drove my %s to my destination!", make)
    }
  }
  // wait 5 seconds
  delay(5000);
}
