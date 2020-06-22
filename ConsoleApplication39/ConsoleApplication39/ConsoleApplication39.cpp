// ConsoleApplication39.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
using namespace std;
void prime()
{
	int number;
	cout << "enter number";
	cin >> number;
	for(int i=2;i>0;++i)
	{
		if (number%i==0)
		{
			cout << "not prime";
			break;
		}
		else
		{
			cout << "prime";
			break;
		}
	}
		
}

void Prime()
{
	int number,num=1;
	cout << "enter number";
	cin >> number;
	while (num > 0)
	{
		num++;
		if (number%num == 0)
		{
			cout << "not prime";
			break;
		}
		else
		{
			cout << "prime";
			break;
		}
	}
}

void check()
{
	int number;
	cout << "enter number";
	cin >> number;
	while (number <= 0)
	{
		cout << "enter correct number to jan choraing";
		cin >> number;
		while (number > 0)
		{
			cout << "you entered correct";
			break;
		}
	}
}

void negative()
{
	int number,neg_number;
	cout << "enter a number";
	cin >> number;
	neg_number = -(number);
	cout << "negative number" << neg_number;
}

void checking()
{
	int num1;
	int num2;
	int num3;
	cout << "enter first number";
	cin >> num1;
	cout << "enter second number";
	cin >> num2;
	if ((num1 % 2) == 0 && (num2 % 2) == 0)
	{
		cout << "both are even";
	}
	else if ((num1 % 2) != 0 && (num2 % 2) != 0)
	{
		cout << "both are odd";
	}
	else if (((num1 % 2) == 0 && (num2 % 2) != 0) || ((num1 % 2) != 0 && (num2 % 2) == 0))
	{
		cout << "one even and one odd";
	}
}

void numbers()
{
	int num,sum=0,num_odd;
	for (int i = 1; i <= 3; i++)
	{
		cout << "enter number";
		cin >> num;
		if (num % 2 != 0)
		{
			num_odd = num;
			num_odd++;
		}

	}
	cout << "odd numbers are" << num_odd;
}
 
void largest()
{
	int num, large = 0,largest=0;
	for (int i = 0; i < 3; i++)
	{
		cout << "enter number";
		cin >> num;
		if (num > largest)
		{
			largest=num;
		}
		else if (large < largest)
		{
			large = num;
		}
	}
	cout << "largest number is" << largest << endl;
	cout << "large number is" << large << endl;
}
void Caal()
{
	int num1;
	int num2;
	int num3;
	cout << "enter first number";
	cin >> num1;
	cout << "enter second number";
	cin >> num2;
	cout << "enter third number";
	cin >> num3;
	if ((num1 > num2) && (num2 > num3))
	{
		cout << "largest is =" << num1;
	}
	else if ((num1 > num2) && (num2 < num3))
	{
		cout << "large is" << num2;
	}
	else if ((num1 < num2) && (num2 < num3))
	{
		cout << "large is" << num3;
	}
}

void check_again()
{
	int number;
	cout << "enter numeber here";
	cin >> number;
	if (number > 0)
	{
		cout << "positive integer";
	}
	else
	{
		cout << "negative integer";
	}
}

void absolute()
{
	int a;
	int b;
	int absolute_difference;
	cout << "enter number\n";
	cin >> a >> b;
	cout << "Number =" << a<<b;
	absolute_difference = a - b;
	cout << "absolute difference" << absolute_difference;
}

void store()
{
	int a, b, c, d,e=0;
	cout << "enter number";
	cin >> a >> b >> c >> d;
	cout << "number is\t" << a << b << c << d;
	cout << "k" << d << c << b << a;
}

void Pattern_one()
{
	for (int i = 1; i <=5; i++)
	{
		for (int k = 1; k <= 5 - i; k++)
		{
			cout << " ";
		}
		for (int j = 1; j < i; j++)
		{
			cout << "*";
		}
		cout << endl;
		
	}
}

void pattern_two()
{
	for (int i = 0; i <= 4; i++)
	{
		for (int j = 0; j <= 4-i; j++)
		{
			cout << "*";
		}
		cout << endl;
	}
}

void pattern_three()
{
	for (int i = 4; i >= 0; i--)
	{
		for (int j = 4; j >=4-i; j--)
		{
			cout << " ";
			
		}
		for (int k = 4; k >= 0; k--)
		{
			cout << "*";
		}
		cout << endl;
	}
}

int main()
{
	prime();
    Prime();
	check();
	negative();
	checking();
	numbers();
	largest();
	Caal();
	check_again();
	absolute();
	store();
	Pattern_one();
	pattern_three();
	return 0;
}
