#ifndef CARDS_HPP
#define CARDS_HPP

#include <vector>

enum class Suit { Hearts, Diamonds, Clubs, Spades };
enum class Colors { Red, Black };

struct Card {
    int rank;
    Suit suit;
    Colors color;
};

Colors getColor(const Card& card);
std::vector<Card> createDeck();
void shuffleDeck(std::vector<Card>& deck);
void printCard(const Card& card);
void printDeck(const std::vector<Card>& deck);


#endif