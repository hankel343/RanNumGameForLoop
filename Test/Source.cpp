/***************************************************************************************************************************************************
* This program is an implementation of a number guessing game that uses a for loop with nested if statments to prove the user feed back on their guess.*
****************************************************************************************************************************************************/

#include <iostream>
#include <string>
#include <stdlib.h> //initialize seed for random number
#include <time.h>

using namespace std;

int Success_Message(int ranNum);

int main()
{
	int ranNum;
	int guess;
	srand(time(NULL)); //initialize random seed
	ranNum = rand() % 10 + 1; //range 1 to 10

	cout << "The computer was generated a random number between 1 and 10.\n";
	cout << "You have three chances to guess the random number.\n";

	for (int i = 0; i < 3;)
	{
		cout << "Enter your guess: ";
		cin >> guess;

		if (guess == ranNum)
		{
			Success_Message(ranNum);
			break;
		}
		else if (guess < ranNum)
		{
			cout << "Your guess was too low.\n";
			i++;
		}
		else if (guess > ranNum)
		{
			cout << "Your guess was too high.\n";
			i++;
		}
		if (i == 3)
		{
			cout << "You ran out of guesses.\n";
			cout << "The random number was: " << ranNum << "." << endl;
		}
	}

	


	return 0;
}

int Success_Message(int ranNum)
{
	cout << "You win!\n";
	cout << "The random number was " << ranNum << endl;
	return 1;
}