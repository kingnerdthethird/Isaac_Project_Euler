// Euler_5.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

int Prime_Factor()
{
	int i;
	long long int num = 20;
	bool notFound = true; // tells if the number has been found 
	bool skip; // tells the program if it should skip the number
	const int checks[10] = {
		20, 19, 18, 17, 16, 15, 14, 13, 12, 11, // you dont need to check all numbers
	};
	while (notFound) //while the number hasn't been found
	{
		skip = false;
		num += 20; // go up by 20 each time because it has to be divisible by 20
		for (i = 0; i < 10; i++)
		{
			if (num % checks[i])
			{
				skip = true;
			}
		}
		if (skip)
		{
			continue;
		}
		cout << "Number is: " << num << endl;
		notFound = false;
	}
	return num;
}
int _tmain(int argc, _TCHAR* argv[])
{
	Prime_Factor();
	cin.get();
	cin.get();
	return 0;
}

