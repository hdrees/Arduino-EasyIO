#include "PinOut.h"

EasyIO::PinOut::PinOut(byte pin) {
    _pin = pin;
}

void EasyIO::PinOut::setup() {
    pinMode(_pin, OUTPUT);
    off();
}

void EasyIO::PinOut::off() {
    digitalWrite(_pin, LOW);
}

void EasyIO::PinOut::on() {
    digitalWrite(_pin, HIGH);
}

byte EasyIO::PinOut::status() {
    return digitalRead(_pin);
}

void EasyIO::PinOut::toggle() {
    if(status() == HIGH) {
        off();
    } else {
        on();
    }
}