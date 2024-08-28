#include "gpio.h"
using namespace std;

namespace CPU {

GPIO::GPIO(int numPins) : pins(numPins, false) {}

void GPIO::setPinState(int pin, bool state) {
    if (pin >= 0 && pin < pins.size()) {
        pins[pin] = state;
    }
}

bool GPIO::getPinState(int pin) const {
    if (pin >= 0 && pin < pins.size()) {
        return pins[pin];
    }
    return false;
}

}
