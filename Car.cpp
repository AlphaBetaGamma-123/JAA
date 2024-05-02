// Car.cpp
#include "Car.h"  

Car::Car() : price(0), emissions(0) {
    // Default constructor does nothing additional
}

Car::Car(int price) : price(price), emissions(0) {
    // Constructor initializes price and sets emissions to 0
}

int Car::get_price() const {
    return price;
}

void Car::set_price(int price) {
    this->price = price;
}

int Car::get_emissions() const {
    return emissions;
}

void Car::set_emissions(int emissions) {
    this->emissions = emissions;
}

void Car::drive(int kms) {
    emissions += 20 * kms;  // Update emissions based on kilometers driven
}
