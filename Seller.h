#ifndef SELLER_H
#define SELLER_H

#include "Client.h"

class Seller : public Client {
public:
    void sell_security(const std::string &symbol, double price);

    void display() const override;
};

#endif // SELLER_H
