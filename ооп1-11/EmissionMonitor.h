#pragma once
#include <string>

using namespace std;
class EmissionMonitor {
private:
    string monitorID;
    string location;
    bool status;
public:
    EmissionMonitor(const string& id, const string& loc)
        : monitorID(id), location(loc), status(false){}
    virtual void startMonitoring();
    virtual void stopMonitoring();
    string getStatus();
};