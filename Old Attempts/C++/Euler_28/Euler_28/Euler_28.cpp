// Euler_28.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <math.h>
using namespace std;

int _tmain(int argc, _TCHAR* argv[]){
	int corner = 1;
	int n = 2;
	int sum = 1;
	int number = 1002001;
	while(corner <= number){
		for (int i = 0; i < 4; i++){
			corner += n;
			sum += corner;
		}
		n += 2;
		if (corner == number){
			break;
		}
	}
	cout << sum << endl;
	system("pause");
	return 0;
}

