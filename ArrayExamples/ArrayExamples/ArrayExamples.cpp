// ArrayExamples.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;


int main()
{
	int arrayOfInts[10] = { 1,2,3,4,5,6,7,8,9,10 };

	//enum month {Jan = 1, Feb = 2, Mar = 3, Apr = 4, May = 5, Jun = 6, Jul = 7, Aug = 8, Sep = 9, Oct = 10, Nov = 11, Dec = 12 };
	enum month { Jan = 1, Feb, Mar, Apr, May, Jun, Jul, Aug, Sep, Oct, Nov, Dec};
	month m;
	m = Mar;
	cout << m << endl;
    return 0;
}

