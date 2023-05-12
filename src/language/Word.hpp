/**
 * @file word.h
 * @brief Header file for the Word class.
 * @author Parker Cranfield
*/

#ifndef LANGUAGE_WORD_H
#define LANGUAGE_WORD_H

#include <iostream>

class Word {
    private:
        std::string m_givenWord;
        char *m_wordSplit;
        int m_wordLength;

    public:
        // Constructors
        Word();
        Word(std::string word);
        ~Word();

        // Methods
        void splitWord();

        // Getters
        std::string getWord();
        char *getWordSplit();
        int getWordLength();
        
};

#endif // LANGUAGE_WORD_H
