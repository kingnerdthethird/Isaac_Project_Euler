// Euler_25.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <math.h>
using namespace std;

int _tmain(int argc, _TCHAR* argv[]){
	int n;
	n = ceil((1000 + log10(5) / 2 - 1) / log10(1.61803));
	cout << n << endl;
	system("pause");
	return 0;
}

