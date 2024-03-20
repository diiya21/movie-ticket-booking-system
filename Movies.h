#ifndef MOVIES_H
#define MOVIES_H

#include <vector>
#include "Movie.h"

class Movies {
private:
    std::vector<Movie> movies;

public:
    void addMovie(const Movie& movie);
    void displayMovies() const;
    Movie& searchMovie(const std::string& title);
    int getAvailableSeats(const std::string& title) const;
};

#endif
