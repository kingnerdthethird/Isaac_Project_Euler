// Euler_2.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<iostream>

using namespace std;

int fib()
{
	long int fib = 0;
	long int fib1 = 1;
	long int fib2 = 0;
	long int c;
	long int total = 0;
	
	for (c = 0; c < 35; c++)
	{
		if (c <= 1)
			fib = c;
		else
		{
			fib = fib1 + fib2;
			fib1 = fib2;
			fib2 = fib;
		}
		if (fib % 2 == 0)
			total += fib;
		else
		{
			cout << "Next number:" << endl;
		}
		cout << total << endl;

	}	
	return fib;
}
int main()
{
	fib();
	cin.get();
	cin.get();
	return 0;
}