// ConsoleApplication22.cpp : This file contains the 'main' function. Program execution begins and ends there.
//There once was a person named  NAME  who lived in  CITY . 
//At the age of  AGE ,  NAME  went to college at  COLLEGE .  
//NAME  graduated and went to work as a  PROFESSION . 
//Then,  NAME  adopted a(n)  ANIMAL  named  
//PETNAME . They both lived happily ever after!       

#include "pch.h"
#include <iostream>
#include <string>
using namespace std;

bool result()
{
	int i = 2;
	int n = 6;
	bool flag = 1;
	while (i < n)
	{
		if (n%i == 0)
		{
			flag = 0;
			break;
		}
		else
		{
			i++;
		}

	}
		return flag;

}
int main()
{
	cout << result();
	
	return 0;


}