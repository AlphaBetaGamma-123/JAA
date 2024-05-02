#include <iostream>
#include "Ford.h"

int main() {


    Ford myFord(1234, 30000);
    std::cout << "Ford Badge Number: " << myFord.get_badgeNumber() << std::endl;
    std::cout << "Initial fuel: " << myFord.get_litresOfFuel() << "L" << std::endl;

    myFord.drive(100); 
    std::cout << "Fuel after driving: " << myFord.get_litresOfFuel() << "L" << std::endl;
    
    std::cout << "Emissions after driving: " << myFord.get_emissions() << "g CO2" << std::endl;

    myFord.refuel(20);  

    std::cout << "Fuel after refueling: " << myFord.get_litresOfFuel() << "L" << std::endl;

    return 0;
}
