// ConsoleApplication32.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
using namespace std;

/*int main()
{
	float sum=0;
	float num;
	do 
	{
		cout << "input numbers : ";
		cin >> num;
		if (num == -1)
		{
			continue;
		}
		sum = sum + num;
	} while (num != -1);
	cout << "sum of all numbers :" << sum;
	return 0;
}*/

/*int main()
{
	int num = 0;
	int num1[10] = { num };
	int sum;
	cin >> num;
	sum = num + num1;
	cout << "sum "<<sum<< endl;
	return 0;
		
}*/

/*#include <iostream>

using namespace std;

void main()
{
	int counter = 0;
	int number = 0;
	int largest = 0;

	cout << "Please enter up to 10 numbers and I will print the largest one on the screen.\n\n";

	while (counter <= 10)
	{
		cout << "Number: ";
		cin >> number;
		counter++;
		if (number > largest)
		{
			largest = number;
		}

		else if (counter == 10)
		{
			cout << "The largest number was: " << number;
			break;
		}
		
	}
	
}*/


/*void main()
{
	int n = 5;
	int i, j, k;

	for (i = 1; i < n; i++)
	{
		for (j = n - 1; j >= i; j--)
		{
			cout << " ";
		}
		for(k=1;k<=i)
	}
}*/




/*int main()
{
	for (int i = 3; i <= 1; i++)
	{
		for (int j = 3; j <= 4; j++)
		{
			cout << "*";
		}
	}
	return 0;
}*/
/*void main()
{
	for (int i =1 ; i <= 4; i++)
	{
		for (int j = 1; j <=4 ; j++)
		{
				cout << "  ";	
		}
		for (int k = 1; k <= 4; k++)
		{
			
				cout << "*";
			
		}
		cout << endl;
	}

}*/

void main()
{
	for (int i = 1; i <= 4;i++)
	{
		for (int j = 1; j <= 4; j++)
		{
			if ((i < 4 && i>1) && (j < 4 && j>1))
			{
				cout << "  ";
				continue;
			}
			cout << " *"<<endl;
		}
	}
}

/*void main()
{
	for(int i)
}*/

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
