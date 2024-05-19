#ifndef CLIENT_H
#define CLIENT_H

#include "Security.h"
#include <vector>
#include <string>

class Client {
public:
    virtual ~Client() = default;

    double get_deposited_funds() const;
    std::string get_client_name() const;
    double get_invested_amount() const;
    std::string get_client_email() const;
    std::string get_account_type() const;
    const std::vector<Security*>& get_portfolio() const;

    void deposit_funds(double amount);
    bool withdraw_funds(double amount);
    void add_to_portfolio(Security* security);

    virtual void display() const = 0;

protected:
    double deposited_funds;
    std::string client_name;
    double invested_amount;
    std::string client_email;
    std::string account_type;
    std::vector<Security*> portfolio;
};

#endif // CLIENT_H
