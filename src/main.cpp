#include "cpuCore.h"
#include "rtos.h"
#include "gpio.h"
#include "trafficLight.h"
#include "tempControl.h"

int main() {
    CPU::GPIO gpio(5);  // Assume 5 GPIO pins
    Control::TrafficLightControl trafficLightControl(gpio);
    Control::TemperatureControl temperatureControl(gpio);

    RTOS::RTOS rtos;

    // Create tasks for traffic light and temperature control
    rtos.createTask([&]() { trafficLightControl.run(); });
    rtos.createTask([&]() { temperatureControl.run(); });

    // Start the RTOS
    rtos.run();

   
