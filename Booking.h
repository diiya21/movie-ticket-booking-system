#ifndef BOOKING_H
#define BOOKING_H

#include <vector>
#include "Ticket.h"
#include "Payment.h"

class Booking {
private:
    std::vector<Ticket> tickets;
    Payment payment;

public:
    void addTicket(const Ticket& ticket);
    void makePayment(double amount, const std::string& method);
    void displayBookingDetails() const;
};

#endif
