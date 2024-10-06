#include "Report.h"
#include "User.h"
#include "IndustrialFacility.h"
#include "Sensor.h"
#include "EmissionMonitor.h"
#include "EmissionData.h"
#include "EmissionMonitorProxy.h"
#include "EmissionLoggerDelegate.h"
#include <iostream>

int main() {
    // Создание объектов
    //Пользователь(id, имя, должность)
    User userAdmin("1", "AdminUser", "Admin");
    userAdmin.login();
    //Промышленный объект(id, название, адресс, лимит выбросов)
    IndustrialFacility facility("F001", "Factory A", "Central park", 100.0);
    auto sensor = std::make_shared<EmissionMonitor>("M001", facility.getFacilitiesData());
    // Использование прокси
    EmissionMonitorProxy monitorProxy(sensor);
    monitorProxy.startMonitoring();
    //Данные о выбросах(дата, тип загрязняющего вещества, сосредоточенность, единица измерения)
    EmissionData data("20-04-2024", "CO2", 95.0, "ppm");
    std::cout << data.toString() << std::endl;
    // Реализация делегирования
    EmissionLoggerDelegate logger;
    logger.logData(data.toString());
    // Отчет(id, информация о выбросах)
    Report report("R001", facility.getFacilitiesData());
    report.addEmissionData(data);
    report.generateReport();
    monitorProxy.stopMonitoring();
    userAdmin.logout();
    return 0;
}
