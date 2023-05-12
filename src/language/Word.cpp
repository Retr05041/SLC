/**
 * @file Word.cpp
 * @brief Implementation file for the Word class.
 * @author Parker Cranfield
*/

#include "Word.hpp"

/**
 * @brief Constructor for the Word class.
 * @return A Word object.
*/
Word::Word() {
    m_givenWord = "";
    m_wordLength = 0;
    m_wordSplit = new char[m_wordLength];
}

/**
 * @brief Constructor for the Word class.
 * @param word The word to be stored.
 * @return A Word object.
*/
Word::Word(std::string word) : m_givenWord(word) {
    m_wordLength = m_givenWord.length();
    m_wordSplit = new char[m_wordLength];
    splitWord();
}

/**
 * @brief Destructor for the Word class.
 * @return void
*/
Word::~Word() {
    delete[] m_wordSplit;
}

/**
 * @brief Splits the given word into an array of characters.
*/
void Word::splitWord() {
    for (int i = 0; i < m_wordLength; i++) {
        m_wordSplit[i] = m_givenWord[i];
    }
}

/**
 * @brief Getter for the given word.
 * @return The given word.
*/
std::string Word::getWord() {
    return m_givenWord;
}

/**
 * @brief Getter for the word split into an array of characters.
 * @return The word split into an array of characters.
*/
char *Word::getWordSplit() {
    return m_wordSplit;
}

/**
 * @brief Getter for the length of the word.
 * @return The length of the word.
*/
int Word::getWordLength() {
    return m_wordLength;
}