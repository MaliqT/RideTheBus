#include "cards.cpp"

/*
Game logic:
Need card contents to be displayed to user
If user gets prediction correct, move on to next state
Else, player loses bet and game state resets
*/

//Create game loop for player

void app() {
    bool exit = false;
    char input = '\0';

    do {
        cout << "Exit?" << endl;
        cin >> input;

        if (input == 'y' || input == 'Y') {
            exit = true;
        }

    } while (!exit);
}