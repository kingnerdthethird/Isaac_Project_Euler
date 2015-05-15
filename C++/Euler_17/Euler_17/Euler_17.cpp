// Euler_17.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <sstream>
using namespace std;

string ones[] = {
	"", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine",
	"ten", "eleven", "twelve", "thirteen", "fourteen", "fifteen", "sixteen", "seventeen", "eighteen", "nineteen"
};
string tens[] = {
	"twenty", "thirty", "forty", "fifty", "sixty", "seventy", "eighty", "ninety"
};
string hundreds[] = {
	"one", "two", "three", "four", "five", "six", "seven", "eight", "nine"
};
string thousands[]{
	"one"
};

string hundred = "hundred";
string and = "and";
string thousand = "thousand";

int AddNumbers();

int _tmain(int argc, _TCHAR* argv[]){
	cout << AddNumbers() << endl;
	system("pause");
	return 0;
}

int AddNumbers(){
	int sum = 0;

	for (int b = 0; b < 20; b++){
		sum += ones[b].length();
	}
	for (int f = 0; f < 8; f++){
		sum += tens[f].length();
		for (int g = 1; g < 10; g++){
			sum += tens[f].length() + ones[g].length();
		}
	}
	for (int a = 0; a < 9; a++){
		sum += hundreds[a].length() + hundred.length();
		for (int c = 1; c < 20; c++){
			sum += hundreds[a].length() + hundred.length() + and.length() + ones[c].length();
		}
		for (int d = 0; d < 8; d++){
			sum += hundreds[a].length() + hundred.length() + and.length() + tens[d].length();
			for (int e = 1; e < 10; e++){
				sum += hundreds[a].length() + hundred.length() + and.length() + tens[d].length() + ones[e].length();
			}
		}
	}
	sum += thousands[0].length() + thousand.length();

	return sum;
}