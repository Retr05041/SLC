/**
 * @file Palindrome.cpp
 * @brief Palindrome class implementation file
 * @author Parker Cranfield
*/

#include "Palindrome.hpp"

Palindrome::Palindrome() {
    // Nothing to do here
}

Palindrome::~Palindrome() {
    // Nothing to do here
}

std::string Palindrome::getRuleName() {
    return "Palindrome";
}

bool Palindrome::validateWord(Word *word) {
    char *wordSplit = word->getWordSplit();
    int wordLength = word->getWordLength();

    for (int i = 0; i < wordLength / 2; i++) {
        if (wordSplit[i] != wordSplit[wordLength - i - 1]) {
            return false;
        }
    }

    return true;
}