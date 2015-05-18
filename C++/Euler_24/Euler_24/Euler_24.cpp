// Euler_24.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <vector>
#include <sstream>
#include <string>
#include <algorithm>
using namespace std;

string numbers = "0123456789";
vector<string> permutations;

int _tmain(int argc, _TCHAR* argv[]){
	int count = 0;
	sort(numbers.begin(), numbers.end());
	do{
		permutations.push_back(numbers);
		count++;
	} while (next_permutation(numbers.begin(), numbers.end()) && count < 1000000);
	cout << permutations[999999] << endl;
	system("pause");
	return 0;
}