#include "Broker.h"
#include "Shares.h"
#include "Bonds.h"
#include "ETFs.h"

Broker::Broker(const std::string &name, const std::string &market_status)
    : broker_name(name), market_status(market_status) {}

void Broker::add_security(Security* security) {
    securities.push_back(security);
    num_securities++;
}

void Broker::remove_security(const std::string &symbol) {
    auto it = std::remove_if(securities.begin(), securities.end(), [&symbol](Security* security) {
        return security->get_symbol() == symbol;
    });

    if (it != securities.end()) {
        securities.erase(it, securities.end());
        num_securities--;
    }
}

void Broker::display_securities() const {
    std::cout << "Securities on the platform:" << std::endl;
    for (const auto& security : securities) {
        security->display();
    }
}

void Broker::display_shares() const {
    std::cout << "Shares on the platform:" << std::endl;
    for (const auto& security : securities) {
        if (dynamic_cast<Shares*>(security)) {
            security->display();
        }
    }
}

void Broker::display_bonds() const {
    std::cout << "Bonds on the platform:" << std::endl;
    for (const auto& security : securities) {
        if (dynamic_cast<Bonds*>(security)) {
            security->display();
        }
    }
}

void Broker::display_etfs() const {
    std::cout << "ETFs on the platform:" << std::endl;
    for (const auto& security : securities) {
        if (dynamic_cast<ETFs*>(security)) {
            security->display();
        }
    }
}

Security* Broker::search_security(const std::string &symbol) const {
    for (const auto& security : securities) {
        if (security->get_symbol() == symbol) {
            return security;
        }
    }
    return nullptr;
}

bool Broker::check_arbitrage(const Client &client) {
    return client.get_deposited_funds() > 0;
}
