#include "Tesla.h"

Tesla::Tesla() : Car(), model(' '), batteryPercentage(100.0) {
   
}

Tesla::Tesla(char model, int price) : Car(price), model(model), batteryPercentage(100.0) {
    
}

char Tesla::get_model() const {

    return model;
}

void Tesla::set_model(char model) {

    this->model = model;
}

float Tesla::get_batteryPercentage() const {

    
    return batteryPercentage;
}

void Tesla::set_batteryPercentage(float percentage) {


    if (percentage < 0) percentage = 0;
    else if (percentage > 100) percentage = 100;
    batteryPercentage = percentage;


}

void Tesla::chargeBattery(int mins) {
    batteryPercentage += 0.5 * mins;
    set_batteryPercentage(batteryPercentage);  
}

void Tesla::drive(int kms) {


    if (batteryPercentage > 0) {
        int possibleKms = batteryPercentage * 5; 
        if (kms > possibleKms) kms = possibleKms;
        batteryPercentage -= kms / 5.0;
        set_batteryPercentage(batteryPercentage);  
        set_emissions(get_emissions() + 74 * kms); 
    }


}
