#ifndef MOVIE_H
#define MOVIE_H

#include <string>

class Movie {
private:
    std::string title;
    std::string date;
    std::string time;
    double price;
    int availableSeats;

public:
    Movie(const std::string& title, const std::string& date, const std::string& time, double price, int availableSeats);

    const std::string& getTitle() const;
    const std::string& getDate() const;
    const std::string& getTime() const;
    double getPrice() const;
    int getAvailableSeats() const;
    void bookTicket();
};

#endif
