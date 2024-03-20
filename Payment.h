#ifndef PAYMENT_H
#define PAYMENT_H

#include <string>

class Payment {
private:
    double amount;
    std::string method;

public:
    Payment();
    Payment(double amount, const std::string& method);
    void displayPaymentDetails() const;
};

#endif
