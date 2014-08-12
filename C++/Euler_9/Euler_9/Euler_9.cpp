// Euler_9.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <math.h>
using namespace std;

bool Check_1000(int a, int b, int c) //Checks if a + b + c = 1000
{
	int check; //check for bool

	if (a + b + c == 1000) //runs if a + b + c = 1000
	{
		check = 1; //sets check to true
	}

	else
	{
		check = 0; //sets check to false
	}

	return check; //returns whether or not check is true or false
}

void Generate_Triples(int x) //generates the triples
{
	int num = 0; //x divided by 2
	int m = 0; //Used in equation
	int n = 0; //Used in equation
	int a = 0; //initializes a
	int b = x; //initializes b
	int c = 0; //initializes c
	int check; //check for bool
	int product; //a*b*c
	int div_1 = 0; //Used in finding factors
	int div_2 = 0; //Used in finding factors
	num = x / 2; //Divides x by 2

	for (int i = 1; i <= num; i++) //Runs as long as the counter (i) is lower than num
	{

		div_1 = num % i; //Divides num by i and sets div_1 to the remainder

		if (div_1 == 0) //Runs only if remainder is 0
		{

			div_2 = num / i; //Sets div_2 to num divided by i

			if (i > div_2) //Runs only if i is greater than div_2
			{
				m = i; //Sets m to i
				n = div_2; //Sets n to div_2
			}

			else if (i < div_2) //Runs only if i is less than div_2
			{
				m = div_2; //Sets m to div_2
				n = i; //Sets n to i
			}

			else
			{
				m = m; //Not needed, keeps old values
				n = n; //Not needed, keeps old values
			}

		}

		a = (pow(m, 2) - pow(n, 2)); //finds a
		c = (pow(m, 2) + pow(n, 2)); //finds c
		check = Check_1000(a, b, c); //runs check
		if (check == 1) //runs if check is true
		{
			product = a*b*c; //multiplies abc
			cout << "A = " << a << " B = " << b << " C = " << c << " With a product of: " << product << endl; //displays a, b, c, product
		}

	}

}
int _tmain(int argc, _TCHAR* argv[])
{
	int input = 0; //input from user

	cout << "Go to what number?" << endl; //not needed, asks for range
	cout << "> "; //not needed, line for input
	cin >> input; //not needed, sets input to value
	cout << "Will go to: " << input << endl; //not needed, states back input
	cout << "Press enter to begin." << endl; //not needed, states a pause
	cin.get(); //not needed, pauses

	for (int i = 0; i < input; i++) //runs while i is less than input
	{
		Generate_Triples(i); //generates triples up to input
	}

	cin.get(); //not needed, pauses program
	return 0;
}

