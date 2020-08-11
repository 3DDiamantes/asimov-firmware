#include <Arduino.h>
#include "Pinger.h"

void setup(void){
    Pinger pinger;
    char res[5];
    pinger.ping("pong", res);
}

void loop(void){
    
}