// ConsoleApplication28.cpp : This file contains the 'main' function. Program execution begins and ends there.

#include "pch.h"
/*#include <iostream>
using namespace std;
//2. Sales Prediction  
//The East Coast sales division of a company generates 58 percent of total sales.
//Based on that percentage, write a program that will predict how much the East Coast 
//division will generate if the company has $8.6 million in sales this year.
int Sales_prediction()
{
	float company_generation;
	float total_sales;
	total_sales = 8.6;
	company_generation = (58/100)*total_sales;
	cout << "East Coast division will generate the sales this year is:- " << company_generation <<"  million $";
	return 0;
}

int main()
{
	Sales_prediction();
	return 0;
}*/

// This program reads numbers from a file.     
/*#include <iostream>     
#include <fstream>     
using namespace std;         
int main()
{
	ifstream inFile;
	double value1, value2, value3, sum;
	// Open the file.     
	inFile.open("Bilal");
	// Read the three numbers from the file.      
	inFile >> value1;
	inFile >> value2;
	inFile >> value3;
	// Close the file.      
	inFile.close();
	// Calculate the sum of the numbers.        
	sum = value1 + value2 + value3;
	// Display the three numbers.        
	cout << "Here are the numbers:\n" << value1 << " " << value2 << " " << value3 << endl;
	// Display the sum of the numbers.       
	cout << "Their sum is: " << sum << endl;
	return 0;
}*/

// This program reads data from a file.
/*#include <iostream>   
#include <fstream>   
using namespace std;   
int main()
{
	ofstream outputFile;
	// File stream object         
	int numberOfDays;
	// Number of days of sales     
	double sales;
	// Sales amount for a day       
	// Get the number of days.    
	cout << "For how many days do you have sales? ";
	cin >> numberOfDays;
	// Open a file named Sales.txt.   
	outputFile.open("Sales.txt");
	// Get the sales for each day and write it        
	// to the file.        
	for (int count = 1; count <= numberOfDays; count++)
	{
		// Get the sales for a day.           
		cout << "Enter the sales for day " << count << ": ";
		cin >> sales;
		// Write the sales to the file.        
		outputFile << sales << endl;
	}
	// Close the file.        
	outputFile.close();
	cout << "Data written to Sales.txt\n";
	return 0;
}*/
// This program reads data from a file.   
/*#include <iostream>   
#include <fstream>   
#include <string>   
using namespace std;   
int main()
{
	ifstream inputFile;
	string name;
	inputFile.open("Friends.txt");
	cout << "Reading data from the file.\n";
	inputFile >> name;
	// Read name 1 from the file  
	cout << name << endl;
	// Display name 1     
	inputFile >> name;
	// Read name 2 from the file 
	cout << name << endl;
	// Display name 2  
	inputFile >> name;
	// Read name 3 from the file        
	cout << name << endl;
	// Display name 3       
	inputFile.close();
	// Close the file        
	return 0;
}*/

//This program reads data from a file.
/*#include <iostream>   
#include <fstream>   
#include <string>   
using namespace std;
int main()
{
	ifstream inputFile;
	string name;
	inputFile.open("Friends.txt");
	cout << "Reading data from the file.\n";
	inputFile >> name;
	// Read name 1 from the file  
	cout << name << endl;
	// Display name 1     
	inputFile >> name;
	// Read name 2 from the file 
	cout << name << endl;
	// Display name 2  
	inputFile >> name;
	// Read name 3 from the file        
	cout << name << endl;
	// Display name 3       
	inputFile.close();
	// Close the file        
	return 0;
}*/
This program reads data from a file.   
#include <iostream>   
#include <fstream>   
#include <string>   
using namespace std;   
int main()
{
	ifstream inputFile;
	string name;
	inputFile.open("Friends.txt");
	cout << "Reading data from the file.\n";
	inputFile >> name;
	// Read name 1 from the file  
	cout << name << endl;
	// Display name 1     
	inputFile >> name;
	// Read name 2 from the file 
	cout << name << endl;
	// Display name 2  
	inputFile >> name;
	// Read name 3 from the file        
	cout << name << endl;
	// Display name 3       
	inputFile.close();
	// Close the file        
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
This program reads data from a file.
#include <iostream>   
#include <fstream>   
#include <string>   
using namespace std;
int main()
{
	ifstream inputFile;
	string name;
	inputFile.open("Friends.txt");
	cout << "Reading data from the file.\n";
	inputFile >> name;
	// Read name 1 from the file  
	cout << name << endl;
	// Display name 1     
	inputFile >> name;
	// Read name 2 from the file 
	cout << name << endl;
	// Display name 2  
	inputFile >> name;
	// Read name 3 from the file        
	cout << name << endl;
	// Display name 3       
	inputFile.close();
	// Close the file        
	return 0;
}