// Euler_3.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream> 
using namespace std;

int is_prime()
{
	long long int n = 600851475143; //number
	long long int f = 0; //factor
	long long int p = 0; //prime factor
	long long int c; //count
	long long int c2; //count 2
	int check = 0;

	for (c = 2; c < n; c++)
	{
		if (n % c == 0)
		{
			f = c;
		}
		for (c2 = 2; c2 < f; c2++)    
		{
			if (f % c2 == 0)    
			{
				check = 1;
			}
		}

			if (check == 0)    
			{
				p = f;
			}
		cout << p << endl;
	}
	return p;
}
int main()
{
	is_prime();
	cin.get();
	cin.get();
	return 0;
}
