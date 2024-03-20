#ifndef GENRE_H
#define GENRE_H

#include <string>

class Genre {
private:
    std::string name;

public:
    // Constructors
    Genre();
    Genre(const std::string& name);

    // Getters and Setters
    void setName(const std::string& name);
    std::string getName() const;
};

#endif
