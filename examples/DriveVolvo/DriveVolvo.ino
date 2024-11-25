#include <Car.h>

// instantiating a Car object myCar by calling the Car(String) constructor
Car myCar("Volvo");

void setup() {
  Serial.begin(115200);
  myCar.start();
}

void loop() {
  if (myCar.started) {
    myCar.drive(10);
    Serial.println("My %s drove 10 miles", myCar.make);
    // can't access myCar.mileage directly, it's private
    // use accessor Car::getMileage() instead
    if (myCar.getMileage() > 50) {
      myCar.stop()
      Serial.println("I drove my %s to my destination!", myCar.make)
    }
  }
  // wait 5 seconds
  delay(5000);
}
