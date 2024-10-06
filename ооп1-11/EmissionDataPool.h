#pragma once
#include <string>
#include <queue>
#include "EmissionData.h"

using namespace std;
class EmissionDataPool {
private:
    queue<EmissionData> pool;
public:
    EmissionDataPool();
    EmissionData acquire();
    void release(const EmissionData& data);
};