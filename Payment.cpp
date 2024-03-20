#include "Payment.h"
#include <iostream>

Payment::Payment() : amount(0.0), method("Unknown") {}

Payment::Payment(double amount, const std::string& method) : amount(amount), method(method) {}

void Payment::displayPaymentDetails() const {
    std::cout << "Payment Details:" << std::endl;
    std::cout << "Amount: $" << amount << " | Method: " << method << std::endl;
}
