#include <Arduino.h>
#include <unity.h>

void test_PinLedShouldBe13(){
    TEST_ASSERT_EQUAL(13, LED_BUILTIN);
}

void setup(void){
    UNITY_BEGIN();
    RUN_TEST(test_PinLedShouldBe13);
    UNITY_END();
}
void loop(void){
}
