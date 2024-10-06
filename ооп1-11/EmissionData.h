#pragma once
#include <string>

using namespace std;
class EmissionData {
private:
    string timestamp;
    string pollutantType;
    double concentration;
    string unit;
public:
    EmissionData(const string& ts, const string& pt, double con, const string& u)
        : timestamp(ts),pollutantType(pt), concentration(con), unit(u) {}
    string toString();
};