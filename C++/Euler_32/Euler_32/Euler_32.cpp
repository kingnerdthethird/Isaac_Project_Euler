// Euler_32.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <math.h>
#include <vector>
#include <algorithm>
using namespace std;

bool IsPandigital(int num);
int Combine(int a, int b, int c);

int _tmain(int argc, _TCHAR* argv[]){
	cout << IsPandigital(Combine(39, 186, 7254)) << endl;
	system("pause");
	return 0;
}

bool IsPandigital(int num){
	int check = 123456789;
	vector<int> digits;
	int number = num;
	int temp = 0;
	while (number > 0){
		if (number % 10 == 0){
			break; 
		}
		digits.push_back(number % 10);
		number /= 10;
	}
	sort(digits.begin(), digits.end());
	for (int i = 0; i < digits.size(); i++){
		temp *= 10;
		temp += digits[i];
	}
	digits.clear();
	if (temp == check){
		return true;
	}
	else{
		return false;
	}
}

int Combine(int a, int b, int c){
	int temp_a = a, temp_b = b, temp_c = c;
	int number = 0;
	while (temp_a > 0){
		number *= 10;
		number += temp_a % 10;
		temp_a /= 10;
	}
	while (temp_b > 0){
		number *= 10;
		number += temp_b % 10;
		temp_b /= 10;
	}
	while (temp_c > 0){
		number *= 10;
		number += temp_c % 10;
		temp_c /= 10;
	}

	return number;
}