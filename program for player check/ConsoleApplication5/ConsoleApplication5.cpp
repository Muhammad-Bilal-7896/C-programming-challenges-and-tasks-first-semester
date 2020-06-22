// ConsoleApplication5.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
using namespace std;
int main()
{
	const int MIN_PLAYERS = 9;
	const int MAX_PLAYERS = 15;

	int players, team_players, num_teams, left_overs;

	cout << "how many players do you wish per team?";
	cin >> team_players;

	while (team_players < MIN_PLAYERS || team_players > MAX_PLAYERS)
	{
		cout << "You should have at least" << MIN_PLAYERS << "but no more than" << MAX_PLAYERS << "per team.\n";

		cout << "how many players do you wish per team? ";
		cin >> team_players;
	}

	cout << "how many players are available? ";
	cin >> players;

	while (players <= 0)
	{
		cout << "please enter 0 or greater: ";
		cin >> players;
	}

	num_teams = players / team_players;
	left_overs = players % team_players;

	cout << "there will be " << num_teams << " teams with " << left_overs << "players left over.\n";
	return 0;
}
