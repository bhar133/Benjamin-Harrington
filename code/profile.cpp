#include "profile.hpp"
#include "signup.hpp"

UserProfile::UserProfile(const std::string& n, const std::string& e, const std::string& p, const std::string& m)
    : name(n), email(e), password(p), major(m) {}

const std::string& UserProfile::getMajor() const {
    return major;
}

const std::string& UserProfile::getName() const {
    return name;
}

const std::string& UserProfile::getEmail() const {
    return email;
}
