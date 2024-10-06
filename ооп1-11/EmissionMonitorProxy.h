#pragma once
#include <string>
#include <memory>
#include "EmissionMonitor.h"

using namespace std;
class EmissionMonitorProxy {
private:
    shared_ptr<EmissionMonitor> monitor;
public:
    EmissionMonitorProxy(shared_ptr<EmissionMonitor> realMonitor) : monitor(realMonitor) {}
    void startMonitoring();
    void stopMonitoring();
    string getStatus();
};
