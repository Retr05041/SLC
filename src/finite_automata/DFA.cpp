/**
 * @file DFA.cpp
 * @brief Implementation of the DFA class.
 * @author Parker Cranfield
*/

#include "DFA.hpp"

/**
 * @brief Constructor for the DFA class.
 * @param givenStates The states of the DFA.
 * @param givenAlphabet The alphabet of the DFA.
 * @param givenTransitionFunction The transition function of the DFA.
 * @param givenInitialState The initial state of the DFA.
 * @param givenFinalStates The final states of the DFA.
*/
DFA::DFA(std::string givenStates, Alphabet givenAlphabet, std::string givenTransitionFunction, std::string givenInitialState, std::set<std::string> givenFinalStates) : stateString(givenStates), alphabet(givenAlphabet), transitionFunction(givenTransitionFunction), initialState(givenInitialState), finalStates(givenFinalStates) {
    createAndLinkStates();
}

/**
 * @brief Destructor for the DFA class.
 * @return void
*/
DFA::~DFA() {
    // Nothing to do here
}

/**
 * @brief Links the states of the DFA.
 * @details This function is called by the constructor.
 * @todo Implement this function.
*/
void DFA::createAndLinkStates() {
    // First parse string to get the states
    // Then create the states
    for (char c : transitionFunction) {
        std::cout << c << std::endl;
    }

}

/**
 * @brief Tests a word against the DFA.
 * @param word The word to be tested.
 * @return True if the word is accepted by the DFA, false otherwise.
*/
bool DFA::testWord(Word word) {
    std::cout << "DFA testWord called." << std::endl;
    return true;
}
