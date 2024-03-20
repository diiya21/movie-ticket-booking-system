#include "Seat.h"
#include <iostream>

// Default constructor
Seat::Seat() {
    seatId = "";
    row = 0;
    column = 0;
    price = 0.0;
}

// Parameterized constructor
Seat::Seat(const std::string& seatId, int row, int column, double price)
    : seatId(seatId), row(row), column(column), price(price) {}

// Getters and Setters
void Seat::setSeatId(const std::string& seatId) {
    this->seatId = seatId;
}

std::string Seat::getSeatId() const {
    return seatId;
}

void Seat::setRow(int row) {
    this->row = row;
}

int Seat::getRow() const {
    return row;
}

void Seat::setColumn(int column) {
    this->column = column;
}

int Seat::getColumn() const {
    return column;
}

void Seat::setPrice(double price) {
    this->price = price;
}

double Seat::getPrice() const {
    return price;
}

// Additional methods
void Seat::displaySeatDetails() const {
    std::cout << "Seat ID: " << seatId << std::endl;
    std::cout << "Row: " << row << " | Column: " << column << std::endl;
    std::cout << "Price: $" << price << std::endl;
}
