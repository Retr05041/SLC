# CMakeLists.txt

# minimum version of CMake required to build this project
cmake_minimum_required(VERSION 3.22.1)

# Project name
# Current version
# Languages used
project(SimpleParser VERSION 1.0 LANGUAGES CXX)

# Set C++ standard
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Set source files
set(SOURCE_FILES
    src/main.cpp
    src/language/Word.cpp
    src/language/Alphabet.cpp
    src/language/Language.cpp
    src/rules/abstract/AbstractRule.cpp
    src/rules/ruleset/Palindrome.cpp
)

# Add executable
add_executable(${PROJECT_NAME} ${SOURCE_FILES})