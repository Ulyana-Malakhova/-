#include "EmissionMonitorDecorator.h"
#include <iostream>
#include <string.h>

using namespace std;
void EmissionMonitorDecorator::startMonitoring() {
    cout << "Decorator: Performing pre-start checks..." << endl;
    monitor.startMonitoring();
}

void EmissionMonitorDecorator::stopMonitoring() {
    cout << "Decorator: Performing pre-stop checks..." << endl;
    monitor.stopMonitoring();
}