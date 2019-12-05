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
    string s1, s2;
    char str[80];
    char str2[80];
    int count = 1;

    cout << "Enter a string: ";
    cin >> str;
    while( strcmp(str , "exit"))
    {
        cout << "String " << count << ": " << str << endl << endl;
        print1(str);
        cout << endl;
        print2(str);
        cout << endl;
        print3(str);
        cout << endl;
        print4(str);
        cout << endl;

        cout << "Enter a string: ";
        cin >> str;
        count++;
    }
    cout << "Enter another string: ";
    cin >> s2;
    strcpy(str2, s2.c_str());
    cout << "String " << count << ": " << str << endl << endl;
    print1(str2);
    cout << endl;
    print2(str2);
    cout << endl;
    print3(str2);
    cout << endl;
    print4(s2);
    cout << endl;


}

void print1(char str[80])
{
    cout<< "print1()" << endl;
    for (int i = 1; i <= strlen(str); i++)
    {
        cout<< i <<". " << str[i-1] << endl;
    }
}

void print2(char str[80])
{
    int i = 0;
    cout<< "print2()" << endl;
    while (str [i] != '\0')
    {
        i++;
        cout<< i <<". " << str[i -1] << endl;
    }
}

void print3(char str[80])
{
    int i = 0;
    cout<< "print3()" << endl;
    while(*str  != '\0')
    {
        i++;
        cout<< i <<". " << *str << endl;
        *str++;
    }
}

void print4(string str)
{
    cout<< "print4()" << endl;
    for (int i = 1; i <= str.size(); i++)
    {
        cout<< i <<". " << str.substr(i-1, 1) << endl;
    }
}

