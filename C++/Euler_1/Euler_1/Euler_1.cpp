// Euler_1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

int Total(int total, int n)
{
	for (int n = 1; n < 1000; ++n)
	{
		if (n % 3 == 0 || n % 5 == 0)
		{
			total += n;
			cout << total << endl;
		}
		else
		{
			cout << "Finding Next Total:" << endl;
		}
	}
	return total;
}
int _tmain(int argc, _TCHAR* argv[])
{
	Total(0, 0);
	cin.get();
	cin.get();
	return 0;
}

