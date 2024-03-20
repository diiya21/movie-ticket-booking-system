#ifndef GENRES_H
#define GENRES_H

#include "Genre.h"
#include <list>

class Genres {
private:
    std::list<Genre> genreList;

public:
    // Constructor
    Genres() {}

    // Methods
    void addGenre(const Genre& genre) {
        genreList.push_back(genre);
    }

    void removeGenre(const std::string& genreName) {
        for (auto it = genreList.begin(); it != genreList.end(); ++it) {
            if (it->getName() == genreName) {
                genreList.erase(it);
                return;
            }
        }
    }

    std::list<Genre>& getGenres() {
        return genreList;
    }
};

#endif
