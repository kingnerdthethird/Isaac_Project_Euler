// Euler_10.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

void Is_Prime(__int32 num)
{
	__int32 n = num; //number to be checked
	int check = 0; //check for bool
	int dif = 0; //difference of num divided by count
	for (__int32 i = 1; i <= num; i++) //runs while i is less than num
	{
		dif = n%i; //sets dif to the remainder of n divided by i
		if (dif != 0) //runs if dif does not equal 0
		{
			check = 1; //sets check to true
		}
		else
		{
			check = 0; //sets check to false
		}
	}

	if (check == 1) //runs if check is true
	{
		cout << "Prime!" << endl; //states that the number is prime
	}

	else
	{
		cout << "Not prime!" << endl; //states that the number is not prime
	}
}

int _tmain(int argc, _TCHAR* argv[])
{
	for (__int32 i = 0; i <= 2000000; i++)
	{
		Is_Prime(i);
	}
	return 0;
}

