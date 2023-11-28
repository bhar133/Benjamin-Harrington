#include <iostream>
#include <fstream>
#include <string>


bool checkEmail(const std::string& line){
    if (line.find("specific_word") != std::string::npos) {
        // Check if the line ends with "@lsu.edu"
        if (line.size() >= 8) {
            return line.substr(line.size() - 8) == "@lsu.edu";
        }
    }
    return false;
}
