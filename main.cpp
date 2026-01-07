#include <iostream>
#include "cards.hpp"
#include <vector>

using namespace std;

int main(void) {

    vector<Card> deck;
    deck = createDeck();
    shuffleDeck(deck);
    printDeck(deck);
    return 0;
}