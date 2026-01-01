#include "cards.cpp"

/* Ride The Bus card game. The goal of the project is simple. A dealer is represented to the user and prompted to choose a prediction
option. The user can bid however much they want with a minimum required bid of at least $10. If the user get's the option correct,
then the game proceeds and the users bet gets multiplied. If the user get's the option wrong, then the user loses and the bet resets.
 */

int main(void) {

    cout << "Program is working as intended right now." << endl;

    srand(static_cast<unsigned>(time(nullptr)));
    Card card;
    
    for (int i = 0; i < 10; i++) {
        card = randomCard();
        printCard(card);
    }

    return 0;
}