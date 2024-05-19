#ifndef BROKER_H
#define BROKER_H

#include "Security.h"
#include <vector>
#include <string>

class Broker {
public:
    Broker(const std::string &name, const std::string &market_status);

    void add_security(Security* security);
    void remove_security(const std::string &symbol);
    void display_securities() const;
    void display_shares() const;
    void display_bonds() const;
    void display_etfs() const;
    Security* search_security(const std::string &symbol) const;
    bool check_arbitrage(const Client &client);

private:
    std::string broker_name;
    std::string market_status;
    int num_securities = 0;
    std::vector<Security*> securities;
};

#endif // BROKER_H
