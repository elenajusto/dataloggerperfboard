#include <Arduino.h>
#include <Adafruit_BMP280.h>

Adafruit_BMP280 bmp; // I2C

void setup() {
  Serial.begin(9600);
  Serial.println("Starting BMP");
  Serial.println(bmp.begin());
  delay(5000);
  bmp.begin();
}

void loop() {
  // put your main code here, to run repeatedly:
  Serial.print(F("Approx altitude = "));
  Serial.print(bmp.readAltitude(1013.25)); /* Adjusted to local forecast! */
  Serial.println(" m");
}