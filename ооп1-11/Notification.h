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
    Notification(const string& id, const string& msg, const string& sev, const string& ts)
        : notificationID(id), message(msg), severity(sev), timestamp(ts) {}
    void sendNotification();
    string getMessage();
};