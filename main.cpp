// main.cpp
#include <iostream>
#include "Client.h"
#include "Bonds.h"
#include "ETFs.h"
#include "Shares.h"

// Dummy implementations for demonstration
class DummyClient : public Client {
public:
    void display() const override {
        std::cout << "Dummy Client" << std::endl;
    }
};

int main() {
    // Create some example objects
    Bonds bond("Issuer", 5, 1.5, 1000, "2025-12-31", "AAA");
    ETFs etf("Company", 3, "Physical", 2.0, 500);
    Shares share("Company", 2, 3.5, 150);

    // Display their details
    bond.display();
    etf.display();
    share.display();

    // Create and display a dummy client
    DummyClient client;
    client.display();

    return 0;
}
