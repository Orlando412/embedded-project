#include "utility.h" 
using namespace std;

namespace Utility {

  void logMessage(const string& message) {
    cout << "Log: " << message << endl;
  }


  int clamp(int value, int min, int max) {
    if(value < min) {
      return min;
    }
    if(value > max) {
      return max;
    }
    return value;

  }


}