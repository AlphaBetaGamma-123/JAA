#include "Buyer.h"

void Buyer::buy_security(Security* security, double price) {
    if (deposited_funds >= price) {
        invested_amount += price;
        deposited_funds -= price;
        add_to_portfolio(security);
    } else {
        std::cout << "Insufficient funds to buy the security." << std::endl;
    }
}

void Buyer::display() const {
    std::cout << "Buyer: " << client_name << " | Email: " << client_email << " | Deposited Funds: " << deposited_funds << std::endl;
}
