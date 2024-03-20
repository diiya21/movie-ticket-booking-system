#pragma once
#include "Movie.h"
#include "User.h"

class Ticket {
private:
    Movie movie;
    User user;
    std::string seat;

public:
    Ticket(const Movie& movie, const User& user, const std::string& seat);

    // Getters
    Movie getMovie() const;
    User getUser() const;
    std::string getSeat() const;

    // Calculate Price
    double calculatePrice() const; // Add this function
};
