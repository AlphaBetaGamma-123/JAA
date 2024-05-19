#ifndef BONDS_H
#define BONDS_H

#include "Security.h"
#include <string>

class Bonds : public Security {
public:
    Bonds(const std::string &issuer, int maturity, double coupon_rate, int face_value, const std::string &buy_date_limit, const std::string &credit_risk);
    
    std::string get_issuer() const;
    int get_maturity() const;
    double get_coupon_rate() const;
    int get_face_value() const;
    std::string get_buy_date_limit() const;
    std::string get_credit_risk() const;

    void display() const override;
    std::string get_symbol() const override { return issuer; }
    double get_price() const override { return face_value; }

private:
    std::string issuer;
    int maturity;
    double coupon_rate;
    int face_value;
    std::string buy_date_limit;
    std::string credit_risk;
};

#endif // BONDS_H
