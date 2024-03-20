#include "Movie.h"

Movie::Movie(const std::string& title, const std::string& date, const std::string& time, double price, int availableSeats)
    : title(title), date(date), time(time), price(price), availableSeats(availableSeats) {}

const std::string& Movie::getTitle() const {
    return title;
}

const std::string& Movie::getDate() const {
    return date;
}

const std::string& Movie::getTime() const {
    return time;
}

double Movie::getPrice() const {
    return price;
}

int Movie::getAvailableSeats() const {
    return availableSeats;
}

void Movie::bookTicket() {
    if (availableSeats > 0) {
        --availableSeats;
    }
}
