// PickANumber.cpp : Learning exercise for CPP Training.
// Author: Ben Bourland
// Date: March 28, 2018

#include <iostream>

using namespace std;

int main()
{
	int secretNumber = 2;
	int userGuess;
	int numberGuesses;
	bool stillTrying;
	int keepPlaying = 1;

	while (keepPlaying)
	{
		cout << "I have picked an integer between 0 and 10 - Can you guess it?" << endl;
		cout << "Your guess: ";
		cin >> userGuess;
		numberGuesses = 1;
		stillTrying = true;

		while (stillTrying)
		{
			if (userGuess == secretNumber)
			{
				cout << "Great job!  You got it in " << numberGuesses << " guesses!! The number was " << secretNumber << "." << endl;
				stillTrying = false;
			}			
			if (userGuess > secretNumber)
			{
				cout << "Ooops sorry, your guess is too high.  Try again!" << endl;
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
		cout << "Do you want to keep playing? (Press 0 to Quit):" << endl;
		cin >> keepPlaying;
		if (keepPlaying == 0)
		{
			keepPlaying = false;
		}
		if (keepPlaying != 0)
		{
			keepPlaying = true;
		}
	}
	return 0;
}