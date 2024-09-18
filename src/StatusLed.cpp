#include "StatusLed.h"

EasyIO::StatusLed::StatusLed(byte pin, unsigned long onTime, unsigned long offTime) : PinOut(pin) {
    _onTime         = onTime;
    _offTime        = offTime;
    _previousMillis = 0;
}

void EasyIO::StatusLed::setup() {
    PinOut::setup();
}

void EasyIO::StatusLed::update() {
    byte ledState               = status();
    unsigned long currentMillis = millis();
    unsigned long diffMillis    = currentMillis - _previousMillis;

    if((ledState == HIGH) && (diffMillis >= _onTime)) {
        _previousMillis = currentMillis;
        PinOut::off();
        return;
    }

    if((ledState == LOW) && (diffMillis >= _offTime)) {
        _previousMillis = currentMillis;
        PinOut::on();
        return;
    }
}
