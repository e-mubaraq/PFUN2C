/**
 * This program uses the PlayCard and CardDeck classes to play a card game
 *
 * @author Mubarak Mikail
 *
 * Andrew ID: mmikail
 *
 * On my honor, as a Carnegie-Mellon Africa student, I have neither given nor received unauthorized assistance on this work.
 *
 */

#include    <iostream>
#include    <cstdlib>
#include    <string>

#include    "../include/PlayCard.h"
//#include    "PlayCard.cpp"
using namespace std;

int main(int argc, char **argv)
{
    PlayCard card1;
    PlayCard card2("10", "D");
    PlayCard card("K", "S");
    PlayCard c3, c4;

    card1.printCard();
    cout << endl;
    card2.printCard();
    cout << endl;
    card.printCard();

    cout << endl;

    c3.promptCard();
    c4.promptCard();

    if (c3 > c4)
    {
        cout << "High Card: " ;
        c3.printCard();
        cout << endl << "Low Card : ";
        c4.printCard();
    }
    else if (c3 < c4)
    {
        cout << "High Card: " ;
        c4.printCard();
        cout << endl << "Low Card : ";
        c3.printCard();
    }

    else if (c3 == c4)
    {
        cout << "The Cards are Equal: " ;
        c3.printCard();
    }

}
