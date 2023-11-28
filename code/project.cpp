
#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>
#include "profile.hpp"
#include "ProfileMatcher.hpp"
#include "signup.hpp"



int main()
{
  
    std::ifstream infile("input.txt");
    std::vector<UserProfile> profiles;

    if (!infile.is_open()) {
        std::cerr << "Unable to open the file." << std::endl;
        return 1;
    }

    infile.close();

    // Assuming you want to find matches based on a specific major
    findMatchesByMajor("input.txt", "Computer Engineering");
    

    return 0;
}










