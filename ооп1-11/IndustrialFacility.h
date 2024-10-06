#pragma once
#include <string>

using namespace std;
class IndustrialFacility {
private:
    string facilityID;
    string name;
    string address;
    double emissionLimit;
public:
    IndustrialFacility(const string& id, const string& n, const string& addr, double el)
        : facilityID(id), name(n), address(addr), emissionLimit(el) {}
    string getFacilitiesData();
    bool checkCompliance(double currentEmission);
};