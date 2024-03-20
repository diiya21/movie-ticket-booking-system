#pragma once
#include <iostream>
#include <string>

class Seat {
private:
    std::string seatId;
    int row;
    int column;
    double price;

public:
    // Constructors
    Seat();  // Default constructor
    Seat(const std::string& seatId, int row, int column, double price);

    // Getters and Setters
    void setSeatId(const std::string& seatId);
    std::string getSeatId() const;

    void setRow(int row);
    int getRow() const;

    void setColumn(int column);
    int getColumn() const;

    void setPrice(double price);
    double getPrice() const;

    // Additional methods
    void displaySeatDetails() const;
};
