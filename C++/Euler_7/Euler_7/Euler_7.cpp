// Euler_7.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

bool Check_Prime(int num)
{
	int temp;
	for (int i = 1; i < num; i++)
	{
		temp = num % i;
		if (temp = 0)
		{
			return false;

		}
		else
		{
			cout << num << " is prime" << endl;
			return true;
		}
	}
}

int Fill_Array()
{
	int i;
	int place;
	place = 0;
	int prime[10000]{};
	for (i = 1; i++;)
	{
		if (Check_Prime(i))
		{
			cout << i << " is prime" << endl;
			prime[place] = i;
		}
		else
		{
			cout << i << " does not work" << endl;
		}
		place++;
	}
	cout << prime[10000] << endl;
	return place;
}
int _tmain(int argc, _TCHAR* argv[])
{
	Fill_Array;
	cin.get();
	cin.get();
	return 0;
}

