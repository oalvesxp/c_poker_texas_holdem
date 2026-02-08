#ifndef DECK_H
#define DECK_H

#include <stdbool.h>

#define DECK_SIZE 52

typedef enum {
  CLUBS,
  DIAMONDS,
  HEARTS,
  SPADES
} Suit;

typedef enum {
  TWO = 2,
  THREE,
  FOUR,
  FIVE,
  SIX,
  SEVEN,
  EIGHT,
  NINE,
  TEN,
  JACK,
  QUEEN,
  KING,
  ACE
} Rank;

typedef struct {
  Suit suit;
  Rank rank;
} Card;

typedef struct {
  Card cards[DECK_SIZE];
  int top;
} Deck;

/** Public interface */

/**
 * Initializes the deck with 52 standard playing cards.
 * The cards are ordered by suit and rank.
 * @param deck Pointer to the Deck to initialize.
 */
void deck_init(Deck *deck);

/**
 * Shuffles the deck using the Fisher-Yates algorithm.
 * @param deck Pointer to the Deck to shuffle.
 */
void deck_shuffle(Deck *deck);

/**
 * Draws a card from the top of the deck.
 * @param deck Pointer to the Deck to draw from.
 * @param out_card Pointer to a Card structure where the drawn card will be stored.
 * @return true if a card was successfully drawn, false if the deck is empty.
 */
bool deck_draw(Deck *deck, Card *out_card);

#endif // DECK_H
