#include "ETFs.h"

ETFs::ETFs(const std::string &company, int risk, const std::string &synthetic_physical, double distribution, double fund_value)
    : company(company), risk(risk), synthetic_physical(synthetic_physical), distribution(distribution), fund_value(fund_value), value_change(0.0), trend("stable") {}

std::string ETFs::get_company() const { return company; }
int ETFs::get_risk() const { return risk; }
std::string ETFs::get_synthetic_or_physical() const { return synthetic_physical; }
double ETFs::get_distribution() const { return distribution; }
double ETFs::get_fund_value() const { return fund_value; }
double ETFs::get_value_change() const { return value_change; }
std::string ETFs::get_trend() const { return trend; }
std::map<std::time_t, double> ETFs::get_chart() const { return chart; }

void ETFs::update_value(double new_value) {
    value_change = new_value - fund_value;
    fund_value = new_value;
    chart[std::time(0)] = fund_value;
    trend = value_change > 0 ? "upward" : (value_change < 0 ? "downward" : "stable");
}

void ETFs::display() const {
    std::cout << "ETFs: " << company << " | Fund Value: " << fund_value 
              << " | Distribution: " << distribution << " | Type: " << synthetic_physical << std::endl;
}
