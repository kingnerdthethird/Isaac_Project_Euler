// Euler_34.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <vector>
using namespace std;

int Factorial(int num);
int AddDigits(int num);

int _tmain(int argc, _TCHAR* argv[]){
	long long int sum = 0;
	for (int i = 3; i <= 99999; i++){
		if (AddDigits(i) == i){
			sum += i;
		}
	}
	cout << sum << endl;
	system("pause");
	return 0;
}

int Factorial(int num){
	if (num == 0){
		return 1;
	}
	for (int i = (num - 1); i > 1; i--){
		num *= i;
	}
	return num;
}

int AddDigits(int num){
	int sum = 0;
	while (num > 0){
		sum += Factorial(num % 10);
		num /= 10;
	}
	return sum;
}