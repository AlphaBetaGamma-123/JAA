#include "Bonds.h"

Bonds::Bonds(const std::string &issuer, int maturity, double coupon_rate, int face_value, const std::string &buy_date_limit, const std::string &credit_risk)
    : issuer(issuer), maturity(maturity), coupon_rate(coupon_rate), face_value(face_value), buy_date_limit(buy_date_limit), credit_risk(credit_risk) {}

std::string Bonds::get_issuer() const { return issuer; }
int Bonds::get_maturity() const { return maturity; }
double Bonds::get_coupon_rate() const { return coupon_rate; }
int Bonds::get_face_value() const { return face_value; }
std::string Bonds::get_buy_date_limit() const { return buy_date_limit; }
std::string Bonds::get_credit_risk() const { return credit_risk; }

void Bonds::display() const {
    std::cout << "Bonds: " << issuer << " | Face Value: " << face_value 
              << " | Coupon Rate: " << coupon_rate << " | Maturity: " << maturity << std::endl;
}
