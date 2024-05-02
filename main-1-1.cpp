// main-1-1.cpp
#include <iostream>
#include "car.h"

int main() {
    Car myCar(25000);  // Create a Car with a price of 25000
    std::cout << "Initial price: $" << myCar.get_price() << std::endl;
    std::cout << "Initial emissions: " << myCar.get_emissions() << " CO2" << std::endl;

    myCar.drive(10);  // Drive the car for 10 kilometers
    std::cout << "Emissions after driving 10 kms: " << myCar.get_emissions() << " CO2" << std::endl;

    return 0;
}
