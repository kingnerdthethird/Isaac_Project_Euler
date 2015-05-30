// Euler_31.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

int _tmain(int argc, _TCHAR* argv[]){
	int goal = 200;
	int ways = 0;
	for (int a = goal; a >= 0; a -= 200){
		for (int b = a; b >= 0; b -= 100){
			for (int c = b; c >= 0; c -= 50){
				for (int d = c; d >= 0; d -= 20){
					for (int e = d; e >= 0; e -= 10){
						for (int f = e; f >= 0; f -= 5){
							for (int g = f; g >= 0; g -= 2){
								ways++;
							}
						}
					}
				}
			}
		}
	}
	cout << ways << endl;
	system("pause");
	return 0;
}

