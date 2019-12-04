/*
 * Written by Cathy Bishop February 1998
 *
 * Project 2 for CSC161
 *
 * This is code for the CardDeck class, which can be used
 * for an object that represents a deck of cards.
 *
 */

#include	<iostream>
#include	<cstdlib>
#include	<time.h>

using namespace std;

#include	"../include/CardDeck.h"

CardDeck::CardDeck()
{
	time_t	utime;	// use current UNIX time as seed

	// Seed the random number generator

	srand((unsigned) time(&utime));

	// reset the deck

	shuffle();
}

// resets the desk ("shuffles it")

void    CardDeck::shuffle()
{
	int	i;
	int	j;

	for(i = 0; i < 13; i++)
		for(j = 0; j < 4; j++)
			_cards[i][j] = NOT_DEALT;

	_ncardsDealt = 0;
}

/*
 * Function: carddeck::deal(int &rank, int &suit) - deal a card.
 *
 * This function will deal a card. It will make sure a card is not
 * dealt twice (unless the deck has been shuffled). 
 *
 * Parameters:
 *
 *	rank - will be set to the rank of the card (2-14 meaning 2-Ace)
 *	suit - will be set to the suit of the card (1-4)
 *
 * Returns:
 *
 *	Number of cards dealt so far.
 *
 *	or
 *
 *	0	- can't deal a card. This will happen if 52 cards
 *		  have already been dealt, or if after 1000 tries, the random
 *		  number generator is unable to generate a card that has
 *		  not already been dealt.
 *
 */

int     CardDeck::deal(int &rank, int &suit)
{
	int	rankIndex;
	int	suitIndex;
	int	i = 0;

	// can't deal more than 52

	if (_ncardsDealt >= 52)
		return(0);

	while (true)
	{
		rankIndex = (rand() % 13); // generate random rank index 0-12
		suitIndex = (rand() % 4); // generate random suit index 0-3

		if (_cards[rankIndex][suitIndex] != DEALT)
			break;

		i++;
		if (i >= 1000)	// just in case!
		{
			cout << i << " tries, dealt: " << _ncardsDealt
				<< " can't find a card!" << endl;
			return(0);
		}
	}

	_cards[rankIndex][suitIndex] = DEALT;
	_ncardsDealt++;

	rank = rankIndex + 2;
	suit = suitIndex + 1;

	return(_ncardsDealt);
}

// access function

int     CardDeck::numDealt()
{
	return(_ncardsDealt);
}

