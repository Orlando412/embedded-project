#include "rtos.h"
using namespace std;

namespace RTOS {

RTOS::RTOS() {}

void RTOS::createTask(const function<void()>& task) {
    scheduler.addTask(task);
}

void RTOS::run() {
    while (scheduler.hasTask()) {
        scheduler.runNextTask();
    }
}

}
