/**
 * @file Alphabet.cpp
 * @brief Implementation file for the Alphabet class.
 * @author Parker Cranfield
*/

#include "Alphabet.hpp"

/**
 * @brief Constructor for the Alphabet class.
 * @return An Alphabet object.
*/
Alphabet::Alphabet() : m_givenAlphabet("01"){
    m_alphabetSize = m_givenAlphabet.length();
}

/**
 * @brief Constructor for the Alphabet class.
 * @param alphabet The alphabet to be stored.
 * @return An Alphabet object.
*/
Alphabet::Alphabet(std::string alphabet) : m_givenAlphabet(alphabet) {
    m_alphabetSize = m_givenAlphabet.length();
}

/**
 * @brief Destructor for the Alphabet class.
 * @return void
*/
Alphabet::~Alphabet() {
    // Nothing to do here
}

/**
 * @brief Getter for the given alphabet.
 * @return The given alphabet.
*/
std::string Alphabet::getAlphabet() {
    return m_givenAlphabet;
}

/**
 * @brief Checks if a given letter is in the alphabet.
 * @param letter The letter to be checked.
 * @return True if the letter is in the alphabet, false otherwise.
*/
bool Alphabet::isValidLetter(char letter) {
    for (int i = 0; i < m_alphabetSize; i++) {
        if (m_givenAlphabet[i] == letter) {
            return true;
        }
    }
    return false;
}