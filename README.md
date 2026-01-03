# System Design Document (Practicing)


## 1. Overview

Ride The Bus is a card game in which the player is given choices to predict what the next card will be. The choices ranges from color, will the card be red or black. To asking if the next card will be higher or lower in rank. To asking if the next card will be inside or outside of the previous two cards played. To finally asking what the next suit will be for the last card. The player will have an amount of funds to bet with and each successful choice will multiply their bet. If they choose incorrectly, they completely lose out on their bet and the game state resets.


## 2. Features

- Standard 52 deck generation and shuffling
- Fund deposit for betting
- CLI based card game
- Bets increased for each successful choice
- Lose bet and reset game state for incorrect choice
- Sequential round-based gameplay
- Single player
- Clean game restart and termination handling


## 3. Design

- Layered architecture that separates CLI, game logic, and domain objects
- Domain modeling of Card and Deck abstractions
- Use of Header/Source file separation following C++ conventions

## 4. How To Build

This project is built in C++ using standard VS Code IDE with g++ version 15.2.0 and git 2.37.3.windows.1 in bash terminal.
To run this program in an IDE, simply clone the git repo https://github.com/MaliqT/RideTheBus to a directory of your choice on your machine, in bash terminal run the command g++, followed by all cpp files listed separated with a space, -o game.

Short example would be g++ main.cpp game.cpp cards.cpp -o game -- This would create a game executable that links all of these source files together to run the game for the user.
