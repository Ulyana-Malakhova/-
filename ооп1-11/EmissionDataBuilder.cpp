#include "EmissionDataBuilder.h"
#include <iostream>
#include <string.h>

using namespace std;
EmissionDataBuilder& EmissionDataBuilder::setTimestamp(const string& ts) {
    timestamp = ts;
    return *this;
}

EmissionDataBuilder& EmissionDataBuilder::setPollutantType(const string& type) {
    pollutantType = type;
    return *this;
}

EmissionDataBuilder& EmissionDataBuilder::setConcentration(double con) {
    concentration = con;
    return *this;
}

EmissionDataBuilder& EmissionDataBuilder::setUnit(const string& u) {
    unit = u;
    return *this;
}

EmissionData EmissionDataBuilder::build() {
    return EmissionData(timestamp, pollutantType, concentration, unit);
}