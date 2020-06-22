// ConsoleApplication14.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
using namespace std;
//Time Calculator   
//Write a program that asks the user to enter a number of seconds.    •   
//There are 60 seconds in a minute. 
//If the number of seconds entered by the user is greater than or equal to 60
//the program should display the number of minutes in that many seconds.    •   
//There are 3,600 seconds in an hour. 
//If the number of seconds entered by the user is greater than or equal to 3,600, 
//the program should display the number of hours in that many seconds.    •   
//There are 86,400 seconds in a day. 
//If the number of seconds entered by the user is greater than or equal to 86,400, 
//the program should display the number of days in that many seconds. 
/*int main()
{
	float no_of_seconds;
	float no_of_hours;
	float no_of_minutes;
	float no_of_days;

	cout << "enter number of seconds\n";
	cin >> no_of_seconds;

	no_of_minutes = no_of_seconds / 60;
	no_of_hours = no_of_seconds / 3600;
	no_of_days = no_of_seconds / 86400;

	if (no_of_seconds >= 60&&no_of_seconds<3600)
	{
		cout << "no of minutes = " << no_of_minutes << "   \n";
	}

	else if (no_of_seconds >= 3600&&no_of_seconds<86400)
	{
		cout << "no. of hours = " << no_of_hours << "       \n";
	}

	else if (no_of_seconds >= 86400)
	{
		cout << "no.of days = " << no_of_days << "         \n";
	}

	else
	{
	cout << "enter valid no. of seconds" << endl;
	cin >> no_of_seconds;
    }

	return 0;
}*/
/* Write a program that can be used as a math tutor for a young student. 
The program should display two random numbers to be added, such as     
247 
+129    
The program should then pause while the student works on the problem. 
When the student is ready to check the answer, 
he or she can press a key and the program will display the correct solution:     
247 129 376*/
int main()
{
	int number_1, number_2,result,sum;
	char remarks;
	char y;
	char n;


	cout << "enter first number here\n";

	cin >> number_1;

	cout << "enter second number here\n";

	cin >> number_2;

	cout << "your answer is = ";

	cin >> result;

	sum = number_1 + number_2;

		if (result == sum)
		{
			cout << "CONGRATULATIONS your answer is correct\n";
		}
		else if (result != sum)
		{
	
			cout << "do you want result enter y/n";

			cin >> remarks;

			switch(remarks)
			{
			case 'Y':cout<<"sum is equal to"<<sum<<"\n";
				break;
			case 'n':cout << "enter result again\n";
				cin >> result;


				while (result != sum) 
				{

					cout << "enter result again\n";
					cin >> result;
				}
				
					cout << "CONGRATULATIONS your answer is correct\n";
					break;

			default:cout << "enter valid number\n";
				cin >> result;				
			}


	    }

	return 0;
}

// 
/*int main()
{
	int x;
	int y;
	int z;
	cout << "enter\n";
	cin >> x;

	x < 0 ? y = 10 : z = 20;*/

	
	/*if (x < 0)
	
		y = 10;
	
	else
	
		z = 20;*/
	
	//return 0;
//}

/*
 24.     Word Game   
 Write a program that plays a word game with the user. 
 The program should ask the user to enter the following:    •   
 His or her name    •   
 His or her age    •   
 The name of a city    •   
 The name of a college    •   
 A profession    •   
 A type of animal    •   
 A pet’s name    
 After the user has entered these items, 
 the program should display the following story, 
 inserting the user’s input into the appropriate locations:
  (There once was a person named  NAME  who lived in  CITY . 
  At the age of  AGE ,  NAME  went to college at  COLLEGE .  NAME  
  graduated and went to work as a  PROFESSION . Then,  NAME  
  adopted a(n)  ANIMAL  named  PETNAME . They both lived happily ever after!)
*/

/*int main() 
{
	string name;
	string city;
	string college;
	string profession;
	string animal;
	string pet_name;

	cout<<"enter you"

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
