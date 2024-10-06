#include "EmissionLoggerDelegate.h"
#include <iostream>
#include <string.h>

using namespace std;
void EmissionLoggerDelegate::logData(const string& emissionData) {
    cout << "Logging data: " << emissionData << endl;
}