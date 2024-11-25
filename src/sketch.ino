#include "Car.h"

Car myCar = carInit("Volvo");

void setup() {
  Serial.begin(115200);
  carStart(myCar);
}

void loop() {
  if (myCar->started) {
    carDrive(myCar, 10);
    Serial.println("My %s drove 10 miles", myCar->make);
    if (carGetMileage(myCar) > 50) {
      carStop(myCar)
      Serial.println("I drove my %s to my destination!", myCar->make)
    }
  }
  // wait 5 seconds
  delay(5000);
}
