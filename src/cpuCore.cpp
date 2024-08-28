#include "cpuCore.h"

namespace CPU { 

  CPUcore::CPUcore() : programCounter(0), registers(8,0) {}

  void CPUcore::reset() {
    programCounter = 0;
    std::fill(registers.begin(), registers.end(), 0);
}

  void CPUcore::executeInstructions(uint8_t opcode) {
      switch (opcode) {
          case 0x01: //  opcode for load immediate
              loadImmediate(0x42); // Load the value 0x42 into a register 
              break;
          case 0x02: //  opcode for add
              add(0, 1); // Add contents of register 0 and register 1
              break;
          // Add more cases for other instructions
          default:
              // Handle unknown instructions
              break;
      }
  }

    void CPUcore::loadImmediate(uint8_t value) {
      registers[0] = value; //  load the value into register 0
  }

  void CPUcore::add(uint8_t reg1, uint8_t reg2) {
      registers[reg1] += registers[reg2];
  }

  uint16_t CPUcore::getProgramCounter() const {
      return programCounter;
  };

}