#include "Theatre.h"
#include <iostream>

// Default constructor
Theatre::Theatre() {
    theatreId = "";
    theatreName = "";
    location = "";
    theatreCapacity = 0;
    screensNumber = 0;
}

// Parameterized constructor
Theatre::Theatre(const std::string& theatreId, const std::string& theatreName,
    const std::string& location, int theatreCapacity, int screensNumber)
    : theatreId(theatreId), theatreName(theatreName), location(location),
    theatreCapacity(theatreCapacity), screensNumber(screensNumber) {}

// Getters and Setters
void Theatre::setTheatreId(const std::string& theatreId) {
    this->theatreId = theatreId;
}

std::string Theatre::getTheatreId() const {
    return theatreId;
}

void Theatre::setTheatreName(const std::string& theatreName) {
    this->theatreName = theatreName;
}

std::string Theatre::getTheatreName() const {
    return theatreName;
}

void Theatre::setLocation(const std::string& location) {
    this->location = location;
}

std::string Theatre::getLocation() const {
    return location;
}

void Theatre::setTheatreCapacity(int theatreCapacity) {
    this->theatreCapacity = theatreCapacity;
}

int Theatre::getTheatreCapacity() const {
    return theatreCapacity;
}

void Theatre::setScreensNumber(int screensNumber) {
    this->screensNumber = screensNumber;
}

int Theatre::getScreensNumber() const {
    return screensNumber;
}

// Movie management
void Theatre::addMovie(const Movie& movie) {
    movies.push_back(movie);
}

void Theatre::removeMovie(const std::string& movieTitle) {
    for (auto it = movies.begin(); it != movies.end(); ++it) {
        if (it->getTitle() == movieTitle) {
            movies.erase(it);
            return;
        }
    }
}

void Theatre::displayMovies() const {
    std::cout << "Movies playing at " << theatreName << ":" << std::endl;
    for (const auto& movie : movies) {
        std::cout << "- " << movie.getTitle() << std::endl;
    }
}
