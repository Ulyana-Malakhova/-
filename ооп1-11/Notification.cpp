#include "Notification.h"
#include <iostream>
#include <string.h>

using namespace std;
void Notification::sendNotification() {
    cout << "Notification: " << message << " (Severity: " << severity << ")" << endl;
}

string Notification::getMessage() {
    return message;
}