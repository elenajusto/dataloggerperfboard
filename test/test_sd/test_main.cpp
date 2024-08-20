#include <Arduino.h>
#include <unity.h>

#include <SD.h>                     // Library required for component
#include <SPI.h>                    // Library required for component


void test_sd() {
  TEST_ASSERT_TRUE(SD.begin(4));    // Connect to SD card
}

void setup() {
  UNITY_BEGIN();
  RUN_TEST(test_sd);
  UNITY_END();
}

void loop() {}