#ifndef BUYER_H
#define BUYER_H

#include "Client.h"

class Buyer : public Client {
public:
    void buy_security(Security* security, double price);

    void display() const override;
};

#endif // BUYER_H
