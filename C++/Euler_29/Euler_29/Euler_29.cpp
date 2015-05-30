// Euler_29.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <math.h>
#include <vector>
#include <algorithm>
using namespace std;

vector<double> terms;

int _tmain(int argc, _TCHAR* argv[]){
	double temp;
	bool contains = false;
	for (int a = 2; a <= 100; a++){
		for (int b = 2; b <= 100; b++){
			temp = pow(a, b);
			for (int i = 0; i < terms.size(); i++){
				if (terms[i] == temp){
					contains = true;
					break;
				}
				else{
					contains = false;
				}
			}
			if (!contains){
				terms.push_back(temp);
			}
		}
	}
	sort(terms.begin(), terms.end());
	for (int i = 0; i < terms.size(); i++){
		cout << terms[i] << endl;
	}
	cout << terms.size() << endl;
	system("pause");
	return 0;
}

