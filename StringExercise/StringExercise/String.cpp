#include <iostream>
#include <string>

using namespace std;

int main()
{
	string firstWord;
	string secondWord;
	string message;

	cout << "Give me 2 words and I will tell you which one is longer." << endl;
	cout << "First word (no spaces):";
	cin >> firstWord;

	cout << endl;
	cout << "Second word (no spaces):";
	cin >> secondWord;

	if (firstWord.length() == secondWord.length())
	{
		message = "Cool!  Your words are exactly the same length! ";
		cout << message << firstWord.length() << " characters long!";
	}
	if (firstWord.length() > secondWord.length())
	{
		cout << "\"" << firstWord << "\"(" << firstWord.length() << ") is longer than ""\"" << secondWord
			<< "\"(" << secondWord.length() << ").";
	}
	if (firstWord.length() < secondWord.length())
	{
		cout << "\"" << secondWord << "\"(" << secondWord.length() << ") is longer than ""\"" << firstWord
			<< "\"(" << firstWord.length() << ").";
	}
	return 0;
}