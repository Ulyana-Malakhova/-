#pragma once
#include <string>
#include "Notification.h"
#include "IDataLogger.h"

using namespace std;
class NotificationAdapter : public IDataLogger {
private:
    Notification& notification;
public:
    NotificationAdapter(Notification& notif) : notification(notif) {}
    void logData(const string& emissionData) override;
    vector<string> retrieveLogs() override;
};