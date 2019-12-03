/*
 * Written by Cathy Bishop January, 1998
 *
 * Project 1 for CSC161
 *
 * This file contains the functions for the PlayCard class.
 *
 */

#include    <iostream>
#include    <cstdlib>
#include    <string>

#include    "../include/PlayCard.h"


// Default constructor

PlayCard::PlayCard()
{
    _rank = 0;
    _suit = 0;
}

/*
 * Function PlayCard(string rank, string suit)
 *
 * This is the constructor for initializing a playing card. This
 * function calls _rankToInt() and _suitToInt() to convert the passed-
 * in string to the proper integer value. Error checking is handled in
 * these functions rather than in this one.
 *
 * Parameters:
 *
 * rank    - the rank. It should be "2"-"10", "j", "q", "k", or "a". Upper
 *      case is ok - it is handled in _rankToInt().
 *
 * suit    - the suit. It should be "s" for spade, "d" for diamond,
 *      "c" for club, or "h" for heart. Upper case is ok - it
 *      is handled in _suitToInt().
 *
 * Returns:
 *
 * N/A - this is a constructor.
 *
 */


PlayCard::PlayCard(string rank, string suit)
{
    _rank = _rankToInt(rank);
    _suit = _suitToInt(suit);
}


// Access function for the card's rank.

int    PlayCard::getRank() const
{
    return(_rank);
}

// Access function for the card's rank.

int    PlayCard::getSuit() const
{
    return(_suit);
}

string    PlayCard::getName()
{
    return(_rankToString() + " of " + _suitToString() + "s");
}


void    PlayCard::setRank(int rank)
{
    _rank = rank;
}

void    PlayCard::setSuit(int suit)
{
    _suit = suit;
}

/*
 * Function getCard()
 *
 * This function prompts for the cards rank and suit (in that order).
 * If the user enters an invalid rank or suit, this function return FAIL.
 * This function calls _promptRank() and _promptSuit() to do the actual prompting
 * and to set the data members.
 *
 * Parameters:
 *
 * None
 *
 * Returns:
 *
 * SUCCESS    - a valid rank and suit were entered.
 * FAIL        - either the rank or suit entered were invalid.
 *
 */

int    PlayCard::promptCard()
{
    if (_promptRank() != SUCCESS)
        return(FAIL);

    if (_promptSuit() != SUCCESS)
        return(FAIL);

    return(SUCCESS);
}

/*
 * Function: _promptRank()
 *
 * This function prompts for the rank and expects the user to
 * enter 2-10, j, q, k, or a (upper case is ok). The rank is then
 * converted to its integer equivalence with a call rankToInt() and
 * stored in the _rank data member. If the rank was valid, this function
 * return SUCCESS. If not, this function return FAIL.
 *
 * Parameters:
 *
 * None
 *
 * Returns:
 *
 * SUCCESS    - a valid rank was entered.
 * FAIL        - an invalid rank was entered.
 *
 */

int    PlayCard::_promptRank()
{
    string    input;

    cout << "Enter the rank (2-10, j, q, k, or a): ";
    cin >> input;

    _rank = _rankToInt(input);

    if ((_rank >= TWO) && (_rank <= ACE))
        return(SUCCESS);
    else
        return(FAIL);
}

/*
 * Function: _promptSuit()
 *
 * This function prompts for the suit and expects the user to
 * enter s, d, c, or h (upper case is ok). The suit is then
 * converted to its integer equivalence with a call suitToInt() and
 * stored in the _suit data member. If the suit was valid, this function
 * return SUCCESS. If not, this function return FAIL.
 *
 * Parameters:
 *
 * None
 *
 * Returns:
 *
 * SUCCESS    - a valid suit was entered.
 * FAIL        - an invalid suit was entered.
 *
 */

int    PlayCard::_promptSuit()
{
    string    input;

    cout << "Enter the suit (s, d, c, or h): ";
    cin >> input;

    _suit = _suitToInt(input);

    if (_suit == SPADE)
        return(SUCCESS);
    else if (_suit == DIAMOND)
        return(SUCCESS);
    else if (_suit == CLUB)
        return(SUCCESS);
    else if (_suit == HEART)
        return(SUCCESS);
    else
        return(FAIL);
}


// This function converts a string to an int that represents the rank.

int    PlayCard::_rankToInt(string rank)
{
    if (rank == "J")
        return(JACK);
    else if (rank == "Q")
        return(QUEEN);
    else if (rank == "K")
        return(KING);
    else if (rank == "A")
        return(ACE);

    return(atoi(rank.c_str()));
    
}

// This function converts a string to an int that represents the suit.

int    PlayCard::_suitToInt(string suit)
{
    if (suit == "S")
        return(SPADE);
    else if (suit == "D")
        return(DIAMOND);
    else if (suit == "C")
        return(CLUB);
    else if (suit == "H")
        return(HEART);
    else
        return(0);
}

// Display a help message explaining how to enter a valid card.

void    PlayCard::helpMessage()
{
    cout << "\n*** For the rank, please enter 2-10 or j for Jack, q for Queen,";
    cout << "\n    k for King, or a for Ace\n";
    cout << "\n    For the suit, please enter s for Spades, d for Diamonds,";
    cout << "\n    c for Clubs, or h for Hearts.\n\n";
}

/*
 * Function: printCard()
 *
 * This function prints out the rank and suit of the card. It will be
 * in the form of rank of suit, with no newlines. (This is so the calling
 * routine can control the newlines). For example, "Queen of Hearts"
 * This function calls printRank() and printSuit() to print the actual
 * string for the rank and suit.
 *
 * Parameters:
 *
 * None
 *
 * Returns:
 *
 * None (void)
 *
 */

void    PlayCard::printCard()
{
    printRank();
    cout << " of ";
    printSuit();
    cout << "s";
}

// Print the rank. If it is an invalid rank, print "Invalid Rank".

void    PlayCard::printRank()
{
    cout << _rankToString();
}

string    PlayCard::_rankToString()
{
    char    tmp[5];
    
    if ((_rank >= TWO) && (_rank <= 10))
    {
        sprintf(tmp, "%d", _rank);
        return(tmp);
    }
    else if (_rank == JACK)
        return("Jack");
    else if (_rank == QUEEN)
        return("Queen");
    else if (_rank == KING)
        return("King");
    else if (_rank == ACE)
        return("Ace");
    else
        return("Invalid Rank");
}

// Print the suit. If it is an invalid suit, print "Invalid Suit".

void    PlayCard::printSuit()
{
    cout << _suitToString();
}

string    PlayCard::_suitToString()
{
    if (_suit == SPADE)
        return("Spade");
    else if (_suit == DIAMOND)
        return("Diamond");
    else if (_suit == CLUB)
        return("Club");
    else if (_suit == HEART)
        return("Heart");
    else
        return("Invalid Suit");
}

// Operator overloading functions

// allows (card1 > card2). If ranks are equal, look at the suits.
bool    operator >    (PlayCard card1, PlayCard card2)
{
    return(card1.getRank() > card2.getRank());
}

// allows (card1 < card2). If ranks are equal, look at the suits.
bool    operator <    (PlayCard card1, PlayCard card2)
{
    return(card1.getRank() < card2.getRank());
}

// allows (card1 == card2). Both the rank and suit must match.
bool    operator ==    (PlayCard card1, PlayCard card2)
{
    return(card1.getSuit() == card2.getSuit());
}

