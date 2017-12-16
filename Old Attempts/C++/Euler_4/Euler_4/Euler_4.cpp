// Euler_4.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <sstream>
#include <string>
#include <algorithm>
using namespace std;

bool Check(int num)
{
	int result;
	string number;
	string revNumber;
	ostringstream converter;
	converter << num;
	revNumber = converter.str();
	number = converter.str();
	if (number == string(number.rbegin(), number.rend()))
		{
			// cout << num << endl;
			return true;
		}
	else
		return false;
}
int Num()
{
	int num = 0;
	int sum = 0;

	for (int i = 100; i < 1000; i++)
	{
		for (int j = 100; j < 1000; j++)
		{
			sum = i * j;
			if (Check(sum))
			{
				if ((i*j) > num)
					num = i*j;
			}
		}
		cout << num << endl;
	}
	cout << "FINISHED" << endl;
	return num;
}
int _tmain(int argc, _TCHAR* argv[])
{
	Num();
	cin.get();
	cin.get();
	return 0;
}