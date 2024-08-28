#ifndef RTOS_H
#define RTOS_H

#include <functional>
#include "scheduler.h"
using namespace std;

namespace RTOS {


  class RTOS {
    public: 
      RTOS();
      void createTask(const function<void()>& task);
      void run();


    private:
    Scheduler scheduler;

  };



}


#endif //RTOS_H