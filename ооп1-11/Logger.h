#pragma once
#include <string>
#include <vector>

using namespace std;
class Logger {
private:
    static Logger* instance;
    vector<string> logEntries;
    Logger() = default; // Private constructor
public:
    static Logger& getInstance();
    void log(const string& message);
    const vector<string>& getLogs() const;
};