//============================================================================
// Name        : playc.cpp
// Author      : Mubarak Mikail
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

/**
 * C++ hello world! program
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
#include "../include/playc.h"
using namespace std;

int main(int argc, char *argv[])
{
  printString(argv[0]);
  return 0;
}

void printString(char * str)
{
  cout << "The string is :"<< str << endl;
  cout << "The length of the string is: "<< strlen(str) << endl;
}
