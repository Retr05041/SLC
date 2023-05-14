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
#include "../finite_automata/DFA.hpp"

class Language {
    private:
        Alphabet *m_oAlphabet;
        Word *m_language;
        int m_languageSize;

        // DFA
        DFA *m_oDFA;

    public:
        Language();
        Language(std::string states, std::string alphabet, int languageSize, std::string givenTransitionFunction, std::string givenInitialState, std::string givenFinalStates);
        ~Language();

        // Getters
        std::string getAlphabet();
        Word *getLanguage();

        // Methods
        bool isValidWord(std::string word);

};

#endif // LANGUAGE_LANGUAGE_H
