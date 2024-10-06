#pragma once
#include <string>

using namespace std;
class IComplianceChecker {
public:
    virtual bool checkCompliance(double currentEmission) = 0;
    virtual string generateComplianceReport() = 0;
    virtual ~IComplianceChecker() = default;
};