// PickTheNumber.cpp : Learning exercise for CPP Training.
// Author: Ben Bourland
// Date: March 28, 2018

#include <iostream>

using namespace std;

int main()
{
	int secretNumber = 2;
	int userGuess;
	int numberGuesses;
	int userQuit = 1;
	bool stillTrying = true;

	cout << "I have picked an integer between 0 and 10 - Can you guess it?" << endl;
	cout << "Your guess: ";
	cin >> userGuess;
	numberGuesses = 1;

	while (stillTrying)
	{
		if (userGuess == secretNumber)
		{
			cout << "Great job!  You got Secret number in " << numberGuesses << " guesses!!" << endl;
			stillTrying = false;
			cout << "Press any key+ENTER to quit:";
			cin >> userGuess;
		}			
		if (userGuess > secretNumber)
		{
			if (userGuess > 10)
			{
				cout << "Way too high, your guess needs to be between 0 and 10.  Try again!" << endl;
			}
			else
			{
				cout << "Ooops sorry, your guess is too high.  Try again!" << endl;
			}
			cout << "Your next guess: ";
			cin >> userGuess;
			numberGuesses++;
		}
		if (userGuess < secretNumber)
		{
			cout << "Ooops sorry, your guess is too low.  Try again!" << endl;
			cout << "Your next guess: ";
			cin >> userGuess;
			numberGuesses++;
		}
	}
	return 0;
}