#ifndef UTILS_H
#define UTILS_H

#include <iostream>
#include <string>
using namespace std;

namespace Utilty {

  void logMessage(const string& message);
  int clamp(int value, int min, int max);

}


#endif //UTILS_H