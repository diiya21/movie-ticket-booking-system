#include "Booking.h"
#include <iostream>

// Initialize static member
int Booking::nextBookingID = 1;

Booking::Booking() {
    bookingID = nextBookingID++;
}

void Booking::addTicket(const Ticket& ticket) {
    tickets.push_back(ticket);
}

void Booking::displayBookingDetails() const {
    std::cout << "Booking ID: " << bookingID << std::endl;
    std::cout << "Tickets:" << std::endl;
    for (const Ticket& ticket : tickets) {
        std::cout << "========================" << std::endl;
        std::cout << "Movie Title: " << ticket.getMovie().getTitle() << std::endl;
        std::cout << "Date: " << ticket.getMovie().getDate() << std::endl;
        std::cout << "Time: " << ticket.getMovie().getTime() << std::endl;
        std::cout << "Seat: " << ticket.getSeat() << std::endl;
        std::cout << "Price: " << ticket.calculatePrice() << std::endl;
    }
}
