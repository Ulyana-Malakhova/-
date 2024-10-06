#include "Sensor.h"
#include <iostream>
#include <string.h>

using namespace std;
void Sensor::readData() {
        cout << "Reading data from sensor " << sensorID << endl;
}

void Sensor::calibrate() {
        cout << "Calibrating sensor " << sensorID << endl;
}

bool Sensor::getSensorStatus() {
        return status;
}