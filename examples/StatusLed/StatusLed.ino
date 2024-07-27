#include <StatusLed.h>

EasyIO::StatusLed StatusLed(LED_BUILTIN, 900, 100);

void setup() {
    StatusLed.setup();
}

void loop() {
    StatusLed.update();
    delay(10);
}