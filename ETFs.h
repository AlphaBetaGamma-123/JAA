#ifndef ETFS_H
#define ETFS_H

#include "Security.h"
#include <map>

class ETFs : public Security {
public:
    ETFs(const std::string &company, int risk, const std::string &synthetic_physical, double distribution, double fund_value);
    
    std::string get_company() const;
    int get_risk() const;
    std::string get_synthetic_or_physical() const;
    double get_distribution() const;
    double get_fund_value() const;
    double get_value_change() const;
    std::string get_trend() const;
    std::map<std::time_t, double> get_chart() const;
    void update_value(double new_value);

    void display() const override;
    std::string get_symbol() const override { return company; }
    double get_price() const override { return fund_value; }

private:
    std::string company;
    int risk;
    std::string synthetic_physical;
    double distribution;
    double fund_value;
    double value_change;
    std::string trend;
    std::map<std::time_t, double> chart;
};

#endif 
