/**
 * @file Language.h
 * @brief Header file for the Language class.
 * @author Parker Cranfield
*/

#ifndef LANGUAGE_LANGUAGE_H
#define LANGUAGE_LANGUAGE_H

#include <iostream>

#include "Alphabet.hpp"
#include "Word.hpp"
#include "../rules/ruleset/Palindrome.hpp"

class Language {
    private:
        Alphabet *m_oAlphabet;
        Word *m_language;
        int m_languageSize;

        // Rules
        Palindrome *m_oPalindrome;

    public:
        Language();
        Language(std::string ruleChoice);
        Language(std::string alphabet, int languageSize);
        ~Language();

        // Getters
        std::string getAlphabet();
        Word *getLanguage();

        // Methods
        bool isValidWord(std::string word);
        std::string getActiveRules();

};

#endif // LANGUAGE_LANGUAGE_H