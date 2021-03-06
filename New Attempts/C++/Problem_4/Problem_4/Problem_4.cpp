#include "stdafx.h"
#include <iostream>
#include <vector>
using namespace std;

bool IsPalindrome(int input);

int main(){
	int number = 0;

	for (int i = 1000; i >= 100; i--) {
		for (int j = 1000; j >= 100; j--) {
			int temp = i * j;
			if (temp > number) {
				if (IsPalindrome(temp)) {
					number = temp;
				}
			}
		}
	}

	cout << number << endl;
	system("PAUSE");
    return 0;
}

bool IsPalindrome(int input) {
	vector<int> digits;

	while (input > 0) {
		digits.push_back(input % 10);
		input /= 10;
	}

	int j;

	for (int i = 0; i < (digits.size()) / 2; i++) {
		j = digits.size() - (i + 1);
		if (digits[i] != digits[j]) {
			return false;
		}
	}

	return true;
}