#include <iostream>
#include "car.h"

int main() {


    Car myCar(25000); 


    std::cout << "Initial price: $" << myCar.get_price() << std::endl;


    std::cout << "Initial emissions: " << myCar.get_emissions() << " CO2" << std::endl;

    myCar.drive(10);  

    std::cout << "Emissions after driving 10 kms: " << myCar.get_emissions() << " CO2" << std::endl;

    return 0;
}
