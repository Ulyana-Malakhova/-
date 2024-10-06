#include "Report.h"
#include <iostream>
#include <string.h>
#include <chrono>

using namespace std;
void Report::generateReport() {
    this->generatedTimestamp = chrono::system_clock::now();
    cout << "Report generated for Facility ID: " << facilityID << endl;
}

void Report::addEmissionData( EmissionData& data) {
    emissionData.push_back(data);
}