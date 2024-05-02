#include <iostream>
#include "Tesla.h"

int main() {
    Tesla myTesla('S', 50000);
    std::cout << "Tesla Model: " << myTesla.get_model() << std::endl;


    std::cout << "Battery percentage: " << myTesla.get_batteryPercentage() << "%" << std::endl;

    myTesla.drive(10);  
    std::cout << "Battery percentage after driving: " << myTesla.get_batteryPercentage() << "%" << std::endl;


    std::cout << "Emissions after driving: " << myTesla.get_emissions() << "g CO2" << std::endl;


    myTesla.chargeBattery(60);  
    std::cout << "Battery percentage after charging: " << myTesla.get_batteryPercentage() << "%" << std::endl;

    return 0;
}
