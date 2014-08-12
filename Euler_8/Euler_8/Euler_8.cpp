// Euler_8.cpp : Defines the entry point for the console application.
//The program works, I keep getting an answer, but the website says its wrong. I've been working on the problem
//for a few days now. Robert and I are working together at my dad's office and he's been able to help me with
//syntax and small errors, but we can't figure it out. We were wondering if you could take a look as a pair
//of fresh eyes since we can't figure out where the program dies.
//Thanks,
//Isaac

#include "stdafx.h"
#include <iostream>
#include <string>
using namespace std;

const int LENGTH_OF_ESCAPE_CHARACTER = 1; //used to correct error with strings

__int32 Converter(string nums) //using __int32 because otherwise I get an annoying error but could use unsigned long int
{
	__int32 counter = 1; //total number that's been multiplied
	for (int c = 0; c <= nums.length() - LENGTH_OF_ESCAPE_CHARACTER; c++) //runs until c is equal to the length of the string
	{
		counter *= nums[c] - '0'; //multiplies each char by the total
		//cout << counter << endl;
	}
	return counter; //returns product of all the numbers
}

int _tmain(int argc, _TCHAR* argv[])
{
	string longnumber = "7316717653133062491922511967442657474235534919493496983520312774506326239578318016984801869478851843858615607891129494954595017379583319528532088055111254069874715852386305071569329096329522744304355766896648950445244523161731856403098711121722383113622298934233803081353362766142828064444866452387493035890729629049156044077239071381051585930796086670172427121883998797908792274921901699720888093776657273330010533678812202354218097512545405947522435258490771167055601360483958644670632441572215539753697817977846174064955149290862569321978468622482839722413756570560574902614079729686524145351004748216637048440319989000889524345065854122758866688116427171479924442928230863465674813919123162824586178664583591245665294765456828489128831426076900422421902267105562632111110937054421750694165896040807198403850962455444362981230987879927244284909188845801561660979191338754992005240636899125607176060588611646710940507754100225698315520005593572972571636269561882670428252483600823257530420752963450";
	int max_digit = 0; //same as index, is in here because Robert said so and I can't argue with the boss
	__int32 max_value = 0; //highest product found
	int curr_value = 0; //product output from function
	string list; //not needed, used later for things
	int x; //amount of adjacent digits to look for
	int index; //not needed, used later for things
	
	cout << "How many digits?" << endl; //asks how many adjacent digits to check everything after is bull, i just got bored
	cin >> x;							//I did this because problem 8 used to be 5 adjacent digits, now its 13 so user gets to choose
	cout << x << " Digits will be used." << endl; //just added in for fun, not needed
	cout << "Press enter to begin." << endl; //just added in for fun, not needed
	cin.get(); //used to pause program
	cin.get(); //used to pause program
	cout << "Running..." << endl; //just added in for fun, not needed

	for (int i = 0; i <= longnumber.length() - LENGTH_OF_ESCAPE_CHARACTER - x; i++) //runs until it runs out of space in the number
	{
		string sub = longnumber.substr(i, x); //takes a substring from the longnumber that is equal in length to the value input from user

		curr_value = Converter(sub); //set curr_value to whatever Converter returns

		if (curr_value > max_value) //only goes if curr_value is larger than max_value
		{
			cout << "Success " << max_value << " Substring " << sub << " Index: " << i << endl; //didn't need this but helped to find errors
			max_value = curr_value; //set max_value to curr_value
			// cout << max_value << endl;
			max_digit = i; //not needed
			list = sub; //not needed
			index = i; //not needed

		}
		//cout << "Current index: " << i << " Substring: " << sub << " with value:" << curr_value << endl;
	}
	cout << "Value: " << max_value << " Numbers: " << list << " Index: " << index << endl; //repeats the final value, substring, and index
	cin.get(); //used to pause program, not needed
	cin.get();  //used to pause program, not needed
	return 0;
}