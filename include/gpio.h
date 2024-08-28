#ifndef GPIO_H
#define GPIO_H

#include <vector>
using namespace std;

namespace CPU {

    class GPIO {
    public:
        GPIO(int numPins);

        void setPinState(int pin, bool state);
        bool getPinState(int pin) const;

    private:
        std::vector<bool> pins;
    };

}

#endif // GPIO_H
