#ifndef THEATRE_H
#define THEATRE_H

#include <string>
#include <vector>
#include "Movie.h" // Assuming Movie class is defined in Movie.h

class Theatre {
private:
    std::string theatreId;
    std::string theatreName;
    std::string location;
    int theatreCapacity;
    int screensNumber;
    std::vector<Movie> movies;

public:
    // Constructors
    Theatre();
    Theatre(const std::string& theatreId, const std::string& theatreName, const std::string& location,
        int theatreCapacity, int screensNumber);

    // Getters and Setters
    void setTheatreId(const std::string& theatreId);
    std::string getTheatreId() const;

    void setTheatreName(const std::string& theatreName);
    std::string getTheatreName() const;

    void setLocation(const std::string& location);
    std::string getLocation() const;

    void setTheatreCapacity(int theatreCapacity);
    int getTheatreCapacity() const;

    void setScreensNumber(int screensNumber);
    int getScreensNumber() const;

    // Movie management
    void addMovie(const Movie& movie);
    void removeMovie(const std::string& movieTitle);
    void displayMovies() const;
};

#endif
