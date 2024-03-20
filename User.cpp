#include "User.h"

User::User(const std::string& name, const std::string& email) : name(name), email(email) {}

const std::string& User::getName() const {
    return name;
}

const std::string& User::getEmail() const {
    return email;
}
