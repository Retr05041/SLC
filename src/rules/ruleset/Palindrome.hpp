/**
 * @file Palindrome.hpp
 * @brief Palindrome class header file
 * @author Parker Cranfield
*/

#ifndef PALINDROME_H
#define PALINDROME_H

#include "../abstract/AbstractRule.hpp"
#include "../../language/Word.hpp"

class Palindrome : public AbstractRule {
    public:
        Palindrome();
        ~Palindrome();

        // Methods
        std::string getRuleName() override;
        bool validateWord(Word *word) override;
};

#endif // PALINDROME_H