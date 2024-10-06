#pragma once
#include <string>
#include "EmissionData.h"

using namespace std;
class EmissionDataBuilder {
private:
    string timestamp;
    string pollutantType;
    double concentration;
    string unit;
public:
    EmissionDataBuilder& setTimestamp(const string& ts);
    EmissionDataBuilder& setPollutantType(const string& type);
    EmissionDataBuilder& setConcentration(double con);
    EmissionDataBuilder& setUnit(const string& u);
    EmissionData build();
};