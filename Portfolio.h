#ifndef PORTFOLIO_H
#define PORTFOLIO_H

#include "Security.h"
#include <vector>
#include <string>

class Portfolio {
public:
    Portfolio(const std::string &owner);

    void add_investment(Security* security);
    void remove_investment(const std::string &symbol);
    double get_total_value() const;
    void display_investments() const;

private:
    std::string owner;
    std::vector<Security*> investments;
    double total_value;

    void update_total_value();
};

#endif // PORTFOLIO_H


