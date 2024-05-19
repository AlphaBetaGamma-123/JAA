#include "Portfolio.h"

Portfolio::Portfolio(const std::string &owner) : owner(owner), total_value(0.0) {}

void Portfolio::add_investment(Security* security) {
    investments.push_back(security);
    update_total_value();
}

void Portfolio::remove_investment(const std::string &symbol) {
    auto it = std::remove_if(investments.begin(), investments.end(), [&symbol](Security* security) {
        return security->get_symbol() == symbol;
    });

    if (it != investments.end()) {
        investments.erase(it, investments.end());
        update_total_value();
    }
}

double Portfolio::get_total_value() const {
    return total_value;
}

void Portfolio::display_investments() const {
    std::cout << "Portfolio of " << owner << ":" << std::endl;
    for (const auto& investment : investments) {
        investment->display();
    }
}

void Portfolio::update_total_value() {
    total_value = 0.0;
    for (const auto& investment : investments) {
        total_value += investment->get_price();
    }
}
