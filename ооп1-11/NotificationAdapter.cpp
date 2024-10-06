#include "NotificationAdapter.h"
#include <iostream>
#include <string.h>

using namespace std;
void NotificationAdapter::logData(const string& emissionData) {
    cout << "Logging Notification: " << notification.getMessage() << ": " << emissionData << endl;
}

vector<string> NotificationAdapter::retrieveLogs() {
    return { "Logged notification: " + notification.getMessage() };
}