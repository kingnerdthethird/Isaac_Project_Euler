#include "stdafx.h"
#include <iostream>
using namespace std;

int main(){
	int f_1 = 1;
	int f_2 = 1;
	int f_3 = f_1 + f_2;
	int sum = 0;

	while (f_3 < 4000000) {
		if (f_3 % 2 == 0) {
			sum += f_3;
		}
		
		f_1 = f_2;
		f_2 = f_3;
		f_3 = f_1 + f_2;
	}

	cout << sum << endl;
	system("PAUSE");
    return 0;
}

