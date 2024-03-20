#include "Admin.h"

// Default constructor
Admin::Admin() {
    adminUsername = "";
    adminFirstName = "";
    adminLastName = "";
    adminPassword = "";
}

// Parameterized constructor
Admin::Admin(const std::string& username, const std::string& firstName, const std::string& lastName,
    const std::string& password)
    : adminUsername(username), adminFirstName(firstName), adminLastName(lastName),
    adminPassword(password) {}

// Getters and Setters
void Admin::setAdminUsername(const std::string& username) {
    adminUsername = username;
}

std::string Admin::getAdminUsername() const {
    return adminUsername;
}

void Admin::setAdminFirstName(const std::string& firstName) {
    adminFirstName = firstName;
}

std::string Admin::getAdminFirstName() const {
    return adminFirstName;
}

void Admin::setAdminLastName(const std::string& lastName) {
    adminLastName = lastName;
}

std::string Admin::getAdminLastName() const {
    return adminLastName;
}

void Admin::setAdminPassword(const std::string& password) {
    adminPassword = password;
}

std::string Admin::getAdminPassword() const {
    return adminPassword;
}

// Additional methods
bool Admin::isAdminPasswordCorrect(const std::string& password) const {
    return adminPassword == password;
}
