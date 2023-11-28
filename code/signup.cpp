#include <iostream>
#include <fstream>
#include <sstream>
#include "signup.hpp"


void signup()
{
    //signup
    //user input prompt
    std::string username, password, major, name;

    std::cout << "Welcome to Tiger pair Signup!\n";
    
    std::cout << "Enter Fullname: ";
    std::getline(std::cin, name);

    std::cout << "Enter Username: ";
    std::getline(std::cin, username);

    std::cout << "Enter Password: ";
    std::getline(std::cin, password);

    std::cout << "Enter Major: ";
    std::getline(std::cin, major);

    std::ofstream outfile("input.txt", std::ios::app);
    
    // Check if the file is successfully opened
    if (outfile.is_open()) {
        // Write user input to the file
        outfile << "" << name << std::endl;
        outfile << "" << username << std::endl;
        outfile << "" << password << std::endl;
        outfile << "" << major << std::endl;
        outfile << " \n";
        // Close the file
        outfile.close();
        std::cout << "\nSignup Complete!" << std::endl;
    } else {
        std::cerr << "Unable to open the file." << std::endl;
    }

    
}









