#pragma once
#include <iostream>

class Admin {
private:
    std::string adminUsername;
    std::string adminFirstName;
    std::string adminLastName;
    std::string adminPassword;

public:
    // Constructors
    Admin();  // Default constructor
    Admin(const std::string& username, const std::string& firstName, const std::string& lastName,
        const std::string& password);

    // Getters and Setters
    void setAdminUsername(const std::string& username);
    std::string getAdminUsername() const;

    void setAdminFirstName(const std::string& firstName);
    std::string getAdminFirstName() const;

    void setAdminLastName(const std::string& lastName);
    std::string getAdminLastName() const;

    void setAdminPassword(const std::string& password);
    std::string getAdminPassword() const;

    // Additional methods
    bool isAdminPasswordCorrect(const std::string& password) const;
};
