#include <Pinger.h>

// Constructor
Pinger::Pinger(void){
    pinMode(PING_LED, OUTPUT);
}

// Methods
void Pinger::ping(const char* str, char* result){
    const char ping[] = "ping";

    if ((strcmp(str, ping)) == 0){
        digitalWrite(PING_LED, HIGH);
        strcpy(result, "pong");
    } else {
        digitalWrite(PING_LED, LOW);
        strcpy(result, "fail");
    }
}