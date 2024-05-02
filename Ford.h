#ifndef FORD_H
#define FORD_H

#include "Car.h"

class Ford : public Car {


public:
        Ford();


        Ford(int badgeNumber, int price);

        int get_badgeNumber() const;
        void set_badgeNumber(int badgeNumber);

        float get_litresOfFuel() const;
        void set_litresOfFuel(float litres);

        void refuel(int litres);
        virtual void drive(int kms) override;
private:


    int badgeNumber;
    float litresOfFuel;
};

#endif
