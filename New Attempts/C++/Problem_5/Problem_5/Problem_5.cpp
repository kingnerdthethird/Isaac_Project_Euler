#include "stdafx.h"
#include <iostream>
using namespace std;

int main(){
	const int numbers[] = { 20, 19, 18, 17, 16, 15, 14, 13, 12, 11 };
	int number = 20;
	bool found = true;
	for (int i = 0; i < 10; i++) {
		if (number % numbers[i] != 0) {
			found == false;
		}
	}
    return 0;
}

