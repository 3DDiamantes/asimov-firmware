#ifndef PINGER_H
#define PINGER_H

#include <Arduino.h>

#define PING_LED LED_BUILTIN

class Pinger {
    public:
        Pinger();
        void ping(const char* str, char* result);
};

#endif