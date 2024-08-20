#include <Arduino.h>
#include <unity.h>

void test_sd() {
  TEST_ASSERT_TRUE(SD.begin(4));    // Connect to SD card
}

void setup() {
  UNITY_BEGIN();
  RUN_TEST(test_sd);
  UNITY_END();
}

void loop() {}