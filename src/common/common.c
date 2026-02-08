#include "common.h"

const char
*suit_to_string(Suit suit) {
  switch (suit)
  {
    case CLUBS: return "Clubs";
    case DIAMONDS: return "Diamonds";
    case HEARTS: return "Hearts";
    case SPADES: return "Spades";
    default: return "Unknown Suit";
  }
}

const char
*rank_to_string(Rank rank) {
  switch(rank)
  {
    case TWO: return "2";
    case THREE: return "3";
    case FOUR: return "4";
    case FIVE: return "5";
    case SIX: return "6";
    case SEVEN: return "7";
    case EIGHT: return "8";
    case NINE: return "9";
    case TEN: return "10";
    case JACK: return "Jack";
    case QUEEN: return "Queen";
    case KING: return "King";
    case ACE: return "Ace";
    default: return "Unknown Rank";
  }
}
