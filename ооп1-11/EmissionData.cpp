#include "EmissionData.h"
#include <iostream>
#include <string.h>

using namespace std;
string EmissionData::toString() const {
	return timestamp + ": " + pollutantType + " - " + to_string(concentration) + " " + unit;
}
