#include "EmissionDataPool.h"
#include <iostream>
#include <string.h>

using namespace std;
EmissionDataPool::EmissionDataPool() {
    for (int i = 0; i < 5; ++i) {
        pool.push(EmissionData("Placeholder", "Placeholder", 0.0, "ppm"));
    }
}

EmissionData EmissionDataPool::acquire() {
    if (pool.empty()) {
        throw std::runtime_error("No available EmissionData objects in the pool");
    }
    EmissionData data = pool.front();
    pool.pop();
    return data;
}

void EmissionDataPool::release(const EmissionData& data) {
    pool.push(data);
}