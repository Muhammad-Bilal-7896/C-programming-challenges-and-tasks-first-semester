// ConsoleApplication34.cpp : This file contains the 'main' function. Program execution begins and ends there.

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
#include "pch.h"
#include <iostream>
using namespace std;
void minmax()
{
	int num1;
	int num2;
	cout << "enter a number\n";
	cin >> num1;
	cout << "enter another number\n";
	cin >> num2;
	
	(num1 > num2) ? (cout<<"num1is greater") : (cout<<"num2is greater");
	
}
//4.2
void rnc()
{
	int number;
	cout << "enter a number in the range of 1-10\n";
	cin >> number;
	while (number > 1 && number < 10)
	{
		cout << "enter a vallid number here\n";
		cin >> number;
	}
	switch (number)
	{
	case 1:cout << "I\n";
		break;
	case 2:cout << "II\n";
		break;
	case 3:cout << "III\n";
		break;
	case 4:cout << "IV\n";
		break;
	case 5:cout << "V\n";
		break;
	case 6:cout << "VI\n";
		break;
	case 7:cout << "VII\n";
		break;
	case 8:cout << "VIII\n";
		break;
	case 9:cout << "IX\n";
		break;
	default:cout << "You did not enter valid number" << endl;
	}
}

//Magic date
void magic()
{
	int magic_date;
	short int year;
	int month;
	int day;
	cout << "day\n";
	cin >> day;
	cout << "Enter a month\n";
	cin >> month;
	cout << "Enter a year two-digit\n";
	cin >> year;
		if ((day*month) == year)
	{
		cout<<"magic date\n";
	}
		else
		{
			cout << "the date is not magic\n";
		}
}

void area()
{
    float width_of_rectangle1;
	float length_of_rectangle1;
	float width_of_rectangle2;
	float length_of_rectangle2;
	float area_of_rectangle1;
	float area_of_rectangle2;

	cout << "Enter width of rectangle 1\n";
	cin >> width_of_rectangle1;
	cout << "Enter lenght of rectagle 1\n";
	cin >> length_of_rectangle1;
	cout << "Enter length of rectangle 2\n";
	cin >> length_of_rectangle2;
	cout << "Enter width of rectangle 2\n";
	cin >> width_of_rectangle2;
	area_of_rectangle1 = length_of_rectangle1 * width_of_rectangle1;
	area_of_rectangle2 = length_of_rectangle2 * width_of_rectangle2;
	(area_of_rectangle1 > area_of_rectangle2) ? (cout << "area of rectangle1 is greater\n") : (cout << "area of rectangle2 is greater\n");
}

//4.5
//Body mass index
void bmi()
{
	float weight_in_kilograms, height_in_inches, BMI;
	cout << "Enter weight in kilograms:\t";
	cin >> weight_in_kilograms;
	cout << "height_in_inches:\t";
	cin >> height_in_inches;
	BMI = (weight_in_kilograms*2.205) * (703 / (height_in_inches * height_in_inches));
	cout << "Body Mass Index is:\n" << BMI << endl;
	if (BMI > 18.5&&BMI < 25)
	{
		cout << "[Optimal Weight] you are\n";
	}
	else if (BMI < 18.5)
	{
		cout << "you are [Under Weight]\n";
	}
	else if (BMI > 25)
	{
		cout << "you are [Over Weight\n]";
	}
	
}
void diamond()
{
	int n, c, k, space = 1;
	cout << "Enter number of rows= ";
	cin >> n;
	space = n - 1;
	for (k = 1; k <= n; k++)
	{
		for (c = 1; c <= space; c++)
		{
			cout << " ";
		}
		space--;
		for (c = 1; c <= (2 * k - 1); c++)
		{
			cout << "*";
		}
		cout << "\n";
	}
	space = 1;
	for (k = 1; k <= n-1; k++)
	{
		for (c = 1; c <= space; c++)
		{
			cout << " ";
		}
		space++;
		for (c = 1; c <= (2 *(n- k) - 1); c++)
		{
			cout << "*";
		}
		cout << "\n";
	}
}
int main()
{
	//minmax();
	//rnc();
	//magic();
	//area();
	//bmi();
	diamond();
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
