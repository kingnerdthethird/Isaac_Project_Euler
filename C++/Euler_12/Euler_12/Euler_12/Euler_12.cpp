// Euler_12.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <math.h>
using namespace std;

int FindFactors(int num);
int GenerateTriNumber(int num);

int _tmain(int argc, _TCHAR* argv[]){
	int i = 2;
	int num_factors = 0;
	int tri_number = 0;
	while ( num_factors < 250){
		num_factors = FindFactors(tri_number = GenerateTriNumber(i));

		if (num_factors >= 250){
			cout << tri_number << endl;
			system("pause");
		}
		else{
			i++;
		}
	}

	return 0;
}

int FindFactors(int num){
	int num_factors = 0;
	for (int i = 1; i <= sqrt(num); i++){
		if (num % i == 0){
			num_factors++;
		}
	}
	return num_factors;
}

int GenerateTriNumber(int num){
	int tri_num = 1;
	for (int i = 2; i <= num; i++){
		tri_num += i;
	}

	return tri_num;
}