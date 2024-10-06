#include "EmissionData.h"
#include <iostream>
#include <string.h>

using namespace std;
string EmissionData::toString() {
	return timestamp + ": " + pollutantType + " - " + to_string(concentration) + " " + unit;
}
