// Car.h
#ifndef CAR_H
#define CAR_H

class Car {
public:
    Car();  // Default constructor
    Car(int price);  // Constructor with price

    int get_price() const;
    void set_price(int price);

    int get_emissions() const;
    void set_emissions(int emissions);

    virtual void drive(int kms);

private:
    int price;
    int emissions;
};

#endif
