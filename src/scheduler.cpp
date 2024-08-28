#include "scheduler.h"



namespace RTOS {

  void Scheduler::addTask(Task task) {
    taskQueue.push(task);
  }

  void Scheduler::runNextTask() {
    if(!taskQueue.empty()) {
      Task currentTask = taskQueue.front();
      taskQueue.pop();
      currentTask();
    }
  }

  bool Scheduler::hasTask() const {
    return !taskQueue.empty();
  }

}






