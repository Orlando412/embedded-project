#ifndef CPUCORE_H
#define CPUCORE_H

#include <vector>
#include <cstdint>
using namespace std;

namespace CPU {


      class CPUcore {
        public:
         CPUcore();
         void reset();
         void executeInstructions(uint8_t opCode);
         uint16_t getProgramCounter() const;
         

         private:
          uint16_t programCounter;
          vector<uint8_t> registers;
          void loadImmediate(uint8_t value);
          void add(uint8_t reg1, uint8_t reg2);

      };
}



#endif //CPUCORE_H