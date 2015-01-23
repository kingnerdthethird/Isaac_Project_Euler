// Euler_12.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <math.h>

void FindFactorSum();

int _tmain(int argc, _TCHAR* argv[]){
	FindFactorSum();
	system("pause");
	return 0;
}

void FindFactorSum(){
	int triNumber = 1;
	int naturalNumber = 2;
	int amountOfFactors = 0;

	for (; amountOfFactors < 500; naturalNumber++){ //doesnt really work
		for (int i = 1; i <= triNumber; i++){
			if (triNumber % i == 0){
				amountOfFactors++;
				if (amountOfFactors == 250){
					std::cout << triNumber << " has 250 factors." << std::endl;
					system("pause");
				}
			}
		}
		//std::cout << "Triangle number: " << triNumber << std::endl;
		//std::cout << "Amount of factors: " << amountOfFactors << "\n" << std::endl;

		amountOfFactors = 0;
		triNumber += naturalNumber;
	}
}

