#include "stdafx.h"
#include <iostream>
#include <math.h>
#include <vector>
#include <fstream>
using namespace std;

vector<int> GenerateNumber(int base, int exponent);
vector<int> MultiplyCells(vector<int> input, int base);
vector<int> ReduceCells(vector<int> input);
double CalculateAverageDigit(vector<int> input);

int main(){
	vector<int> test = GenerateNumber(2, 1000);
	int sum = 0;
	for (int i = 0; i < test.size(); i++) {
		cout << test[i];
		sum += test[i];
	}
	cout << endl;
	cout << "This is " << test.size() << " digits long" << endl;
	cout << "The sum of the digits is: " << sum << endl;
	/**vector<double> averages;
	ofstream file;
	file.open("Average Digit Value.txt");
	cout.precision(9);
	file.precision(9);
	if (file.is_open()) {
		for (int i = 1; i <= 1000; i++) {
			for (int j = 1; j <= 1000; j++) {
				averages.push_back(CalculateAverageDigit(GenerateNumber(i, j)));
				cout << "Base: " << i << " Exponent: " << j << " Average: " << averages[averages.size() - 1] << endl;
				file << "Base: " << i << " Exponent: " << j << " Average: " << averages[averages.size() - 1] << endl;
			}
		}

		double total_averages = 0;

		for (int i = 0; i < averages.size(); i++) {
			total_averages = total_averages + averages[i];
		}

		total_averages = total_averages / averages.size();

		cout << "The total average is: " << total_averages << endl;
		file << "The total average is: " << total_averages << endl;
	}
	file.close();**/
	system("PAUSE");
    return 0;
}

vector<int> GenerateNumber(int base, int exponent) {
	vector<int> number;

	number.push_back(base);
	exponent--;

	while (exponent > 0) {
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

double CalculateAverageDigit(vector<int> input) {
	int sum = 0;
	for (int i = 0; i < input.size(); i++) {
		sum += input[i];
	}

	double average = (double)sum / input.size();

	return average;
}