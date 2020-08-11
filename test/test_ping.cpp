#include <Arduino.h>
#include <unity.h>
#include "Pinger.h"

void test_PinLedShouldBe13(){
    TEST_ASSERT_EQUAL(13, LED_BUILTIN);
}

void test_PingShouldReturnPong(){
    // Given
    char res[5];
    const char pong[] = "pong";
    const char fail[] = "fail";
    Pinger pinger;

    // When
    pinger.ping("ping", res);

    // Then
    TEST_ASSERT_EQUAL(res, pong);
}

void setup(void){
    UNITY_BEGIN();
    RUN_TEST(test_PinLedShouldBe13);
    UNITY_END();
}
void loop(void){
}
