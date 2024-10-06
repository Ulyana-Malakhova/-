#pragma once
#include <string>

using namespace std;
class IAlertSystem {
public:
    virtual void sendAlert(string& alert) = 0;
    virtual void configureAlerts() = 0;
    virtual ~IAlertSystem() = default;
};