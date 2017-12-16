// Euler_15.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

long long int box[21][21];

long long int FindPaths(int num);

int _tmain(int argc, _TCHAR* argv[]){
	cout << FindPaths(20) << endl;
	for (int i = 0; i < 20 + 1; i++){
		for (int j = 0; j < 20 + 1; j++){
			cout << box[i][j] << " ";
		}
		cout << endl;
	}
	system("pause");
	return 0;
}

long long int FindPaths(int num){
	for (int i = 0; i < num + 1; i++){
		for (int j = 0; j < i; j++){
			if (j == 0){
				box[i][j] = 1;
			}
			else{
				box[i][j] = box[i][j - 1] + box[i - 1][j];
			}
		}
		box[i][i] = box[i][i - 1] * 2;
	}
	return box[num][num];
}
