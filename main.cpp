#include "game.cpp"

/* Ride The Bus card game. The goal of the project is simple. A dealer is represented to the user and prompted to choose a prediction
option. The user can bid however much they want with a minimum required bid of at least $10. If the user get's the option correct,
then the game proceeds and the users bet gets multiplied. If the user get's the option wrong, then the user loses and the bet resets.
 */

 /* Roadmap:
 Implement logic for random playing card
 Acquire card contents to be manipulated for user experience
 Implement game logic and game state
 Implement betting system and acquiring user funds
 */

int main(void) {

    char input = '\0';

    cout << "Program is working as intended right now." << endl;
    cin >> input;

    srand(static_cast<unsigned>(time(nullptr)));
    app();
    

    return 0;
}