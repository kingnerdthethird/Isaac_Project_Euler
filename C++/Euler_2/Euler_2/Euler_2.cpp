#include "stdafx.h"
#include <iostream>
using namespace std;

int fib() //generates fib numbers
{
	long int fib = 0; //number in sequence 
	long int fib1 = 1; //first number to be added
	long int fib2 = 0; //second number
	long int c; //counter
	long int total = 0; //sum of numbers
	
	for (c = 0; c < 35; c++) //runs until c hits 35
	{
		if (c <= 1) //runs if c is less than or equal to 1
			fib = c; //sets fib to c
		else //runs if the above is not true
		{
			fib = fib1 + fib2; //sets fib to the sum of fib1 added to fib2
			fib1 = fib2; //sets fib1 to the value of fib2
			fib2 = fib; //sets fib2 to the value of fib
		}
		if (fib % 2 == 0) //runs if fib is even
			total += fib; //adds fib to total
		else //runs if fib is not even
		{
			cout << "Next number:" << endl; //states that the program is finding the next number
		}
		cout << total << endl; //states final sum

	}	
	return fib; //returns fib
}
int main()
{
	fib(); //runs fib
	cin.get(); //pauses
	cin.get(); //pauses
	return 0; 
}