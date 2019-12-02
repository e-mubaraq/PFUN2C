/**
 * C++ play string program
 *
 * @author Mubarak Mikail
 *
 * Andrew ID: mmikail
 *
 * On my honor, as a Carnegie-Mellon Africa student, I have neither given nor received unauthorized assistance on this work.
 *
 */

#include <iostream>
#include <cstring>
#include <string>
#include "../include/playStr.h"

using namespace std;

int main()
{
    char str[80];

    cout << "Enter a string: ";
    cin >> str;
    while( strcmp(str , "end"))
    {
        cout << "String 1: " << str << endl << endl;
        print1(str);
        cout << endl;
        print2(str);
        cout << endl;


        cout << "Enter a string: ";
        cin >> str;
    }

}

void print1(char str[80])
{
    for (int i = 1; i <= strlen(str); i++)
    {
        cout<< i <<". " << str[i-1] << endl;
    }
}

void print2(char str[80])
{
    int i = 1;
    while (i <= strlen(str))
    {
        cout<< i <<". " << str[i -1] << endl;
        i++;
    }
}

void print3(char str[])
{

}

void print4(string str)
{
l
}

