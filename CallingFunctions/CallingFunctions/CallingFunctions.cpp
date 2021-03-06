// CallingFunctions.cpp : Defines the entry point for the console application.
//
/*
Author:				Bob Delamater
Description:		Demonstrate how to call functions within the same class and in another class
*/



#include "stdafx.h"
#include "ForeignFunction1.h"
#include <iostream>
#include "CallingFunctions.h"
#include<time.h>
using namespace std;
int main()
{
	FunctionInOtherClassReadFile1();
	cout << AddNumbers(10, 2) ;
	cout << GetRandomNum() << endl;
    return 0;
}

double AddNumbers(double num1, double num2)
{
	return (num1 + num2);
}

double GetRandomNum()
{
	srand((unsigned)time(0));
	double random_integer;
	double lowest = 1, highest = 10;
	double range = (highest - lowest) + 1;
	for (double index = 0; index<20; index++) {
		random_integer = lowest + double(range*rand() / (RAND_MAX + 1.0));
		cout << random_integer << endl;
	}
	return random_integer;
}