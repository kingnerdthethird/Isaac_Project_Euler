// Euler_7.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

bool Is_Prime(int num)
{
	int n = num; //Number
	int i; //Counter
	int sum = 0; //Sum
	int p = 0;
	for (i = 2; i < n; i++)
	{
		sum = n%i; //divides number by counter
		if (sum != 0)
		{

		}
		else
		{
			return 0;
		}
	}
}

int _tmain(int argc, _TCHAR* argv[])
{
	int prime = 0;
	for (int place = 2; prime < 10001; place++)
	{

		if (Is_Prime(place) == 0)
		{
			//cout << count << " is Not Prime!" << endl;
		}

		else
		{
			prime++;
			cout << prime << ":" << place << " is Prime" << endl;
		}

	}
	
	cin.get();
	cin.get();
	return 0;
}

