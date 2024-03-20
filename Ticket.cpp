#include "Ticket.h"

Ticket::Ticket(const Movie& movie, const User& user, const std::string& seat)
    : movie(movie), user(user), seat(seat) {}

// Implement the calculatePrice function
double Ticket::calculatePrice() const {
    return movie.getPrice(); // Assuming you want the movie price as the ticket price
}
