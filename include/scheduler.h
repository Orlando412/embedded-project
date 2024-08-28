#ifndef SCHEDULER_H
#define SCHEDULER_H

#include <queue>
#include <functional>
using namespace std;

namespace RTOS {

  using Task = function<void()>;

  class Scheduler {
    public: 
      void addTask(Task task);
      void runNextTask();
      bool hasTask() const;

    private:
      queue<Task> taskQueue;

  };


}





#endif //SCHEDULER_H