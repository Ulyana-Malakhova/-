#pragma once
#include <string>

using namespace std;
class Notification {
private:
    string notificationID;
    string message;
    string severity;
    string timestamp;
public:
    Notification(string& id, string& msg, string& sev, string& ts)
        : notificationID(id), message(msg), severity(sev), timestamp(ts) {}
    void sendNotification();
};