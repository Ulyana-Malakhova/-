#include "Report.h"
#include "User.h"
#include "IndustrialFacility.h"
#include "Notification.h"
#include "EmissionMonitor.h"
#include "EmissionData.h"
#include "NotificationAdapter.h"
#include "EmissionMonitorDecorator.h"
#include <iostream>

int main() {
    // Создание объектов
    //Пользователь(id, имя, должность)
    User userAdmin("1", "AdminUser", "Admin");
    userAdmin.login();
    // Монитор выбросов(id, расположение)
    EmissionMonitor originalMonitor("M001", "Factory A");
    EmissionMonitorDecorator decoratedMonitor(originalMonitor);
    decoratedMonitor.startMonitoring();
    // Данные о выбросах(дата, тип загрязнения, концентрация, единица измерения)
    EmissionData data1("2023-10-06T07:00:00", "CO2", 95.0, "ppm");
    EmissionData data2("2023-10-06T08:00:00", "NO2", 85.0, "ppm");
    // Отчет(дата, id)
    Report report( "2023-10-06", "F001");
    report.addEmissionData(data1);
    report.addEmissionData(data2);
    report.generateReport();
    // Использование итератора
    for (const auto& data : report) {
        std::cout << data.toString() << std::endl;
    }
    // Уведомление(id, сообщение, серьезность, дата)
    Notification notification("N001", "High CO2 levels detected", "High", "2023-10-06T07:10:00");
    //Реализация Адаптера
    NotificationAdapter notificationLogger(notification);
    notificationLogger.logData(data1.toString());
    decoratedMonitor.stopMonitoring();
    userAdmin.logout();
    return 0;
}
