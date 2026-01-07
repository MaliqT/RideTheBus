#include <iostream>
#include "cards.hpp"
#include <algorithm>
#include <time.h>
#include <random>
#include <string>

using namespace std;

Colors getColor(const Card& card) {
    return (card.suit == Suit::Hearts || card.suit == Suit::Diamonds) ? Colors::Red : Colors::Black;
}

void printCard(const Card& card) {
    string finalString;

    switch (card.color) {
        case Colors::Red:
            finalString += "Red ";
            break;
        case Colors::Black:
            finalString += "Black ";
            break;
    }

    switch (card.rank) {
        case 11:
            finalString += "Jack ";
            break;
        case 12:
            finalString += "Queen ";
            break;
        case 13:
            finalString += "King ";
            break;
        case 1:
            finalString += "Ace ";
            break;

        default:
        finalString += to_string(card.rank) + " ";
    }

    switch (card.suit) {
        case Suit::Hearts:
            finalString += "of Hearts";
            break;
        case Suit::Diamonds:
            finalString += "of Diamonds";
            break;
        case Suit::Clubs:
            finalString += "of Clubs";
            break;
        case Suit::Spades:
            finalString += "of Spades";
            break;
    }

    cout << finalString << endl;
}

vector<Card> createDeck() {
    vector<Card> deck;
    Card card;

    for (int suit = 1; suit < 5; suit++) {
        for (int rank = 1; rank < 14; rank++) {
            switch (suit) {
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

            card.rank = rank;
            card.color = getColor(card);
            deck.push_back(card);
        }
    }

    return deck;
}

void shuffleDeck(vector<Card>& deck) {
    static random_device rd;
    static mt19937 gen(rd());
    shuffle(deck.begin(), deck.end(), gen);

    deck.erase(deck.begin() + 4, deck.end());
}

void printDeck(const vector<Card>& deck) {
    for (const Card& card : deck) {
        printCard(card);
    }
}