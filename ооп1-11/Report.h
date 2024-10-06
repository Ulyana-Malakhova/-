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
    Report(const Report& other) // Второй конструктор для паттерна Prototype
        : reportID(other.reportID), generatedTimestamp(other.generatedTimestamp), facilityID(other.facilityID), emissionData(other.emissionData) {}
    void addEmissionData( EmissionData& data);
    void generateReport();
    size_t getSize();
    // Iterator
    vector<EmissionData>::const_iterator begin();
    vector<EmissionData>::const_iterator end();
    // Метод Clone для паттерна Prototype
    Report* clone() const;
};