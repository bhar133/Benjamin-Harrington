#ifndef PROFILE_H
#define PROFILE_H

#include <string>

// Class representing a user profile
class UserProfile {
public:
    UserProfile(const std::string& n, const std::string& e, const std::string& p, const std::string& m);

    const std::string& getMajor() const;
    const std::string& getName() const;
    const std::string& getEmail() const;

    // Add other getter methods as needed

private:
    std::string name;
    std::string email;
    std::string password;
    std::string major;
};

#endif // PROFILE_H