#pragma once
#include <string>
#include "EmissionMonitor.h"

using namespace std;
class EmissionMonitorDecorator : public EmissionMonitor {
private:
    EmissionMonitor& monitor;
public:
    EmissionMonitorDecorator(EmissionMonitor& mon) : EmissionMonitor(mon), monitor(mon) {}
    void startMonitoring() override;
    void stopMonitoring() override;
};