#include "Seller.h"

void Seller::sell_security(const std::string &symbol, double price) {
    auto it = std::find_if(portfolio.begin(), portfolio.end(), [&symbol](Security* security) {
        return security->get_symbol() == symbol;
    });

    if (it != portfolio.end()) {
        invested_amount -= price;
        deposited_funds += price;
        portfolio.erase(it);
    } else {
        std::cout << "Security not found in portfolio." << std::endl;
    }
}

void Seller::display() const {
    std::cout << "Seller: " << client_name << " | Email: " << client_email << " | Deposited Funds: " << deposited_funds << std::endl;
}
