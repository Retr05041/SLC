/**
 * @file state.cpp
 * @brief Implementation of the State class.
 * @details This file contains the implementation of the State class.
 * @author Parker Cranfield
*/

#include "State.hpp"

/**
 * @brief Constructor for the State class.
 * @param givenName The name of the state.
*/
State::State(std::string givenName) : name(givenName), entryState(false), exitState(false) {
    // Nothing to do 
}

/**
 * @brief Destructor for the State class.
 * @return void
*/
State::~State() {
    // Nothing to do here
}

/**
 * @brief Sets the entry state of the state.
 * @param entry The entry state of the state.
*/
void State::setEntryState(bool entry) {
    entryState = entry;
}

/**
 * @brief Sets the exit state of the state.
 * @param exit The exit state of the state.
*/
void State::setExitState(bool exit) {
    exitState = exit;
}

/**
 * @brief Gets the name of the state.
 * @return The name of the state.
*/
std::string State::getName() {
    return name;
}

/**
 * @brief Gets the transitions of the state.
 * @return The transitions of the state.
*/
std::set<State> State::getTransitions() {
    return transitions;
}

/**
 * @brief Gets the entry state of the state.
 * @return The entry state of the state.
*/
bool State::isEntryState() {
    return entryState;
}

/**
 * @brief Gets the exit state of the state.
 * @return The exit state of the state.
*/
bool State::isExitState() {
    return exitState;
}

/**
 * @brief Adds a transition to the state.
 * @param transition The transition to be added.
 * @return True if the transition was successfully added, false otherwise.
*/
bool State::addTransition(State transition) {
    transitions.insert(transition);
    return true;
}

/**
 * @brief Removes a transition from the state.
 * @param transition The transition to be removed.
 * @return True if the transition was successfully removed, false otherwise.
*/
bool State::removeTransition(State transition) {
    transitions.erase(transition);
    return true;
}