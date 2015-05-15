// Euler_20.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <sstream>
using namespace std;

int factorial[] = { 9, 3, 3, 2, 6, 2, 1, 5, 4, 4, 3, 9, 4, 4, 1, 5, 2, 6, 8, 1, 6, 9, 9, 2, 3, 8, 8, 5, 6, 2, 6, 6, 7, 4, 9, 7, 1, 5, 9, 6, 8, 2, 6, 4, 3, 8, 1, 6, 2, 1, 4, 6, 8, 5, 9, 2, 9, 6, 3, 8, 9, 5, 2, 1, 7, 5, 9, 9, 9, 9, 3, 2, 2, 9, 9, 1, 5, 6, 8, 9, 4, 1, 4, 6, 3, 9, 7, 6, 1, 5, 6, 5, 1, 8, 2, 8, 6, 2, 5, 3, 6, 9, 7, 9, 2, 8, 2, 7, 2, 2, 3, 7, 5, 8, 2, 5, 1, 1, 8, 5, 2, 1, 9, 1, 6, 8, 6, 4 };
//int factorial[] = { 1, 2, 3, 0, 4, 5 };
void FindTotal();
int _tmain(int argc, _TCHAR* argv[]){
	FindTotal();
	system("pause");
	return 0;
}

void FindTotal(){
	long long int sum = 0;
	int digit;
	for (int i = 0; i < 127; i++){
		//if (factorial[i] < 10 && factorial[i] > 0){
			cout << sum << " + " << factorial[i] << " = " << sum + factorial[i] << " at " << i + 1 << endl;
			sum += factorial[i];
		//}
	}
	cout << sum << endl;
}