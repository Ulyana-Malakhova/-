#pragma once
#include "EmissionData.h"
#include <string>
#include <vector>
#include <chrono>

using namespace std;
class Report {
protected:
    string reportID;
    chrono::system_clock::time_point generatedTimestamp;
    string facilityID;
    vector<EmissionData> emissionData;
public:
    Report(const string& id, const string& fid)
        : reportID(id),  facilityID(fid) {}
    void addEmissionData( EmissionData& data);
    void generateReport();
    size_t getSize();
    // Iterator
    vector<EmissionData>::const_iterator begin();
    vector<EmissionData>::const_iterator end();
};