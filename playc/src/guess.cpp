/**
 * C++ computer guess program
 *
 * @author Mubarak Mikail
 *
 * Andrew ID: mmikail
 *
 * On my honor, as a Carnegie-Mellon Africa student, I have neither given nor received unauthorized assistance on this work.
 *
 */

#include <iostream>
#include "../include/guess.h"

using namespace std;

int main()
{
    int N;
    cout << "I will guess a number from 1 to N. Please enter N: ";
    cin >> N;

    guessNumber(N);
    isEqual(N);
    isGreater(N);
    return 0;
}

bool isEven(int n)
{
    return (n % 2) == 0;
}

bool isOdd(int n)
{
    return (n % 2) == 0;
}

int guessNumber(int x)
{
    if(isEven(x))
        return x / 2;
    else
        return (x / 2) + 1;

    guessNumber(x - 1);
}

bool isGreater(int x)
{
    string ans;
    cout << "Is it higher than "<< guessNumber(x) <<" ? Please enter y or n: ";
    cin >> ans;
    if (ans.compare("y") != 0)
        return true;
    else
        return false;
    isGreater(x -1);
}

bool isEqual(int x)
{
    string ans;
    cout << "Is it "<< guessNumber(x) <<" ? Please enter y or n: ";
    cin >> ans;
    if (ans.compare("y") != 0)
        return true;
    else
        return false;
    isEqual(x);
}
