#include <Arduino.h>
#include "Pinger.h"

void setup(void){
    Pinger pinger;
}

void loop(void){
    char res[5];
    ping("pong", res);
}