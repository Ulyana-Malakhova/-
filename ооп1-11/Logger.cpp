#include "Logger.h"
#include <iostream>
#include <string.h>

using namespace std;
Logger& Logger::getInstance() {
    if (!instance) {
        instance = new Logger();
    }
    return *instance;
}

void Logger::log(const string& message) {
    logEntries.push_back(message);
    cout << "Log: " << message << endl;
}

const vector<string>& Logger::getLogs() const {
    return logEntries;
}