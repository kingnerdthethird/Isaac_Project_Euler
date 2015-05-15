// Euler_19.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

int months[12] = {
	31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31
};

void CountSundays();

int _tmain(int argc, _TCHAR* argv[]){
	CountSundays();
	system("pause");
	return 0;
}

void CountSundays(){
	int year = 1901;
	int month = 0;
	int day_month = 0;
	int day_week = 2;
	int count = 0; 

	while (year < 2001){
		if (year % 4 == 0){
			months[1] = 29;
		}
		else{
			months[1] = 28;
		}

		for (month = 0; month < 12; month++){
			for (day_month = 0; day_month < months[month]; day_month++){
				if (day_month == 0 && day_week == 0){
					count++;
				}
				//cout << "It is day " << day_month + 1 << " of month " << month + 1 << " of year " << year << " and it is day " << day_week << " of the week" << endl;
				day_week++;
				if (day_week == 7){
					day_week = 0;
				}
			}
		}
		year++;
	}

	cout << count << endl;
}