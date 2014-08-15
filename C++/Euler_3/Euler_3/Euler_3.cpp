// Euler_3.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream> 
using namespace std;

int is_prime() //function to do everything
{
	long long int n = 600851475143; //number
	long long int f = 0; //factor
	long long int p = 0; //prime factor
	long long int c; //count
	long long int c2; //count 2
	int check = 0; //check for true 

	for (c = 2; c < n; c++) //runs until c is less than but not qual to n
	{
		if (n % c == 0) //runs if the remainder of n divided by c is 0
		{
			f = c; //sets f to c
		}
		for (c2 = 2; c2 < f; c2++) //runs until c2 is less than but not equal to f    
		{
			if (f % c2 == 0) //runs if the remainder of f divided by c2 is 0
			{
				check = 1; //sets check to true
			}
		}

			if (check == 0) //runs if check is false
			{
				p = f; //sets p to f
			}
	
	}	
	cout << p << endl; //states the prime factor 
	return p; //returns the value of p
}
int main()
{
	is_prime(); //runs is_prime
	cin.get(); //pauses
	cin.get(); //pauses
	return 0;
}
