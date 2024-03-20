#include "Movies.h"
#include <iostream>

void Movies::addMovie(const Movie& movie) {
    movies.push_back(movie);
}

void Movies::displayMovies() const {
    std::cout << "Available Movies:" << std::endl;
    for (const Movie& movie : movies) {
        std::cout << "Title: " << movie.getTitle() << " | Date: " << movie.getDate() << " | Time: " << movie.getTime()
            << " | Price: $" << movie.getPrice() << " | Available Seats: " << movie.getAvailableSeats() << std::endl;
    }
}

Movie& Movies::searchMovie(const std::string& title) {
    for (Movie& movie : movies) {
        if (movie.getTitle() == title) {
            return movie;
        }
    }
    throw std::runtime_error("Movie not found");
}

int Movies::getAvailableSeats(const std::string& title) const {
    for (const Movie& movie : movies) {
        if (movie.getTitle() == title) {
            return movie.getAvailableSeats();
        }
    }
    throw std::runtime_error("Movie not found");
}
