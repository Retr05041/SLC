/**
 * @file state.hpp
 * @brief Header for the State class.
 * @details This file contains the definition for the State class.
 * @author Parker Cranfield
*/

#ifndef STATE_HPP
#define STATE_HPP

#include <iostream>
#include <set>

/**
 * @brief A class representing a state in a finite automata.
 * @details A state is a node in a finite automata. It has a name and a set of transitions to other states.
*/
class State {
    private:
        std::string name;
        std::set<State> transitions;
        bool entryState;
        bool exitState;

    public:
        State(std::string givenName);
        ~State();

        // Getters and setters
        void setEntryState(bool entry);
        void setExitState(bool exit);
        std::string getName();
        std::set<State> getTransitions();
        bool isEntryState();
        bool isExitState();

        // Methods
        bool addTransition(State transition);
        bool removeTransition(State transition);
};

#endif // STATE_HPP