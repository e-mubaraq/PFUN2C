/**
 * This program uses the Movie class to create and print a few movies
 *
 * @author Mubarak Mikail
 *
 * Andrew ID: mmikail
 *
 * On my honor, as a Carnegie-Mellon Africa student, I have neither given nor received unauthorized assistance on this work.
 *
 */

#include    <iostream>
#include    "../include/Movie.h"
using namespace std;


int main(int argc, char **argv)
{
    Movie m;
    Movie m1("Iron Man");
    Movie m2("The Dark Knight", 150);
    Movie m3("Lacas de Papel", "Spanish", 120);

    cout << m <<endl;
    cout << m1 <<endl;
    cout << m2 <<endl;
    cout << m3 <<endl;

}
