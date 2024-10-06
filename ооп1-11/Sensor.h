#pragma once
#include <string>

using namespace std;
class Sensor {
private:
    string sensorID;
    string type;
    string calibrationDate;
    bool status;
public:
    Sensor(const string& id, const string& t, const string& cd)
        : sensorID(id), type(t), calibrationDate(cd), status(true) {}
    void readData();
    void calibrate();
    bool getSensorStatus();
};