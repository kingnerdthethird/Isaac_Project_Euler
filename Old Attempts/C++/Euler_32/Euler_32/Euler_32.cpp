// Euler_32.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <math.h>
#include <vector>
#include <algorithm>
using namespace std;

bool IsPandigital(long long int num);
long long int Combine(int a, int b, int c);

int _tmain(int argc, _TCHAR* argv[]){
	long int sum = 0;
	for (int i = 1000; i <= 9999; i++){
		for (int j = 1; j <= i; j++){
			if (i % j == 0){
				if (IsPandigital(Combine(i, j, i / j))){
					cout << i << " " << j << " " << i / j << endl;
					sum += i;
					break;
				}
			}
		}
	}
	cout << sum << endl;
	system("pause");
	return 0;
}

bool IsPandigital(long long int num){
	vector<int> number;
	while (num > 0){
		number.push_back(num % 10);
		num /= 10;
	}
	sort(number.begin(), number.end());
	if (number.size() != 9){
		return false;
	}
	for (int i = 0; i < 9; i++){
		if (number[i] != (i + 1)){
			return false;
		}
	}
	return true;
}

long long int Combine(int a, int b, int c){
	long long int number = 0;
	
	while (a > 0){
		number *= 10;
		number += (a % 10);
		a /= 10;
	}
	while (b > 0){
		number *= 10;
		number += (b % 10);
		b /= 10;
	}
	while (c > 0){
		number *= 10;
		number += (c % 10);
		c /= 10;
	}
	return number;
}