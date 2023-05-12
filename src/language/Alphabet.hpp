/**
 * @file Alphabet.h
 * @brief Header file for the Alphabet class.
 * @author Parker Cranfield
*/

#ifndef LANGUAGE_ALPHABET_H
#define LANGUAGE_ALPHABET_H

#include <iostream>

class Alphabet {
    private:
        const std::string m_givenAlphabet;
        int m_alphabetSize;

    public:
        Alphabet();
        Alphabet(std::string alphabet);
        ~Alphabet();

        // Getters
        std::string getAlphabet();

        // Methods
        bool isValidLetter(char letter);
        void printAlphabet();
        
};

#endif // LANGUAGE_ALPHABET_H