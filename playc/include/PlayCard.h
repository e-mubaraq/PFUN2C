/*
 * Written by Cathy Bishop January 1998
 *
 * Project 1 for CSC161
 *
 * This is the class declaration for the PlayCard class which can
 * be used for an object to represent a playing card.
 *
 *
 */

#ifndef    PLAYCARD_H
#define    PLAYCARD_H

#include    <iostream>
#include    <string>
#include    <stdio.h>

using namespace std;


#ifndef    SUCCESS
#define    SUCCESS    1
#define    FAIL    0
#endif

// These are the card ranks

#define    TWO    2
#define    THREE    3
#define    FOUR    4
#define    FIVE    5
#define    SIX    6
#define    SEVEN    7
#define    EIGHT    8
#define    NINE    9
#define    TEN    10
#define    JACK    11
#define    QUEEN    12
#define    KING    13
#define    ACE    14

// These are the card suits

#define    SPADE    4
#define    DIAMOND    3
#define    CLUB    2
#define    HEART    1

class PlayCard
{
public:

    // These are the constructors

    PlayCard();
    PlayCard(string rank, string suit);

    // These are the access functions

    int        getRank() const;
    int        getSuit() const;
    string     getName();

    // These are the rest of the member functions

    int     promptCard();        // prompt, set rank and suit

    void    setRank(int rank);
    void    setSuit(int suit);

    void    printCard();        // display the rank and suit
    void    helpMessage();    // display a help message

    // functions to print the correct string for the rank and suit

    void    printRank();
    void    printSuit();

private:

    int    _suit;    // the suit (can be a spade, diamond, club, or heart)
    int    _rank;    // the suit (2-9, jack, queen, king, or ace)

    // functions for converting the rank and suit to ints

    int    _rankToInt(string rank);
    int    _suitToInt(string suit);

    // functions for converting the _rank and _suit to strings

    string    _rankToString();
    string    _suitToString();

    // functions that actually prompt for the rank and suit

    int    _promptRank();
    int    _promptSuit();
};

// Operator overloading functions

bool    operator >    (PlayCard card1, PlayCard card2);
bool    operator <    (PlayCard card1, PlayCard card2);
bool    operator ==    (PlayCard card1, PlayCard card2);

#endif
