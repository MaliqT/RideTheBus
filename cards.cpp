#include "includes.hpp"

/*What data structures to use and what's the sequence of the program?
- First, how to store or account for playing cards
There are 52 playing cards excluding the jokers
There are 4 sets of each card with suits
Cards go up from Ace to King but for this card game, Ace will be the highest card value and 2 will the lowest
Suit priority goes from Spades, Clubs, Diamonds, Hearts*/


// First declare the suits as an enum class. They are of their own type.

enum class Suit {
    Hearts,
    Diamonds,
    Clubs,
    Spades
};

enum class Colors {
    Red,
    Black
};

// The number for the cards will be randomized

struct Card {
    int rank;
    Suit suit;
    Colors color;
};

// Get color of card
Colors getColor(const Card& card) {
    return (card.suit == Suit::Hearts || card.suit == Suit::Diamonds) ? Colors::Red : Colors::Black;
}


// Function that handles the randomization of playing cards for numbers, suits, and colors
Card randomCard() {
    Card card;
    int randRank = (rand() % 14) + 1;
    int randSuit = rand() % 4;

    card.rank = randRank;
    
    switch (randSuit) {
        case 1:
            card.suit = Suit::Hearts;
            break;
        case 2:
            card.suit = Suit::Diamonds;
            break;
        case 3:
            card.suit = Suit::Clubs;
            break;
        case 4:
            card.suit = Suit::Spades;
            break;
    }

    card.color = getColor(card);

    return card;
}

// Print contents of card
void printCard(const Card& card) {
    switch (card.color) {
        case Colors::Red:
            cout << "Red ";
            break;
        case Colors::Black:
            cout << "Black ";
            break;
    }

    switch (card.rank) {
        case 11:
            cout << "Jack ";
            break;
        case 12:
            cout << "Queen ";
            break;
        case 13:
            cout << "King ";
            break;
        case 14:
            cout << "Ace ";
            break;
        
        default:
            cout << card.rank << " ";
            break;
    }

    switch (card.suit) {
        case Suit::Hearts:
            cout << "of Hearts" << endl;
            break;
        case Suit::Diamonds:
            cout << "of Diamonds" << endl;
            break;
        case Suit::Clubs:
            cout << "of Clubs" << endl;
            break;
        case Suit::Spades:
            cout << "of Spades" << endl;
            break;
    }
}