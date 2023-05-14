# SLC
*Simple Language Creator*

## What is SLC?
SLC is a simple language creater. I made it in hopes to better understand my "Languages and Computation" course in my second year of university.

## How does SLC work?
Upon running the program, the user will be able to initialise their own DFA (Deterministic Finite Automata) and then test it with a string of their choice. The program will then output whether the string is accepted or rejected by the DFA.

## How do I use SLC?
1. Make sure to have gcc (v11.3.0 or higher) installed on your machine.
2. Clone the repository.
3. Make and navigate to the build directory.
4. Run the following command: `cmake ..`
5. Run the following command: `make`
6. Run the following command: `./SLC`

## Future Plans
- [ ] Add a way to save the DFA
- [ ] Add a way to load a DFA
- [ ] Add a way to make NFA's