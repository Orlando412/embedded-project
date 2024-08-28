#include "memory.h"


namespace CPU {

  Memory::Memory(size_t size) : memory(size, 0) {}

  uint8_t Memory::read(size_t address) const {
    if(address < memory.size()) {
      return memory[address];
    }
    //return 0 if the address is out of range 
    return 0; 

  }

  void Memory::write(size_t address, uint8_t value) {
    if(address < memory.size()) {
      memory[address] = value;
    }

  }

}





