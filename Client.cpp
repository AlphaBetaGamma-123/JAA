#include "Client.h"

double Client::get_deposited_funds() const { return deposited_funds; }
std::string Client::get_client_name() const { return client_name; }
double Client::get_invested_amount() const { return invested_amount; }
std::string Client::get_client_email() const { return client_email; }
std::string Client::get_account_type() const { return account_type; }
const std::vector<Security*>& Client::get_portfolio() const { return portfolio; }

void Client::deposit_funds(double amount) {
    deposited_funds += amount;
}

bool Client::withdraw_funds(double amount) {
    if (deposited_funds >= amount) {
        deposited_funds -= amount;
        return true;
    }
    return false;
}

void Client::add_to_portfolio(Security* security) {
    portfolio.push_back(security);
}
