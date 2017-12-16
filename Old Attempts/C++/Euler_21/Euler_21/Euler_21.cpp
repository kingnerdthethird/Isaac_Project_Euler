// Euler_21.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

unsigned int DivisorSum(unsigned int num);
unsigned int CountNumbers(unsigned int low, unsigned int high);

int _tmain(int argc, _TCHAR* argv[]){
	cout << CountNumbers(1, 10000) << endl;
	system("pause");
	return 0;
}

unsigned int DivisorSum(unsigned int num){
	unsigned int sum = 0;
	for (unsigned int i = 1; i < num; i++){
		if (num % i == 0){
			sum += i;
		}
	}
	return sum;
}

unsigned int CountNumbers(unsigned int low, unsigned int high){
	unsigned int sum = 0, b;
	for (unsigned int a = low; a < high; a++){
		b = DivisorSum(a);
		if (b > a && DivisorSum(b) == a){
			sum += (a + b);
		}
	}
	return sum;
}