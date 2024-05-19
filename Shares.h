#ifndef SHARES_H
#define SHARES_H

#include "Security.h"
#include <map>

class Shares : public Security {
public:
    Shares(const std::string &company, int risk, double dividend, double share_price);
    
    std::string get_company() const;
    int get_risk() const;
    double get_dividend() const;
    double get_share_price() const;
    double get_value_change() const;
    std::string get_trend() const;
    std::map<std::time_t, double> get_chart() const;
    void update_price(double new_price);

    void display() const override;
    std::string get_symbol() const override { return company; }
    double get_price() const override { return share_price; }

private:
    std::string company;
    int risk;
    double dividend;
    double share_price;
    double value_change;
    std::string trend;
    std::map<std::time_t, double> chart;
};

#endif // SHARES_H
