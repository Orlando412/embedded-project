#include "trafficLight.h"
#include "config.h"
using namespace std;

namespace Control {

TrafficLightControl::TrafficLightControl(CPU::GPIO& gpio)
    : gpio(gpio), state(LightState::RED), timer(0) {}

void TrafficLightControl::updateState() {
    timer++;
    if (timer >= Config::trafficLightInterval) {
        timer = 0;
        switch (state) {
            case LightState::RED:
                setLight(LightState::GREEN);
                break;
            case LightState::GREEN:
                setLight(LightState::YELLOW);
                break;
            case LightState::YELLOW:
                setLight(LightState::RED);
                break;
        }
    }
}

void TrafficLightControl::run() {
    while (true) {
        updateState();
        // Simulate some delay here, like a sleep or wait function
    }
}

void TrafficLightControl::setLight(LightState newState) {
    state = newState;
    // Set the GPIO pins to reflect the current state
    gpio.setPinState(0, state == LightState::RED);
    gpio.setPinState(1, state == LightState::GREEN);
    gpio.setPinState(2, state == LightState::YELLOW);
}

}
