#include "Report.h"
#include "User.h"
#include "IndustrialFacility.h"
#include "Sensor.h"
#include "EmissionMonitor.h"
#include "EmissionData.h"
#include <iostream>

int main() {
    // Создание объектов
    //Пользователь(id, имя, должность)
    User userAdmin("1", "AdminUser", "Admin");
    userAdmin.login();
    //Промышленный объект(id, название, адресс, лимит выбросов)
    IndustrialFacility facility("F001", "Factory A", "Central park", 100.0);
    Sensor sensor("S001", "Gas", "2023-09-01");
    //Монитор выбросов(id, информация о выбросах)
    EmissionMonitor monitor("M001", facility.getFacilitiesData());
    monitor.startMonitoring();
    //Данные о выбросах(дата, тип загрязняющего вещества, сосредоточенность, единица измерения)
    EmissionData data("20-04-2024", "CO2", 95.0, "ppm");
    std::cout << data.toString() << std::endl;
    // Отчет(id, информация о выбросах)
    Report report("R001", facility.getFacilitiesData());
    report.addEmissionData(data);
    report.generateReport();
    monitor.stopMonitoring();
    userAdmin.logout();
    return 0;
}
