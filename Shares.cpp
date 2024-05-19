#include "Shares.h"

Shares::Shares(const std::string &company, int risk, double dividend, double share_price)
    : company(company), risk(risk), dividend(dividend), share_price(share_price), value_change(0.0), trend("stable") {}

std::string Shares::get_company() const { return company; }
int Shares::get_risk() const { return risk; }
double Shares::get_dividend() const { return dividend; }
double Shares::get_share_price() const { return share_price; }
double Shares::get_value_change() const { return value_change; }
std::string Shares::get_trend() const { return trend; }
std::map<std::time_t, double> Shares::get_chart() const { return chart; }

void Shares::update_price(double new_price) {
    value_change = new_price - share_price;
    share_price = new_price;
    chart[std::time(0)] = share_price;
    trend = value_change > 0 ? "upward" : (value_change < 0 ? "downward" : "stable");
}

void Shares::display() const {
    std::cout << "Shares: " << company << " | Price: " << share_price << " | Dividend: " << dividend << std::endl;
}
