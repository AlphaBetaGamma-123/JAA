// main-2-1.cpp
#include <iostream>
#include "Tesla.h"

int main() {
    Tesla myTesla('S', 50000);
    std::cout << "Tesla Model: " << myTesla.get_model() << std::endl;
    std::cout << "Battery percentage: " << myTesla.get_batteryPercentage() << "%" << std::endl;

    myTesla.drive(10);  // Try to drive 10 kms
    std::cout << "Battery percentage after driving: " << myTesla.get_batteryPercentage() << "%" << std::endl;
    std::cout << "Emissions after driving: " << myTesla.get_emissions() << "g CO2" << std::endl;

    myTesla.chargeBattery(60);  // Charge for 60 minutes
    std::cout << "Battery percentage after charging: " << myTesla.get_batteryPercentage() << "%" << std::endl;

    return 0;
}
