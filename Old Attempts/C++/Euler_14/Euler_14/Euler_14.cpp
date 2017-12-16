// Euler_14.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

int FindSequence(long long int start);

int _tmain(int argc, _TCHAR* argv[]){
	int sequence_length = 0;
	int temp_length = 0;
	int starting_point;

	for (int i = 1; i <= 1000000; i++){
		temp_length = FindSequence(i);
		if (temp_length > sequence_length){
			sequence_length = temp_length;
			starting_point = i;
			cout << "Current longest is: " << sequence_length << " Started with: " << i << endl;
		}
	}
	cout << "The longest sequence starts with: " << starting_point << endl;
	system("pause");
	return 0;
}

int FindSequence(long long int start){
	int length = 1;
	while (start > 1){
		if (start % 2 == 0){
			start /= 2;
			//cout << start << " ";
			length++;
		}

		else{
			start = (3 * start) + 1;
			//cout << start << " ";
			length++;
		}
	}
	//cout << endl;
	return length;
}