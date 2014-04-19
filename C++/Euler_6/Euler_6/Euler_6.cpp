// Euler_6.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <math.h>
using namespace std;

int Square_Sum()
{
	int num = 1;
	long int sum = 0;
	long int num1;
	for (int i = 1; i <= 100; i++)
	{
		num1 = pow(num, 2);
		sum += num1;
		num++;
	}
	//cout << sum << endl;
	return sum;
}

int Natural_Sqaure()
{
	int num = 1;
	int sum = 0;
	for (int i = 1; i <= 100; i++)
	{
		sum += num;
		num++;
	}
	sum = pow(sum, 2);
	//cout << sum << endl;
	return sum;
}

int Difference()
{
	long int diff = 0;
	diff = Natural_Sqaure() - Square_Sum();
	cout << diff << endl;
	return diff;
}
int _tmain(int argc, _TCHAR* argv[])
{
	Difference();
	//Natural_Sqaure();
	//Square_Sum();
	cin.get();
	cin.get();
	return 0;
}

