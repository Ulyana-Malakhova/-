#include "User.h"
#include "Report.h"
#include "EmissionDataPool.h"
#include "EmissionData.h"
#include "Logger.h"
#include "EmissionDataBuilder.h"
#include <iostream>

Logger* Logger::instance = nullptr;

int main() {
    // Создание объектов
    //Объявление объекта Singleton
    Logger& logger = Logger::getInstance();
    //Пользователь(id, имя, должность)
    User userAdmin("1", "AdminUser", "Admin");
    userAdmin.login();
    // Builder для данных о выбросах
    EmissionDataBuilder builder;
    EmissionData data1 = builder.setTimestamp("2023-10-06T07:00:00")
        .setPollutantType("CO2")
        .setConcentration(95.0)
        .setUnit("ppm")
        .build();
    EmissionData data2 = builder.setTimestamp("2023-10-06T08:00:00")
        .setPollutantType("NO2")
        .setConcentration(85.0)
        .setUnit("ppm")
        .build();
    // Object Pool
    EmissionDataPool pool;
    try {
        auto data3 = pool.acquire();
        pool.release(data3); 
        // Отчет(id, id объекта)
        Report report("R001", "F001");
        report.addEmissionData(data1);
        report.addEmissionData(data2);
        report.generateReport();
        // Логирование
        logger.log(data1.toString());
        logger.log(data2.toString());
        // Клонирование отчета
        Report* clonedReport = report.clone();
        clonedReport->generateReport(); 
        delete clonedReport; 
    }
    catch (const std::runtime_error& e) {
        logger.log(e.what());
    }
    userAdmin.logout();
    return 0;
}
