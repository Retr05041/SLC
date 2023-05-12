/**
 * @file main.cpp
 * @brief Main file for the project.
 * @author Parker Cranfield
*/

// Greek Alphabet - https://www.engineeringtoolbox.com/greek-alphabet-d_5.html

#include "language/Language.hpp"
#include <iostream>

int main(int argc, char const *argv[]) {
    std::string tempWord = "0110110110";
    std::string ruleChoice = "1";
    Language *oLanguage = new Language();

    std::cout << "Alphabet: " << oLanguage->getAlphabet() << std::endl;
    std::cout << "Rules: " << oLanguage->getActiveRules() << std::endl;
    std::cout << "Validating \"" << tempWord << "\": ";
    if (oLanguage->isValidWord(tempWord)) {
        std::cout << "true" << std::endl;
    } else {
        std::cout << "false" << std::endl;
    }

    // Clean up
    delete oLanguage;
    return 0;
}
