// ConsoleApplication4.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"


/*@@ - 1, 7 + 1, 22 @@*/
#include <iostream>
#include <cmath>
#include <cstdlib>
using namespace std;
// we need should create something that represents a character to which values can be stored which will decide what endings will display.
/* Add Structs
Add Functions
Add Arrays
Commit GitHub
Finish Story; with endings preferably before the finals week*/

/*void logicCal();*/
struct CharacterCreation 
{  	short id;     
	int age; 
    double wage; 
};

int a;

int main() {
	
	Employee joe = { 1, 32, 60000.0 }; 
	// joe.id = 1, joe.age = 32, joe.wage = 60000.0 Employee frank = { 2, 28 }; 
	// frank.id = 2, frank.age = 28, frank.wage = 0.0 (default initialization)
	/*else{
	cout << "the world is a harsh place, and because of that you are now dead\n GAME OVER!\n";
	*/
	cout << "Where do you plan to go?" << endl <<
		"1: Google?" << endl <<
		"2: meatypie.io?" << endl <<
		"3: NoWHERE?" << endl;
	
		cin >> a;
	if (a == 1) {
		cout << "Google is a nice choice! Get ready for some hard work!" << /*points*/ endl;
	}
	else if (a == 2) {
		cout << "meatypie.io is a cool choice, but not much growth will be obtained here" << endl;
	}
	else {
		cout << "the world is a harsh place, and because of that you are now dead\n GAME OVER";
	}
	cin >> a;
	if (a == 1) {
		cout << "Time to graduate!\n";
	}
	else if (a == 2) {}
	else {
		cout << "the world is a harsh place, and because of that you are now dead\n GAME OVER";
	}
	cin >> a;
	if (a == 1) {
		cout << "next project";
	}
	else if (a == 2) {}
	else {
		cout << "the world is a harsh place, and because of that you are now dead\n GAME OVER";
	}
	cin >> a;
	if (a == 1) {
		cout << "personal life\n";
	}
	else if (a == 2) {}
	else {
		cout << "the world is a harsh place, and because of that you are now dead\n GAME OVER";
	}
	cin >> a;
	if (a == 1) {
		cout << "your getting old\n";
	}
	else if (a == 2) {}
	else {
		cout << "the world is a harsh place, and because of that you are now dead\n GAME OVER";
	}
	cin >> a;
	if (a == 1) {
		cout << "you die\n";
	}
	else if (a == 2) {}
	else {
		cout << "the world is a harsh place, and because of that you are now dead\n GAME OVER";
	}
	return 0;
}

// Handles calculation for LOgic, etc.
/*int logicCal(int) {
};*/