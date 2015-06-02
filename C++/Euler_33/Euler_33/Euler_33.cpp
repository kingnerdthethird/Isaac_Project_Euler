// Euler_33.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <sstream>
using namespace std;

int _tmain(int argc, _TCHAR* argv[]){
	//ab/bc == a/c
	//a != b
	//b != 0
	//a, b, c are one digits long
	//1 <= a, b, c <= 9
	double ab, bc;
	double prod_num = 1, prod_den = 1;
	for (double a = 1; a <= 9; a++){
		for (double b = 1; b <= 9; b++){
			for (double c = 1; c <= 9; c++){
				ab = a;
				ab *= 10;
				ab += b;
				bc = b;
				bc *= 10;
				bc += c;

				if (ab / bc == a / c && a != b){
					prod_num *= ab;
					prod_den *= bc;
				}
			}
		}
	}
	int temp_num = prod_num;
	int temp_den = prod_den;
	for (int i = 1; i <= temp_num; i++){
		if (temp_num % i == 0 && temp_den % i == 0){
			temp_num /= i;
			temp_den /= i;
			i = 1;
		}
	}
	cout.precision(10);
	cout << temp_num << " / " << temp_den << endl;
	system("pause");
	return 0;
}