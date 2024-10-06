#include "IndustrialFacility.h"
#include <iostream>
#include <string.h>

using namespace std;
string IndustrialFacility::getFacilitiesData(){
    return name + " located at " + address + " with emission limit: " + to_string(emissionLimit);
}

bool IndustrialFacility::checkCompliance(double currentEmission) {
    return currentEmission <= emissionLimit;
}