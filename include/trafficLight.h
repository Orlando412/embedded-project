#ifndef TRAFFICLIGHTONTROL_H
#define TRAFFICLIGHTCONTROL_H

#include "gpio.h"

namespace Control {

    class TrafficLightControl {
    public:
        TrafficLightControl(CPU::GPIO& gpio);
        
        void updateState();
        void run();

    private:
        enum class LightState { RED, GREEN, YELLOW } state;
        CPU::GPIO& gpio;
        int timer;

        void setLight(LightState state);
    };

}

#endif // TRAFFICLIGHTCONTROL_H
