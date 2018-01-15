#include "stdafx.h"
#include <iostream>
#include <math.h>
#include <vector>
using namespace std;

vector<int> GenerateNumber(int base, int exponent);
vector<int> MultiplyCells(vector<int> input, int base);
vector<int> ReduceCells(vector<int> input);

int main(){
	vector<int> test = GenerateNumber(2147483648, 2147483648);
	for (int i = 0; i < test.size(); i++) {
		cout << test[i];
	}
	cout << endl;
	system("PAUSE");
    return 0;
}

vector<int> GenerateNumber(int base, int exponent) {
	vector<int> number;

	number.push_back(base);
	exponent--;

	while (exponent > 0) {
		cout << exponent << endl;
		number = ReduceCells(number);
		number = MultiplyCells(number, base); 
		number = ReduceCells(number);
		exponent--; 
	}

	return number;
}

vector<int> MultiplyCells(vector<int> input, int base) {
	for (int i = 0; i < input.size(); i++) {
		input[i] *= base;
	}

	return input;
}

vector<int> ReduceCells(vector<int> input) {
	if (input.size() > 1) {
		for (int i = input.size() - 1; i > 0; i--) {
			int a = input[i];
			int b = input[i - 1];

			b = b + ((a - (a % 10)) / 10);
			a %= 10;

			input[i] = a;
			input[i - 1] = b;
		}
	}

	while (input[0] >= 10) {
		int c = (input[0] - (input[0] % 10)) / 10;
		input[0] %= 10;
		input.insert(input.begin(), c);
	}

	return input;
}