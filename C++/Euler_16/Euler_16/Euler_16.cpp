// Euler_16.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>
#include <sstream>
#include <math.h>
using namespace std;

string number = "10715086071862673209484250490600018105614048117055336074437503883703510511249361224931983788156958581275946729175531468251871452856923140435984577574698574803934567774824230985421074605062371141877954182153046474983581941267398767559165543946077062914571196477686542167660429831652624386837205668069376";

int _tmain(int argc, _TCHAR* argv[]){
	long int sum = 0;
	int num;
	for (int i = 0; i < number.length(); i++){
		istringstream num_str(number.substr(i,1));
		num_str >> num;
		sum += num;
	}
	cout << sum << endl;
	system("pause");
	return 0;
}

