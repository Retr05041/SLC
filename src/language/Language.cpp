/**
 * @file Language.cpp
 * @brief Implementation file for the Language class.
 * @author Parker Cranfield
*/

#include "Language.hpp"

/**
 * @brief Constructor for the Language class.
 * @return A Language object.
*/
Language::Language() {
    m_oAlphabet = new Alphabet();
    m_languageSize = 10;
    m_language = new Word[m_languageSize];

}

/**
 * @brief Constructor for the Language class.
 * @param alphabet The alphabet to be stored.
 * @return A Language object.
*/
Language::Language(std::string alphabet, int languageSize) {
    m_oAlphabet = new Alphabet(alphabet);
    m_languageSize = languageSize;
    m_language = new Word[m_languageSize];
}

/**
 * @brief Destructor for the Language class.
 * @return void
*/
Language::~Language() {
    delete m_oAlphabet;
    delete[] m_language;
}

/**
 * @brief Getter for the given alphabet.
 * @return The given alphabet.
*/
std::string Language::getAlphabet() {
    return m_oAlphabet->getAlphabet();
}

/**
 * @brief Checks if a given word is a viable one (all characters are in the language).
 * @param word The word to be checked.
 * @return True if the word is in the language, false otherwise.
*/
bool Language::isValidWord(std::string word) {
    if (word.length() == 0) return false;

    Word *oWord = new Word(word);
    char *wordSplit = oWord->getWordSplit();
    // Check if each letter in the word is in the alphabet
    for (int i = 0; i < oWord->getWordLength(); i++) {
        if (!m_oAlphabet->isValidLetter(wordSplit[i])) {
            delete oWord;
            return false;
        }
    }

    delete oWord;
    return true;
}

