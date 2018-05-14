// Final Proj.cpp : Defines the entry point for the console application.
//
#include "stdafx.h"
#include <iostream>
#include <cmath>
#include <cstdlib>
#include <string>
#include "windows.h"

using namespace std;


// we need should create something that represents a character to which values can be stored which will decide what endings will display.
/*
Add Structs
Add Functions cin >> a;
cout << a;
Add Arrays
Commit GitHub
Finish Story; with endings preferably before the finals week*/

int logicCal(int logic[1]);
string howtoplay(string message);// prints out instructions of how pick your turn
string Deadend(string dead);// prints out the ending text


struct Experience {
	int another; // Please define this?
	double gpa; // 4.0
	float math; // learn pie
	char GoogleExperience[10]; // add google to resume
};

int a;

// Main function
int main()
{
	Experience Character;
	string player;
	int age;
	char ans;
	int logic[1];
	string message = "Please enter '1', '2', or '3' to make a decision on your career path\n";
	
	

		cout << "Welcome to Become a Programmer 2018!" << endl;
		cout << "**********************************************" << endl;

			// Checks if player old enough to play
			cout << "Must be 18+ to play this game " << endl;
			cout << "Please enter your age " << endl;
				cin >> age;
					if (age < 18) {
						cout << "Sorry, you're not old enough to play!" << endl;
						return (0);
					};
						cout << "You're old enough to play!\n Enter 'Y' to continue\n" << endl;
						cin >> ans;
	if (ans == 'Y' || ans == 'y') {

		cout << "Now please enter the player's name" << endl;
		cin >> player;
		cout << "**********************************************" << endl;
	}
	else {
		cout << "Please follow the rules!\n Goodbye!" << endl;
		return (-1);
	};


	cout << "Hello " << player << "!\n" << endl;
	cout << "**********************************************\n";

	// ********************************************************
	//                         START 
	// ********************************************************

	cout << "This is the beginning of the game. In order to survive and thrive, you must make brave, appropriate decisions. Otherwise you'll end up in the slums and die!\n";
	cout << "Waiting for player's input: Press 'Y' to continue\n or any key to exit the game\n";
	cin >> ans;
	if (ans == 'Y' || ans == 'y') {
		cout << "**********************************************\n";
		cout << "Please enter '1', '2', or '3' to make a decision on your career path" << endl; // should just make this cout a function so we dont need to keep typing it out
		cout << "but be aware that not all choices\n have happy endings and everything that seems easy is good not\n";
		cout << "1.Become a programmer\n 2. work for wallmart\n 3 become a coal miner\n";
		cin >> a;

	}
	else {

		printf("goodbye!\n");

		return (0);
	};
	cout << "**********************************************\n";
	if (a == 1, logic[1] = { 2 }) {
		cout << "Nice you want to become a programmer!\n";
		cout << "Now that you have that decided on pick how you will obtain the skills\n\n";
		cout << "Pick a school please\n\n";
		cout << "1.four year college\n2.community college\n3.Harvard Law\n\n\n"; // 1 dead end 2mini game 3 continue on to the next step
	}
	else {
		Deadend();
		return 0;

	} // we should make this a function so we don't need to keep typing it out.

	howtoplay(message);

	cin >> a;
	if (a == 1) {
		cout << "Logic added! \n you are now smarter!\n" << "Current Logic " << logic[1] << endl;
	};

	if (a == 1) {
		cout << "Nice! now pick your classes!\n";
		cout << "1. art classes\n2.math classes\n3.programming\n";
	}
	else if (a == 2) {
		Character.gpa + 2;// this is where the mini game function will go
		cout << "nice lets get some practice!\n";
		cout << Character.gpa;
	}
	else {
		Deadend();
		return 0;
	};

	howtoplay(message);
	cin >> a;

	if (a == 2) {
		cout << "programming is a good choice! lets get some practice!"; // make a mini game here or instantly add a value
	}
	else if (a == 1) {
		cout << "Good choice! not exactly where you should be, but generally the same thing\n";
		cout << "Okay! lets pick a internship!\n";
		cout << "1.google\n2.megaupload\n3.meatypie.io\n";
	}
	else {
		Deadend();
		return 0;
	}
	howtoplay(message);
	cin >> a;

	if (a == 1) {
		cout << "Google is a nice choice! Get ready for some hard work!";//points
	}
	else if (a == 2) {
		cout << "meatypie.io is a cool choice, but not much growth will be obtained here";

	}
	else {
		Deadend();
		return 0;
	};

	cin >> a;

	if (a == 1) {
		cout << "Time to graduate!\n";
	}
	else if (a == 2) {}
	else {
		cout << "the world is a harsh place, and because of that you are now dead\n GAME OVER";
	}
	howtoplay(message);
	cin >> a;

	if (a == 1) {
		cout << "next project";
	}
	else if (a == 2) {}
	else {
		Deadend();
		return 0;
	}
	howtoplay(message);
	cin >> a;
	if (a == 1) {
		cout << "personal life\n";
	}
	else if (a == 2) {}
	else {
		Deadend();
		howtoplay(message);
		return 0;
	}
	howtoplay(message);
	cin >> a;
	if (a == 1) {
		cout << "your getting old\n";
	}
	else if (a == 2) {}
	else {
		Deadend();
		return 0;
	}
	cin >> a;
	if (a == 1) {
		cout << "you die\n";
	}
	else if (a == 2) {}
	else {
		Deadend();
	}
	cout << logic[1] << endl;
	return 0;
}
// Handles calculation for Logic, etc.
int logicCal(int logic[1]) {
	Experience Character;
	logic[1] = { 30 };
	double sum = Character[1].gpa + logic[1];

	return (sum);
};

string Deadend(string dead) {
	cout << "the world is a harsh place, and because of that you are now dead\n GAME OVER\n";
	cout << "press any key to continue...\n";
};

string howtoplay(string message)
{
	message = "Please enter '1', '2', or '3' to make a decision on your career path\n";
	return (message);
};

	/*
	string hello = "Hello Bob. Let's get\nprogramming in C++\n kill me please before I kill someone\n";
	int x = 0;
	while (hello[x] != '\0')
	{
		cout << hello[x];
		if (hello[x] != ' ' && hello[x] != '\n')
			Beep(400, 50);
		Sleep(100);
		x++;
	};
	cout << "\n\nEnd of message.." << endl << endl;
	return 0;
	*/