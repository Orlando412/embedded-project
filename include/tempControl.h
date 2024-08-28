#ifndef TEMPCONTROL_H
#define TEMPCONTROL_H

#include "gpio.h"

namespace Control {

    class TemperatureControl {
    public:
        TemperatureControl(CPU::GPIO& gpio);

        void updateTemperature(int currentTemperature);
        void run();

    private:
        CPU::GPIO& gpio;

        void controlTemperature(int temperature);
    };

}

#endif // TEMPCONTROL_H
