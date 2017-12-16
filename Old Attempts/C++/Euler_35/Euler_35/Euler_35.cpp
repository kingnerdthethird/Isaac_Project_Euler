// Euler_35.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <vector>
using namespace std;

bool IsPrime(int num);
int Rotate(int num);
int AmountDigits(int num);
vector<int> FindRotations(int num, vector<int> rotations);
bool PrimeRotations(int num);

int _tmain(int argc, _TCHAR* argv[]){
	int count = 0;
	for (int i = 2; i <= 1000000; i++){
		if (PrimeRotations(i)){
			count++;
			cout << i << " " << count << endl;
		}
	}
	cout << count << endl;
	system("pause");
	return 0;
}

bool IsPrime(int num){
	if (num % 2 == 0 && num != 2){
		return false;
	}
	else{
		for (int i = 2; i < num; i++){
			if (num % i == 0){
				return false;
			}
		}
	}
	return true;
}

int Rotate(int num){
	vector<int> digits;
	while (num > 0){
		digits.push_back(num % 10);
		num /= 10;
	}
	for (int i = 0; i < digits.size() - 1; i++){
		int temp = digits[i + 1];
		digits[i + 1] = digits[i];
		digits[i] = temp;
	}
	int number = 0;
	for (int i = digits.size() - 1; i >= 0; i--){
		number *= 10;
		number += digits[i];
	}
	return number;
}

int AmountDigits(int num){
	int count = 0;
	if (num == 0){
		count = 1;
	}
	while (num > 0){
		count++;
		num /= 10;
	}
	return count;
}

vector<int> FindRotations(int num, vector<int> rotations){
	rotations.push_back(num);
	if (AmountDigits(num) > 1){
		for (int i = 1; i < AmountDigits(num); i++){
			rotations.push_back(Rotate(rotations[i - 1]));
		}
	}
	return rotations;
}

bool PrimeRotations(int num){
	vector<int> rotations;
	rotations = FindRotations(num, rotations);
	for (int i = 0; i < rotations.size(); i++){
		if (!IsPrime(rotations[i])){
			return false;
		}
	}
	return true;
}