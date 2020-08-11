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
    Pinger pinger;

    // When
    pinger.ping("ping", res);

    // Then
    TEST_ASSERT_EQUAL_CHAR_ARRAY(res, pong, 5);
}

void test_PingShouldReturnFail(){
    // Given
    char res[5];
    const char fail[] = "fail";
    Pinger pinger;

    // When
    pinger.ping("", res);

    // Then
    TEST_ASSERT_EQUAL_CHAR_ARRAY(res, fail, 5);
}

void setup(void){
    UNITY_BEGIN();
    RUN_TEST(test_PinLedShouldBe13);
    RUN_TEST(test_PingShouldReturnPong);
    RUN_TEST(test_PingShouldReturnFail);
    UNITY_END();
}
void loop(void){
}
