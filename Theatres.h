#ifndef THEATRES_H
#define THEATRES_H

#include "Theatre.h"

class theatres {
private:
    std::vector<Theatre> theatresList;

public:
    // Constructor
    theatres() {}

    // Methods
    void addTheatre(const Theatre& theatre) {
        theatresList.push_back(theatre);
    }

    void removeTheatre(const std::string& theatreId) {
        for (auto it = theatresList.begin(); it != theatresList.end(); ++it) {
            if (it->getTheatreId() == theatreId) {
                theatresList.erase(it);
                return;
            }
        }
    }

    std::vector<Theatre>& getTheatres() {
        return theatresList;
    }
};

#endif
