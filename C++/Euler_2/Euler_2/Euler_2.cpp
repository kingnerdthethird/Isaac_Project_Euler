#include "stdafx.h"
#include <iostream>
using namespace std;

int fib() //generates fib nunbers
{
	long int fib = 0; //first number in fib
	long int fib1 = 1; //needs to start at 1
	long int fib2 = 0; //needs to start at 0
	long int c; //counter
	long int total = 0; //final sum
	
	for (c = 0; c < 35; c++) //runs until c is less than 35
	{
		if (c <= 1) //runs if c is less than or equal to 1
			fib = c; //sets fib to c
		else //runs if the above is not true
		{
			fib = fib1 + fib2; //sets fib to the sum of fib1 plus fib2
			fib1 = fib2; //sets fib1 to the value of fib2
			fib2 = fib; //sets fib2 to the value of fib
		}
		if (fib % 2 == 0) //runs if fib is even
			total += fib; //adds fib to total
		else //runs if fib is odd
		{
			cout << "Next number:" << endl; //states that the program is going to the next number
		}
		cout << total << endl; //states final sum

	}	
	return fib; //returns value of fib
}
int main()
{
	fib(); //runs the function fib
	cin.get(); //pauses
	cin.get(); //pauses
	return 0;
}