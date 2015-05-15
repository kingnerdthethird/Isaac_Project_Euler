// Euler_18.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

int nums_array[15][15] = {
	{ 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 75 },
	{ 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 95, 64 },
	{ 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 17, 47, 82 },
	{ 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 18, 35, 87, 10 },
	{ 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 20, 4, 82, 47, 65 },
	{ 0, 0, 0, 0, 0, 0, 0, 0, 0, 19, 1, 23, 75, 3, 34 },
	{ 0, 0, 0, 0, 0, 0, 0, 0, 88, 2, 77, 73, 7, 63, 67 },
	{ 0, 0, 0, 0, 0, 0, 0, 99, 65, 4, 28, 6, 16, 70, 92 },
	{ 0, 0, 0, 0, 0, 0, 41, 41, 26, 56, 83, 40, 80, 70, 33 },
	{ 0, 0, 0, 0, 0, 41, 48, 72, 33, 47, 32, 37, 16, 94, 29 },
	{ 0, 0, 0, 0, 53, 71, 44, 65, 25, 43, 91, 52, 97, 51, 14 },
	{ 0, 0, 0, 70, 11, 33, 28, 77, 73, 17, 78, 39, 68, 17, 57 },
	{ 0, 0, 91, 71, 52, 38, 17, 14, 91, 43, 58, 50, 27, 29, 48 },
	{ 0, 63, 66, 4, 68, 89, 53, 67, 30, 73, 16, 69, 87, 40, 31 },
	{ 4, 62, 98, 27, 23, 9, 70, 98, 73, 93, 38, 53, 60, 4, 23 }
};

int FindLargestSum();
void PrintArray();

int _tmain(int argc, _TCHAR* argv[]){
	cout << FindLargestSum() << endl;
	PrintArray();
	system("pause");
	return 0;
}

int FindLargestSum(){
	for (int i = 13; i >= 0; i--){
		for (int j = 0; j < 15; j++){
			if (nums_array[i + 1][j + 1] > nums_array[i + 1][j - 1]){
				nums_array[i][j] = nums_array[i][j] + nums_array[i + 1][j + 1];
			}
			else{
				nums_array[i][j] = nums_array[i][j] + nums_array[i + 1][j - 1];
			}
		}
	}
	return nums_array[0][14] - 1;
}

void PrintArray(){
	for (int i = 0; i < 15; i++){
		for (int j = 0; j < 15; j++){
			if (nums_array[i][j] == 0){
				cout << "  ";
			}
			else{
				cout << nums_array[i][j] << " ";
			}
		}
		cout << endl;
	}
}