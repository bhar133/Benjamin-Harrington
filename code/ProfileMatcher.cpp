#include <iostream>
#include <fstream>
#include <sstream>
#include "signup.hpp"
#include "ProfileMatcher.hpp"
#include "profile.hpp"
#include "signup.hpp"


void findMatchesByMajor(const std::string& filename, const std::string& targetMajor) {
    std::ifstream infile(filename);
    std::vector<UserProfile> profiles;

    if (!infile.is_open()) {
        std::cerr << "Unable to open the file." << std::endl;
        return;
    }

    std::string name, email, password, major;
    while (std::getline(infile, name) && std::getline(infile, email) &&
           std::getline(infile, password) && std::getline(infile, major)) {
        profiles.emplace_back(name, email, password, major);
    }

    infile.close();

    std::cout << "\nPotential matches for " << targetMajor << ":\n";

    std::vector<std::string> matchingNames;

    for (const auto& profile : profiles) {
        if (profile.getMajor() == targetMajor) {
            matchingNames.push_back(profile.getName());
        }
    }

    // Print the names of matching profiles
    if (!matchingNames.empty()) {
        for (const auto& name : matchingNames) {
            std::cout << "- " << name << std::endl;
        }
    } else {
        std::cout << "No matches found." << std::endl;
    }
}










