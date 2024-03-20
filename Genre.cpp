#include "Genre.h"

// Default constructor
Genre::Genre() : name("") {}

// Parameterized constructor
Genre::Genre(const std::string& name) : name(name) {}

// Getter for name
std::string Genre::getName() const {
    return name;
}

// Setter for name
void Genre::setName(const std::string& name) {
    this->name = name;
}
