/**
 * C++ program to demonstrate reference parameters
 *
 * @author Mubarak Mikail
 *
 * Andrew ID: mmikail
 *
 * On my honor, as a Carnegie-Mellon Africa student, I have neither given nor received unauthorized assistance on this work.
 *
 */
#include <stdio.h>
#include <iostream>
#include <cstring>

#include "../include/testParams.h"
using namespace std;

int main(int argc, char **argv)
{
    double x; double y;

    //Before each call, set x and y:

    x = 80.5;
    y = 90.5;
    cout << "&x is now: " << &x << " &y is now this: " << &y << endl;
    cout << average2NumsV(x, y) << endl;
    cout << "x is now: " << x << " y is now this: " << y << endl;

    x = 80.5;
    y = 90.5;
    cout << average2NumsA(&x, &y) << endl;
    cout << "x is now: " << x << " y is now this: " << y << endl;

    x = 80.5;
    y = 90.5;
    cout << average2NumsR(x, y) << endl;
    cout << "x is now: " << x << " y is now this: " << y << endl;
    cout << average2NumsV(10.0, 8.0);
//    cout << average2NumsA(10.0, 8.0);
//    cout << average2NumsR(10.0, 8.0);
}

//Pass-by-value
double  average2NumsV(double num1, double num2)
{
    double sum;
    double average;

    cout << "V &num1 is now: " << &num1 << " &num2 is now this: " << &num2 << endl;
    cout << "V1. num1 is: " << num1 << endl;
    sum = num1 + num2;
    average = sum / 2.0;

    num1 = 0;

    cout << "V2. num1 is: " << num1 << endl;
    return(average);
}

//Pass-by-address
double  average2NumsA(double *num1, double *num2)
{
    double sum;
    double average;

    cout << "A &num1 is now: " << &num1 << " &num2 is now this: " << &num2 << endl;
    cout << "A &*num1 is now: " << &*num1 << " &*num2 is now this: " << &*num2 << endl;
    cout << "A1. num1 is: " << *num1 << endl;
    sum = *num1 + *num2;
    average = sum / 2.0;

    *num1 = 0;
    cout << "A2. num1 is: " << *num1 << endl;
    return(average);
}

//Pass-by-reference
double  average2NumsR(double &num1, double &num2)
{
    double sum;
    double average;

    cout << "R &num1 is now: " << &num1 << " &num2 is now this: " << &num2 << endl;
    cout << "R1. num1 is: " << num1 << endl;
    sum = num1 + num2;
    average = sum / 2.0;

    num1 = 0;
    cout << "R2. num1 is: " << num1 << endl;
    return(average);
}

