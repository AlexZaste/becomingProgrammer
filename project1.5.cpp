#include <iostream>
#include <cmath>
#include <cstdlib>
#include <string>
#include <ctime>
using namespace std;

// we need should create something that represents a character to which values can be stored which will decide what endings will display.
/*
Add Structs
Add Functions cin >> a;
        cout << a;
Add Arrays
Commit GitHub
Finish Story; with endings preferably before the finals week*/

void howtoplay(); // prints out instructions of how pick your turn
void Deadend();   // prints out the ending text
void logicCal(int logic[]);
int numberGame(int);

struct Experience{
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
    int miniGame; // for miniGame 1

      cout << "Welcome to Become a Programmer 2018!" << endl;
      cout << "**********************************************" << endl;

      // Checks if player old enough to play
      cout << "Must be 18+ to play this game " << endl;
      cout << "Please enter your age " << endl;
        cin >> age;
         if (age < 18){
         cout << "Sorry, you're not old enough to play!" << endl;
         return (0);
        };
         cout << "You're old enough to play!\n Enter 'Y' to continue\n" << endl;
        cin >> ans;
          if (ans == 'Y' || ans == 'y'){

        cout << "Now please enter the player's name" << endl;
        cin >> player;
        cout << "**********************************************" << endl;
        }
        else{
          cout << "Please follow the rules!\n Goodbye!" << endl;
          return (-1);
        };
        cout << "Hello " << player << "!\n" << endl;
        cout << "**********************************************\n";

    // ********************************************************//
    //                         START                           //
    // ********************************************************//

    cout << "This is the beginning of the game. In order to survive and thrive, you must make brave, appropriate decisions. Otherwise you'll end up in the slums and die!\n";
    cout << "Waiting for player's input:\nPress 'Y' to continue or ANY key to exit the game\n";
    cin >> ans;
    if (ans == 'Y' || ans == 'y'){
        cout << "**********************************************\n";
        howtoplay();
        cout << "but be aware that not all choices have happy endings and everything that seems easy may not be good\n";
        cout << "1.Become a programmer\n2.Work for wallmart\n3 Become a coal miner\n";
    }
    else {

      printf("Goodbye!\n");

      return (0);
    };
    cin >> a;
    cout << "**********************************************\n";
    if(a == 1){
        cout << "Nice you want to become a programmer!\n";
        cout << "Now that you have that decided on pick how you will obtain the skills\n\n";
        cout << "Pick a school please\n\n";
        cout << "1.Community College \n2.university\n3.Harvard Law\n\n\n"; // 1 dead end 2mini game 3 continue on to the next step
    }
    else{
        Deadend();
        return 0;

        } // we should make this a function so we don't need to keep typing it out.

    howtoplay();

    cin >> a;
    if (a == 1){
      cout << "Logic added! \n you are now smarter!\n" << "Current Logic " << logic[1] << endl;

        cout << "Nice! now pick your classes!\n";
        cout << "1. art classes\n2.math classes\n3.programming\n";
      }
      else if (a == 2){
        double gpa = Character.gpa + 2;// this is where the mini game function will go
        cout << "nice lets get some practice!\n";
        cout << gpa;
      }
      else{
        Deadend();
                return 0;
      };

    howtoplay();

    cin >> a;

      if (a == 1) {
        cout << "programming is a good choice! lets get some practice!"; // make a mini game here or instantly add a value
        numberGame(miniGame);

        cout << "\n\nCongratulations!\n" << endl;
      }
      else if (a == 2){
        cout << "Good choice! not exactly where you should be, but generally the same thing\n";
        cout << "Okay! lets pick a internship!\n";
        cout << "1.google\n2.megaupload\n3.meatypie.io\n";}
      else{
        Deadend();
                return 0;}
    howtoplay();
    cin >> a;

      if ( a==1 ){ // this part leads into graduation
        cout << "Google is a nice choice! Get ready for some hard work!\n";//points
        }
      else if(a == 2){
        cout << "meatypie.io is a cool choice, but not much growth will be obtained here\n\n";

      }
      else{
      Deadend();
                return 0;};
        cout << "It's time to graduate!\n\n";
        cout << "Press 1 to graduate\n\n\n\n";

      cin >> a;

      if ( a==1 ){
        cout <<  "congratulations!\n\n";
        cout << "Create a project you can be proud of now!\n\n";
        cout << "1.artificalSam 2.sooka 3.nothing\n\n";
      }
      else{
            Deadend();
      return 0;
      };
    howtoplay();
    cin >> a;

    if (a == 1){
        cout << "You create the first intelligent robot.\n\n";//value added <----
        cout << "1.get married 2.stay single 3.go sky diving\n\n";
    }
    else if( a== 2){
        cout << " You've created a very successful dating app! Not very fulfilling tho\n\n";
        cout << "1.get married 2.stay single 3.go sky diving\n\n";
    }

    else{
        Deadend();
                return 0;}
    howtoplay();
    cin >> a;
    if ( a== 1){
        cout << "Nice! families are good motivations, but will make things a little more complicated.";
    }
    else if(a == 2){
        cout <<"An honorable choice, but now you can really dig into your work\n\n";
    }

    else{
        Deadend();
                return 0;}
    howtoplay();//*****************************************************From this point on just have the if statement check different things in the structure*********************************************************************************************************************
    cin >> a;   //*****************************************************like if.gpa == 4.0 print out*********************************************************************************************************************
    if ( == ){//check .gpa I believe its called
        cout << "Thanks to your exceptional academics you were able to think of things like no one else\n resulting in you creating the first ever computer capable of copying human memory\n";
    }
    else{
       cout << "good game my friend\n\n";
    return 0;};
    if ( == ){// check .math I believe is what its called
        cout << "Thanks to your mastery of math you've gotten all of your calculations correct within your computer";
        cout << "you are old and dying, so you volunteer to the be the first human to have their mind transfered to your computer.";
    }

    else{
        cout << "your calculations were off so your computer didn't quite work."
        cout << "good game my friend";
    return 0;};
    cout << logic[1] << endl;

    if( == ){//check to see if the .char is here I believe we said it would be just the word google if it is ==
    cout << " The Transfer was a success Google made sure it worked! Thankfully you interned there!"
    cout << "You win 100% you are now imortal and will live FOREVER, well maybe not exactly live, but yeah you'll be around forever./n/n"
    cout << "********************************Fin*************************************************************************************************"
    }
    else{
        cout << "you should of did just a lil more with your life.\n\n";
        cout "Good game my friend\n\n";
        return 0;};
    }
  return 0;
}

// ************ FUNCTIONS *************

// Handles calculation for Logic, etc.
/*void logicCal(int logic[]){
  result = 0;
  logic [30];
  for (int x = 0; x < 30; logic++)
  {

  }
};*/

void Deadend(){ // used in 194,186,176,167,147,134,115,95
cout << "the world is a harsh place, and because of that you are now dead\n GAME OVER\n";
cout << "press any key to continue...\n";
};

void howtoplay() //
{
cout << "Please enter '1', '2', or '3' to make a decision on your career path\n";
};

int numberGame (int) { //used in 125
	srand(time(NULL)); // To not have the same numbers over and over again.

	while(true) { // Main loop.
		// Initialize and allocate.
		int number = rand() % 99 + 2; // System number is stored in here.
		int guess; // User guess is stored in here.
		int tries = 0; // Number of tries is stored here.
		char answer; // User answer to question is stored here.

		//cout << number << "\n"; // Was used for debug...

		while(true) { // Get user number loop.
			// Get number.
			cout << "Enter a number between 1 and 100 (" << 20 - tries << " tries left): ";
			cin >> guess;
			cin.ignore();

			// Check is tries are taken up.
			if(tries >= 20) {
				break;
			}

			// Check number.
			if(guess > number) {
				cout << "Too high! Try again.\n";
			} else if(guess < number) {
				cout << "Too low! Try again.\n";
			} else {
				break;
			}

			// If not number, increment tries.
			tries++;
		}

		// Check for tries.
		if(tries >= 20) {
			cout << "You ran out of tries!\n\n";
		} else {
			// Or, user won.
			cout<<"Congratulations!! " << endl;
			cout<<"You got the right number in " << tries << " tries!\n";
		}

		while(true) { // Loop to ask user is he/she would like to play again.
			// Get user response.
			cout << "Would you like to play again (Y/N)? ";
		  cin >> answer;
			cin.ignore();

			// Check if proper response.
			if(answer == 'n' || answer == 'N' || answer == 'y' || answer == 'Y') {
				break;
			} else {
				cout << "Please enter \'Y\' or \'N\'...\n";
			}
		}

		// Check user's input and run again or exit;
		if(answer == 'n' || answer == 'N') {
			cout << "Thank you for playing!";
      break;
		} else {
			cout << "\n\n\n";
		};
	}
}
