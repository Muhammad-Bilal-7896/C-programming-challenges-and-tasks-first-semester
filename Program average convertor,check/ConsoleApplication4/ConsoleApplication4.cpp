// ConsoleApplication4.cpp : This file contains the 'main' function. Program execution begins and ends there.
//this program converts gallons to cubic feets

#include "pch.h"
#include <iostream>
using namespace std;

void calculator()
{
	double gallon, cubic_feet;
	cout << "this program converts gallons to cubic feets"<<endl;
	cout << "enter the value of gallons" << endl;
	cin >> gallon;
	cubic_feet = gallon / 7.48;
	cout << "cubic feet is equal to" << cubic_feet << endl;
}

void average()
{
	int num1, num2, num3, num4, num5, sum, average;
	cout << "Enter the five variables";
	cin >> num1 >> num2 >> num3 >> num4 >> num5;
	sum = num1 + num2 + num3 + num4 + num5;
	cout << "sum is :" << sum << endl;
	average = sum / 5;
	cout << "average of numbers is equal to" << average << endl;
}


void bilal()
{
	int n;
	cout << "Enter a number";
	cin >> n;
	while (n <= 10)
	{
		n = n + 2;
		cout << n << endl;
	}
}
int main()
{
	calculator();
	average();
	bilal();
}
