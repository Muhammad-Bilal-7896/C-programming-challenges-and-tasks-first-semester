// ConsoleApplication6.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
using namespace std;

//Write an input validation loop that asks the user to enter a number in 
//the range of 10 through 25. 
//checkpoint 1
/*int main()
{
	int number;

	cout << "enter a number in the range of 10-25\n";
	cin >> number;
	while (number < 10 || number > 100)
	{
		cout << "error: please enter a value in range given  ";
		cin >> number;
	}

}*/
/*int main()
{
	//Write an input validation loop that asks the user to enter ‘Y’, ‘y’, ‘N’,
	//or ‘n’.
	char letter;
	cout << "enter Y for yes and N for no\n";
	cin >> letter;
	while (letter != 'Y' && letter != 'y' && letter != 'N' && letter != 'n')
	{
		cout << "enter valid char\n";
		cin >> letter;
	}
	cout << "now you typed corectly\n";
	return 0;
}*/



/*int main()
{
	int no_of_namaz;

	string namaz;


	cout << "do you offer prayers five times daily";
	cout << "result 'Y' is for praying regularly 'y' is for kabhi kabhi";
	cout << "and result 'N' is for never and 'n' is for very rare";
	cin >> no_of_namaz;
	while (no_of_namaz < 1 || no_of_namaz > 5)
	{
		cout << "N\n";
		while (no_of_namaz < 2 || no_of_namaz > 3)
		{
			cout << "n\n";
			while (no_of_namaz < 5 || no_of_namaz > 4)
			{
				cout << "y\n";
				while (no_of_namaz = 5)
				{
					cout << "Y" << endl;
				}
			}
		}
		if (no_of_namaz == 5)
		{
			cout << "Y\n";
		}
		else if (no_of_namaz < 1 || no_of_namaz > 5)
		{
			cout << "N\n\n";
		}
		else if (no_of_namaz < 2 || no_of_namaz > 3)
		{
			cout << "n\n";
		}
		else if (no_of_namaz < 5 || no_of_namaz > 4)
		{
			cout << "y\n";

		}


	}

	return 0;

}*/

/*int main()
{
	//Write an input validation loop that asks the user to enter ‘Y’, ‘y’, ‘N’,
	//or ‘n’.
	char letter;
	cout << "enter Y for yes and N for no\n";
	cin >> letter;
	while (letter != 'Y' && letter != 'y' && letter != 'N' && letter != 'n')
	{
		cout << "enter valid char\n";
		cin >> letter;
	}
	cout << "now you typed corectly\n";
	return 0;
}*/
//checkpoint3
//int main()
/*{
//Write an input validation loop that asks the user to enter ‘Y’, ‘y’, ‘N’,
//or ‘n’.
char letter;
cout << "enter Y for yes and N for no\n";
cin >> letter;
while (letter != 'Y' && letter != 'y' && letter != 'N' && letter != 'n')
{
	cout << "enter valid char\n";
	cin >> letter;
}
cout << "now you typed corectly\n";
return 0;
}*/

/*int main()
{
	//Write an input validation loop that asks the user to enter ‘Y’, ‘y’, ‘N’,
	//or ‘n’.
	char letter;
	cout << "enter Y for yes and N for no\n";
	cin >> letter;
	while (letter != 'Y' && letter != 'y' && letter != 'N' && letter != 'n')
	{
		cout << "enter valid char\n";
		cin >> letter;
	}
	cout << "now you typed corectly\n";
	return 0;
}*/
//Write an input validation loop that asks the user to enter “Yes” or “No”.
/*int main()
{
	string word;
	cout << "enter yes or no\n";
	cin >> word;
	while(word !="Yes" && word !="No")
	{
		cout << "enter correctly please\n";
		cin >> word;
	}
	cout << "now you typed correctlythank you";
	return 0;
}*/

//this program displays a list of numbers and
//their squares

/*int main()
{
	int max_number;

	int num; //counter

	cout << "enter maximum number" << endl;
		cin >> max_number;
		cout << "enter min to be displayed and squared number" << endl;
		cin >> num;
		cout << "number" << "\t\t" << "number squared\n" << endl;
	cout << "---------------------\n";
	while (num <= max_number)
	{
		cout << num <<"\t\t"<< (num*num) << endl;
		num++; //incrementing the counter
	}
	return 0;
}*/

/*int main()
{
	int num1;
	int num2;
	num1 = 10;
	num2 = 1;
	cout << "number     number squared" << endl;
	while (num2 <= num1)
	{
		cout << num2 << "\t\t" << (num2*num2) << endl;
		num2++;
	}
	return 0;
}*/
/*int main()
{
	int score1, score2, score3;
	double average;
	char again;
	do
	{
		cout << "enter three scores and i will average them" << endl;
		cin >> score1 >> score2 >> score3;

		average = (score1 + score2 + score3) / 3.0;
		cout << "average is =" << average;

		cout << "do you want to average again\n";
		cin >> again;
	}

	while (again == 'Y' || again == 'y');
		
	 

		return 0;
	

}*/
/*int main()
{
	int num1;
	int	num2;
	int	num3;
	float average;
	char repeat;

	do
	{
		cout << "enter three scores and i will average them\n";
		cin >> num1;
		cin >> num2; 
		cin >> num3;
		average = (num1+num2+num3)/3.0;
		cout << "the average is =" << average << endl;

		cout << "do you want average again\n";
		cin >> repeat;

	} 
	while(repeat=='R'||repeat=='r');

	return 0;
}*/

//this programm calculates the number  of soccer teams
//that a youths league may create from the number of
//available players.Input validation is demonstrated 
//with while loops.
/*
int main()*/
/*
{
	//this program
	const int adult_choice = 1,
		child_choice = 2,
		senior_choice = 3,
		quit_choice = 4;

	const double adult = 40.0,
		         child = 20.0,
		         senior = 30.0;

	int choice;
	int months;
	double charges;

	
	do
	{
		cout << "\n\t\t(Health club membership menu)\n\n";
		cout << "1. small child membership \n\n";
		cout << "2. Standard Adult membership\n";
		cout << "3. senior citizen membership\n";
		cout << "4. quit the program\n\n";
		cout << "enter your choice: ";

		cin >> choice;

		while (choice<adult_choice || choice>quit_choice)
		{
			cout << "please enter a valid menu choice: ";
			cin >> choice;
		}

		if (choice != quit_choice)
		{
			cout << "for how many months? ";
			cin >> months;

			switch (choice)
			{
			case adult_choice:
				charges = months * adult;
				break;
			case child_choice:
				charges = months * child;
				break;
			case senior_choice:
				charges = months * senior;
			}

			cout << "the total charges are $" << charges << endl;
		}
	} while (choice != quit_choice);

	return 0;
}*/
     
/*int main()
{
	int v = 10;
	do
	{
		cout << v << endl;

	} 
	while (v < 5);
	return 0;
}*/

/*int main()
{
	int count = 0, number = 0, limit = 4;
	do
	{
		number += 2;
		count++;
	} while (count < limit);
	cout << number << "        \n" << count << endl;
	return 0;
}*/

/*int main()
{
	int count;
	for (count = 6; count < 5; count++)
		cout << "hello world" << endl;
	return 0;
}*/

/*int main()
{
	int number;
	for (number = 0; number <= 10; number++)
		cout << number << " " << endl;
	return 0;
}*/

/*int main()
{
	int minnum;
	int maxnum;
	int num;

	cout << "enter min number :\t";
	cin >> minnum;
	cout << "\n\n";
	cout << "enter max number :\t";
	cin >> maxnum;

	cout << "number   |    number squared\n";

	for (num = minnum; num <= maxnum; num++)
		cout << num << "\t\t" << (num*num) << endl;
		
		return 0;
}*/
/*int main()
{
	int x;
	for (x = 1; x <= 10; x++)
	
		cout << x << endl;
	
	return 0;
}*/

/*int main()
{

	int namaz_no;
	cout << "enter the number of prayers you offer daily\n";
	cin >> namaz_no;
	cout << "\n";

	while (namaz_no < 0 || namaz_no>5)
	{
		cout << "please enter valid no. of namaz you read not greater than five only farz namaz\n";
		cin >> namaz_no;

	}

	if (namaz_no == 5)
	{
		cout << "you are offering prayers regularly\n";
	}

	else if (namaz_no < 5 && namaz_no>3)
	{

		cout << "you are not offering prayers regularly\n";
	}

	else if (namaz_no < 4 && namaz_no>2)
	{
		cout << "you are getting careless about namaz\n";
	}

	else if (namaz_no < 3 && namaz_no>1)
	{
		cout << "you are very much careless about namaz\n";
	}

	else if (namaz_no < 2 && namaz_no>0)
	{
		cout << "you should offer namaz very alarming condition is there\n";
	}

	else if (namaz_no < 1 && namaz_no>-1)
	{
		cout << "you are be namazi\n";


	}
	return 0;
}*/

/*int main()
{
	int no_of_namaz;

	cout << "enter the number of namaz you read daily: \t";
	cin >> no_of_namaz;

	cout << "\n\n";

	while (no_of_namaz < 0 || no_of_namaz>5)
	{
		cout << "please enter valid no. of namaz you read not greater than five only farz namaz\n";
		cin >> no_of_namaz;

	}

	switch (no_of_namaz)
	{
	case 0: cout << "you are benamazi \n";
		break;
	case 1: cout << "you are ver much careless about namaz \n";
		break;
	case 2: cout << "you are careless about your namaz \n";
		break;
	case 3: cout << "you are looking careless about namaz \n";
		break;
	case 4: cout << "you are a bit careless about namaz \n";
		break;
	case 5: cout << "you are regularly offering prayers \n";
		break;
	default: cout << "enter a valid no. of namaz only farz namaz not greater than five \t";
	}

	return 0;
}*/

/*int main()
{
	float number;
	float value;

	cout << "enter number\n";
	cin >> number;
	value = static_cast<float>(number/5);

	cout <<"value =" <<value;
	return 0;
}*/












