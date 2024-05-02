// Ford.cpp
#include "Ford.h"

Ford::Ford() : Car(), badgeNumber(0), litresOfFuel(60.0) {
    // Default constructor with initial fuel and no badge number
}

Ford::Ford(int badgeNumber, int price) : Car(price), badgeNumber(badgeNumber), litresOfFuel(60.0) {
    // Constructor with badge number and price, initial fuel set to 60L
}

int Ford::get_badgeNumber() const {
    return badgeNumber;
}

void Ford::set_badgeNumber(int badgeNumber) {
    this->badgeNumber = badgeNumber;
}

float Ford::get_litresOfFuel() const {
    return litresOfFuel;
}

void Ford::set_litresOfFuel(float litres) {
    if (litres > 60) litres = 60;
    if (litres < 0) litres = 0;
    litresOfFuel = litres;
}

void Ford::refuel(int litres) {
    set_litresOfFuel(litresOfFuel + litres);
}

void Ford::drive(int kms) {
    int possibleKms = litresOfFuel * 5;
    if (kms > possibleKms) kms = possibleKms;
    litresOfFuel -= kms / 5.0;
    set_litresOfFuel(litresOfFuel);  // Ensure fuel doesn't go negative
    set_emissions(get_emissions() + 234 * kms); // 234g CO2 per km
}
