#include <Arduino.h>

void ping(void);

void setup(void){
    pinMode(LED_BUILTIN,OUTPUT);
}

void loop(void){
    ping();
}

void ping(void){
    digitalWrite(LED_BUILTIN,HIGH);
    delay(1000);
    digitalWrite(LED_BUILTIN,LOW);
    delay(1000);
}