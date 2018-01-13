#include "stdafx.h"
#include <iostream>
using namespace std;

int main(){
	__int64 number = 600851475143;
	int z = 2;

	while (z * z <= number) {
		if (number % z == 0) {
			number /= z;
		}
		else {
			z++;
		}
	}

	cout << number << endl;
	system("PAUSE");
    return 0;
}

