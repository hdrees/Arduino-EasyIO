#include <PinOut.h>

EasyIO::PinOut Led(LED_BUILTIN);

void setup() {
    Led.setup();
}

void loop() {
    Led.toggle();

    delay(500);
}
