#include "deck.h"
#include <stdlib.h>
#include <time.h>

void
deck_init(Deck *deck) {
  int index = 0;

  for (int suit = CLUBS; suit <= SPADES; suit++)
  {
    for (int rank = TWO; rank <= ACE; rank++)
    {
      deck->cards[index].suit = (Suit)suit;
      deck->cards[index].rank = (Rank)rank;
      index++;
    }
  }

  deck->top = 0;
}

void
deck_shuffle(Deck *deck) {
  srand((unsigned int)time(NULL));

  for (int i = DECK_SIZE - 1; i > 0; i--)
  {
    int j = rand() % (i + 1);
    Card temp = deck->cards[i];
    deck->cards[i] = deck->cards[j];
    deck->cards[j] = temp;
  }

  deck->top = 0;
}

bool
deck_draw(Deck *deck, Card *out_card) {
  if (deck->top >= DECK_SIZE)
  {
    return false; // Deck is empty
  }

  *out_card = deck->cards[deck->top];
  deck->top++;
  
  return true;
}