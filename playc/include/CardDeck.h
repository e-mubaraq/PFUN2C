/*
 * Written by Cathy Bishop February 1998
 *
 * Project 2 for CSC161
 *
 * This is the class declaration for the deck of cards class which
 * can be used for an object to represent a deck of cards. This class
 * includes the following useful member functions:
 *
 * carddeck::shuffle() - shuffle the deck of cards.
 *
 * int carddeck::deal(int &rank, int &suit) - deal a card.
 *
 *	It will make sure a card is not dealt twice, unless the deck has
 *	been shuffled.  This function returns the number of cards dealt
 *	so far, or 0 if there are no more cards to deal. 
 *
 */

#ifndef	CARDDECK_H
#define	CARDDECK_H

#ifndef	SUCCESS
#define	SUCCESS	1
#define	FAIL	0
#endif

#ifndef	DEALT
#define	DEALT		1
#define	NOT_DEALT	0
#endif


class CardDeck
{
public:
	CardDeck();           // default constructor

	void    shuffle();    // resets the deck ("shuffles it")

	// Deal a card. Returns 0 if no more cards left, 1 if dealt a card

	int     deal(int &rank, int &suit);

	int     numDealt();

private:
	int	_cards[13][4];	// array to keep track of dealt cards.
	int	_ncardsDealt;	// number of cards dealt.

	int	_numToSuit(int cardIndex);
	int	_numToRank(int cardIndex);

};


#endif
