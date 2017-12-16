// Euler_3.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream> 
using namespace std;

__int64 n = 600851475143; //number
//__int64 n = 13195;

void PrintFactors(__int64 num);

int _tmain(int argc, _TCHAR* argv[]){
	PrintFactors(n);
	system("pause");
	return 0;
}

void PrintFactors(__int64 num){
	int z = 2;

	while (z * z <= num){
		if (num % z == 0){
			cout << z << endl;
			num /= z;
		}
		
		else{
			z++;
		}
	}

	if (num > 1){
		cout << num << endl;
	}
}