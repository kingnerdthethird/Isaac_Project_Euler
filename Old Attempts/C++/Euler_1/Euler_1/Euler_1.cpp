// Euler_1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

int Total(int total, int n) //finds the total
{
	for (int n = 1; n < 1000; ++n) //runs while n is less than 1000
	{
		if (n % 3 == 0 || n % 5 == 0) //runs if divisible by 3 or 5
		{
			total += n; //adds to total
			cout << total << endl; //states total
		}
		else
		{
			cout << "Finding Next Total:" << endl; //states that the prgram is moving to next total
		}
	}
	return total; //returns the total
}
int _tmain(int argc, _TCHAR* argv[])
{
	Total(0, 0); //runs the function
	cin.get(); //not needed, pauses
	cin.get(); //not needed, pauses
	return 0;
}

