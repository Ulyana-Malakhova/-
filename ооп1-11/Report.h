#pragma once
#include "EmissionData.h"
#include <string>
#include <vector>
#include <chrono>

using namespace std;
class Report {
private:
    string reportID;
    chrono::system_clock::time_point generatedTimestamp;
    string facilityID;
    vector<EmissionData> emissionData;
public:
    Report(const string& id, const string& fid)
        : reportID(id),  facilityID(fid) {}
    void generateReport();
    void addEmissionData(EmissionData& data);
};