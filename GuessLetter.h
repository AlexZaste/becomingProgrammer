#include <iostream>
#include <string>
#include <algorithm>
#include <ctime>

using std::cout;
using std::cin;
using std::endl;
using std::string;

int main()
{
  string letters      = "abcdefghijklmnopqrstuvwxyz";
	string randomLetter = "";
	string guess = "";
	int length = 0;
	int x = 0;
	int randomNumber = 0;
  int tries = 0;


	//generate random letter
	srand(int(time(0)));
	randomNumber = rand() % 26;
	randomLetter = letters.substr(randomNumber, 1);

	//get the user's guess
	do
	{
    while(length =1)
    {
	cout << "Enter your guess: ";
	getline(cin, guess);

	//validate input
	length = guess.length();
	if (length != 1)
	{
		cout << "Your guess is not exactly one letter" << endl;
		return 0;
	}
    }
  

	transform(guess.begin(), guess.end(), guess.begin(), tolower);
	x = guess.compare(0, 1, randomLetter);

	if (x == 0)
	{
		cout << "You guessed the correct letter" << endl;
	}
	else if (x == -1)
	{
		cout << "WRONG! Try Again! You have " << endl;
	}
	else 
	{
		cout << "The correct letter comes before the letter" << endl;
	}
	}while (tries <= 20);
	return 0;
}