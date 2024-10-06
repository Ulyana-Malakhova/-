#include "EmissionMonitor.h"
#include <iostream>
#include <string.h>

using namespace std;
void EmissionMonitor::startMonitoring() {
    this->status = true;
    cout << "Monitoring started at " << location << endl;
}

void EmissionMonitor::stopMonitoring() {
    status = false;
    cout << "Monitoring stopped at " << location << endl;
}

string EmissionMonitor::getStatus() {
    return status ? "Monitoring active" : "Monitoring stopped";
}