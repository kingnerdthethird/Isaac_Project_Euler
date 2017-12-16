// Euler_30.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <math.h>
#include <algorithm>
using namespace std;

int _tmain(int argc, _TCHAR* argv[]){
	long long int sum = 0;
	long int temp = 0;
	int number = 2;

	for (int i = 2; i <= 354294; i++){
		number = i;
		while (number > 0){
			temp += pow((number % 10), 5);
			number /= 10;
		}
		if (temp == i){
			sum += temp;
		}
		temp = 0;
	}
	cout << sum << endl;
	system("pause");
	return 0;
}

