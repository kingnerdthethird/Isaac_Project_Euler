// Euler_7.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

int Fill_Array()
{
	int place = 0;
	int num = 1;
	int i;
	int p;
	cout << "it works!" << endl;
	while (place <= 10001)
	{
		for (i = 1;; i++)
		{
			p = num % i;
			if (p = 0)
			{
			place++;
			cout << num << endl;
			}
		}
		cout << "next" << endl;
		num++;
	}

	return num;
}
int _tmain(int argc, _TCHAR* argv[])
{
	cout << "test" << endl;
	Fill_Array();
	cin.get();
	cin.get();
	return 0;
}

