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

int num_of_tries = 0;
int main()
{
    int N;
    cout << "I will guess a number from 1 to N. Please enter N: ";
    cin >> N;
    guessNumber(1, N);
}

int guessNumber(int lowNum, int highNum)
{
    string ansEqual, ansGreater;
    int middleNum;

    middleNum = (highNum + lowNum) / 2;


    cout << "Is it "<< middleNum <<" ? Please enter y or n: ";
    cin >> ansEqual;

    if (lowNum == highNum || middleNum <= 1)
        return 0;

    else if (ansEqual.compare("y") == 0)
    {
        num_of_tries++;
        cout << endl << "I guessed your number in " << num_of_tries << " tries!";
        return 0;
    }

    else
    {
        cout << "Is it higher than " << middleNum << " ? Please enter y or n: ";
        cin >> ansGreater;
        if (ansGreater.compare("y") == 0)
        {
            num_of_tries++;
            return guessNumber(middleNum + 1, highNum);
        }

        else
        {
            num_of_tries++;
            return guessNumber(lowNum, middleNum - 1);
        }

    }

}
