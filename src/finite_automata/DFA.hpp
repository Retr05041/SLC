/**
 * @file DFA.hpp
 * @brief Header for the DFA class.
 * @author Parker Cranfield
*/

#ifndef DFA_HPP
#define DFA_HPP

#include <iostream>
#include <set>
#include "../language/Alphabet.hpp"
#include "../language/Word.hpp"
#include "../states/State.hpp"

/**
 * @brief A class representing a Deterministic Finite Automata.
 * @details A DFA is a 5-tuple (Q, Σ, δ, q0, F) where:
 * - Q is a finite set of states
 * - Σ is a finite set of input symbols
 * - δ is a transition function that maps Q x Σ to Q
 * - q0 is the initial state
 * - F is a set of final states
*/
class DFA {
    private:
        std::string stateString;
        Alphabet alphabet;
        std::string transitionFunction;
        std::string initialState;
        std::set<std::string> finalStates;

        void createAndLinkStates();
        std::set<State> states;

    public:
        DFA(std::string givenStates, Alphabet givenAlphabet, std::string givenTransitionFunction, std::string givenInitialState, std::set<std::string> givenFinalStates);
        ~DFA();

        bool testWord(Word word);
    
};

#endif // DFA_HPP