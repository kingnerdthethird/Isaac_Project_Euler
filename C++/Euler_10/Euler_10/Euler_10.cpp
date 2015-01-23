// Euler_10.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

bool Is_Prime(__int32 num); //prototypes Is_Prime

int _tmain(int argc, _TCHAR* argv[])
{
	__int64 sum = 0; //sum of all primes
	for (__int32 i = 2; i <= 2000000; i++) //runs until i is 2000000
	{
		if (Is_Prime(i) == 0) //runs if Is_Prime is false
		{

		}
		else //runs if Is_Prime is true
		{
			sum += i; //adds number to sum of all primes
			cout << i << " is prime!" << " Current total is: " << sum << endl;
		}
	}
	cout << sum << endl; //states final sum
	cin.get(); //pauses
	cin.get(); //pauses
	return 0;
}

bool Is_Prime(__int32 num)
{
	__int32 n = num; //number to be checked
	int dif = 0; //difference of num divided by count
	for (__int32 i = 2; i < num; ++i) //runs while i is less than num
	{
		dif = n%i; //sets dif to the remainder of n divided by i
		if (dif != 0) //runs if dif does not equal 0
		{
			//sets check to true
		}
		else //runs if dif does not not equal 0
		{
			return 0; //returns false
		}
	}
}

