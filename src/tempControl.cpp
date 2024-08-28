#include "tempControl.h"
#include "config.h"
using namespace std;

namespace Control {

TemperatureControl::TemperatureControl(CPU::GPIO& gpio) : gpio(gpio) {}

void TemperatureControl::updateTemperature(int currentTemperature) {
    controlTemperature(currentTemperature);
}

void TemperatureControl::run() {
    int simulatedTemperature = 20;  // Start with a default temperature
    while (true) {
        updateTemperature(simulatedTemperature);
        // Simulate temperature change over time
        // Simulate some delay here, like a sleep or wait function
    }
}

void TemperatureControl::controlTemperature(int temperature) {
    if (temperature < Config::tempThresholdLow) {
        gpio.setPinState(3, true);  // Turn on heating
        gpio.setPinState(4, false); // Turn off cooling
    } else if (temperature > Config::tempThresholdHigh) {
        gpio.setPinState(3, false); // Turn off heating
        gpio.setPinState(4, true);  // Turn on cooling
    } else {
        gpio.setPinState(3, false); // Turn off heating
        gpio.setPinState(4, false); // Turn off cooling
    }
}

}
