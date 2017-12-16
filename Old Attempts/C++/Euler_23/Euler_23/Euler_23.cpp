// Euler_23.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <vector>
using namespace std;

vector <int> nums;
vector <int> sums;
bool IsAbundant(int num);
void FindAbundants();
void FindSums();
unsigned long long int FinalSum();

int _tmain(int argc, _TCHAR* argv[]){
	FindAbundants();
	FindSums();
	cout << FinalSum() << endl;
	system("pause");
	return 0;
}

bool IsAbundant(int num){
	unsigned int sum = 0;
	for (int i = 1; i < num; i++){
		if (num % i == 0){
			sum += i;
		}
	}
	
	return (sum > num);
}

void FindAbundants(){
	for (int i = 1; i < 28123; i++){
		if (IsAbundant(i)){
			nums.push_back(i);
		}
	}
}

void FindSums(){
	for (int i = 0; i < nums.size(); i++){
		for (int j = i; j < nums.size(); j++){
			if (nums[i] + nums[j] < 28123){
				sums.push_back(nums[i] + nums[j]);
			}
		}
	}
}

unsigned long long int FinalSum(){
	unsigned long long int sum = 0;
	bool check = true;
	for (unsigned long long int i = 0; i < 28123; i++){
		for (int j = 0; j < sums.size(); j++){
			if (i == sums[j]){
				check = false;
				break;
			}
		}
		if (check){
			sum += i;
		}
		check = true;
	}
	return sum;
}