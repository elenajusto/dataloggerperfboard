#include <Arduino.h>
#include <unity.h>

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