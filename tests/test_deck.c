#include <stdio.h>
#include "../src/deck/deck.h"
#include "../src/common/common.h"

int main() {
  Deck deck;
  
  deck_init(&deck);
  deck_shuffle(&deck);

  for (int i = 0; i < 5; i++)
  {
    Card card;
    deck_draw(&deck, &card);
    printf("Card: %s of %s\n", rank_to_string(card.rank), suit_to_string(card.suit));
  }

  return 0;
}