#include "cpuCore.h"
#include "rtos.h"
#include "gpio.h"
#include "trafficLight.h"
#include "tempControl.h"
#include <iostream>
using namespace std;

int main() {
    cout << "starting embedded sim..." << endl;
    CPU::GPIO gpio(5);  // Assume 5 GPIO pins
    Control::TrafficLightControl trafficLightControl(gpio);
    Control::TemperatureControl temperatureControl(gpio);

    RTOS::RTOS rtos;
    cout << "Creating tasks..." << endl;
    // Create tasks for traffic light and temperature control
    rtos.createTask([&]() { trafficLightControl.run(); });
    rtos.createTask([&]() { temperatureControl.run(); });

    cout << "starting rtos..." << endl;
    // Start the RTOS
    rtos.run();

    cout << "rtos finished..." << endl;
    return 0;
}
   
