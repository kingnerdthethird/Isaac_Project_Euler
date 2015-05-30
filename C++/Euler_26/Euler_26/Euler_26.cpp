// Euler_26.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <vector>
using namespace std;

int _tmain(int argc, _TCHAR* argv[]){
	int length = 0;

	for (int i = 1000; i > 1; i--){
		if (length >= i){
			break;
		}
		int value = 1;
		int position = 0;
		vector<int> remainders;
		remainders.clear();
		remainders.resize(i);
		while (remainders[value] == 0 && value != 0){
			remainders[value] = position;
			value *= 10;
			value %= i;
			position++;
		}

		if ((position + 1) - remainders[value] > length){
			length = (position + 1) - remainders[value];
		}
	}
	cout << length << endl;
	system("pause");
	return 0;
}

