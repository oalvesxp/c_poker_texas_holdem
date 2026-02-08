#ifndef COMMON_H
#define COMMON_H

#include "../deck/deck.h"

/**
 * Converts a Suit enum to its string representation.
 * @param suit The Suit enum value.
 * @return A constant character pointer to the string representation of the suit.
 */
const char *suit_to_string(Suit suit);

/**
 * Converts a Rank enum to its string representation.
 * @param rank The Rank enum value.
 * @return A constant character pointer to the string representation of the rank.
 */
const char *rank_to_string(Rank rank);


#endif // COMMON_H
