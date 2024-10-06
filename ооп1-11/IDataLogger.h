#pragma once
#include <string>
#include <vector>

using namespace std;
class IDataLogger {
public:
    virtual void logData(string& emissionData) = 0;
    virtual vector<string> retrieveLogs() = 0;
    virtual ~IDataLogger() = default;
};