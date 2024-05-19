#ifndef SECURITY_H
#define SECURITY_H

#include <iostream>
#include <map>
#include <string>
#include <ctime>

class Security {
public:
    virtual void display() const = 0;
    virtual std::string get_symbol() const = 0;
    virtual double get_price() const = 0;
};

#endif // SECURITY_H
