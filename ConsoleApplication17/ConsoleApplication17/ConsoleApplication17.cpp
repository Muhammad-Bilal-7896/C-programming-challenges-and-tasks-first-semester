// ConsoleApplication17.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>

#include <iostream>
using namespace std;

int main()
{
	int number_1, number_2, result, sum, count;
	char remarks;
	char y;
	char n;

	count = 2;

	cout << "enter first number here\n";

	cin >> number_1;

	cout << "enter second number here\n";

	cin >> number_2;

	cout << "your sum is = ";

	cin >> result;

	sum = number_1 + number_2;

	while (result != sum > count)
	{
		if (result == sum)
		{
			cout << "CONGRATULATIONS your answer is correct\n";
		}

		else if (result != sum)
		{
			cout << "do you want result enter y/n";

			cin >> remarks;

			switch (remarks)
			{
			case 'y':cout << "sum is equal to" << sum << "\n";
				break;
			case 'n':cout << "enter result again\n";
				cin >> result;
				break;
			default:cout << "enter valid number\n";
				cin >> result;
			}

		}

	}
	return 0;
}


// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
