#include "EmissionMonitorProxy.h"
#include <iostream>
#include <string.h>

using namespace std;
void EmissionMonitorProxy::startMonitoring() {
    cout << "Proxy: Preparing to start monitoring..." << endl;
    monitor->startMonitoring();
}

void EmissionMonitorProxy::stopMonitoring() {
    cout << "Proxy: Preparing to stop monitoring..." << endl;
    monitor->stopMonitoring();
}

string EmissionMonitorProxy::getStatus() {
    return monitor->getStatus();
}