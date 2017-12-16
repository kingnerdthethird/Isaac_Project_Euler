// Euler_27.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <vector>
#include <math.h>
using namespace std;

bool IsPrime(int num);

int _tmain(int argc, _TCHAR* argv[]){
	// n^2 + an + b produces m primes
	// comination of (a,b) = m primes
	// b > m
	// when a is negative, we must have b > -(n^2 + an)
	// b > -(40^2 + 40a)
	//|a| < 1000 and |b| < 1000
	//|n| is modullus/absolute value of n
	//start with n = 0
	long long int a, b, c, t, n;
	long long int pol, max_a = 0, max_b = 0, max_c = 0, sum;
	a = -1000;
	while (a < 1001){
		b = 2;
		while (b < 1001){
			if (IsPrime(b) == 0){
				b++;
				continue;
			}

			t = -1600 - 40 * a;
			if (b < t || b < max_c){
				b++;
				continue;
			}

			c = 0, n = 0;
			pol = n*n + a * n + b;
			while (IsPrime(pol)){
				c++;
				n++;
				pol = n*n + a*n + b;
			}
			if (c > max_c){
				max_a = a, max_b = b, max_c = c;
			}
			b++;
		}
		a++;
	}
	sum = max_a * max_b;
	cout << max_a << " " << max_b << " " << sum << endl;
	system("pause");
	return 0;
}

bool IsPrime(int num){
	for (int i = 2; i < num; i++){
		if (num % i == 0){
			return false;
		}
	}
	return true;
}