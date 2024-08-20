#include <Arduino.h>
#include <unity.h>

#include <Adafruit_BMP280.h>                                // Library required for component

void test_barometer() {
  Adafruit_BMP280 barometer = Adafruit_BMP280(&Wire);       // Initialise barometer library object
  TEST_ASSERT_TRUE(barometer.begin());                      // Connect to barometer
}

void setup() {
  UNITY_BEGIN();
  RUN_TEST(test_barometer);
  UNITY_END();
}

void loop() {}