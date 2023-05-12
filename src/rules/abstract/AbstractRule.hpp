/**
 * @file AbstractRule.h
 * @brief AbstractRule class header file
 * @author Parker Cranfield
*/

#ifndef ABSTRACT_RULE_H
#define ABSTRACT_RULE_H

#include "../../language/Word.hpp"

class AbstractRule {
    public:
        AbstractRule();
        ~AbstractRule();

        // Methods
        /**
         * @brief Returns the name of the rule
         * @return The name of the rule
        */
        virtual std::string getRuleName() = 0;
        /**
         * @brief Validates a word against the rule
         * @param word The word to validate
        */
        virtual bool validateWord(Word *word) = 0;
};

#endif // ABSTRACT_RULE_H
