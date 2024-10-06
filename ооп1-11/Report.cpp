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

size_t Report::getSize() {
    return emissionData.size();
}


vector<EmissionData>::const_iterator Report::begin() {
    return emissionData.cbegin();
}

vector<EmissionData>::const_iterator Report::end() {
    return emissionData.cend();
}