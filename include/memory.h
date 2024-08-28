#ifndef MEMORY_H
#define MEMORY_H

#include <vector>
using namespace std;

namespace CPU {

  class Memory {
    public: 
    Memory(size_t size);
    uint8_t read(size_t address) const;
    void write(size_t address, uint8_t value);

    private:
    vector<uint8_t> memory;

  };

}


#endif //MEMORY_H