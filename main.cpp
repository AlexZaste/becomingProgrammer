#include <iostream>
#include <cmath>
#include <cstdlib>
#include <string>
using namespace std;

// we need should create something that represents a character to which values can be stored which will decide what endings will display.
/* 
Add Structs
Add Functions cin >> a;
        cout << a;
Add Arrays
Commit GitHub
Finish Story; with endings preferably before the finals week*/

void howtoplay();// prints out instructions of how pick your turn
void Deadend();// prints out the ending text
int logicCal(int logic[]);

struct Experience{ 
    int another; // Please define this?
    double gpa; // 4.0
    float math; // learn pie
    char GoogleExperience[10]; // add google to resume
};

int a;

int main()
{ 
    Experience Character;
    string player;
    int age;
    
      cout << "Welcome to Become a Programmer!" << endl;
      cout << "******************************************" << endl;
      
      // Checks if player old enough to play
      cout << "Must be 18+ to play this game " << endl; 
      cout << "Please enter your age " << endl;
      cin >> age;
      if (age < 18){
        return (0);
      };
        cout << "You're old enough to play!" << endl;
        
        cout << "Now please enter the player's name" << endl;
        cin >> player;
        cout << "Hello " << player << " !" << endl;
        
    // ******************************************************
    //                         START 
    // ******************************************************
    
        cout << "please enter 1, 2, or 3 to make a decision on your career path" << endl; // should just make this cout a function so we dont need to keep typing it out
        cout << "but be aware that not all choices\n have happy endings and everything that seems easy is good not\n";
        cout << "1.Become a programmer\n 2. work for wallmart\n 3 become a coal miner\n";
        cin >> a;

    if(a == 1){
        cout << "Nice you want to become a programmer!\n";
        cout << "Now that you have that decided on pick how you will obtain the skills\n\n";
        cout << "Pick a school please\n\n";
        cout << "1.four year college\n2.community college\n3.Harvard Law\n\n\n"; // 1 dead end 2mini game 3 continue on to the next step
    }
    else{
        Deadend();
        return 0;

        } // we should make this a function so we don't need to keep typing it out.
        
    void howtoplay();
    cin >> a;

      if(a == 1){
        cout << "Nice! now pick your classes!\n";
        cout << "1. art classes\n2.math classes\n3.programming\n";
      }
      else if (a == 2){ Character.gpa + 2;// this is where the mini game function will go
        cout << "nice lets get some practice!\n";
        cout << Character.gpa;
      }
      else{
        Deadend();
                return 0;
      };
      
    void howtoplay();
    cin >> a;

      if (a == 2) {
        cout << "programming is a good choice! lets get some practice!"; // make a mini game here or instantly add a value
      }
      else if (a == 1){
        cout << "Good choice! not exactly where you should be, but generally the same thing\n";
        cout << "Okay! lets pick a internship!\n";
        cout << "1.google\n2.megaupload\n3.meatypie.io\n";}
      else{
        Deadend();
                return 0;}
    void howtoplay();
    cin >> a;

      if ( a==1 ){
        cout << "Google is a nice choice! Get ready for some hard work!";//points
      }
      else if(a == 2){
        cout << "meatypie.io is a cool choice, but not much growth will be obtained here";

      }
      else{
      Deadend();
                return 0;};
      void howtoplay();
      cin >> a;

      if ( a==1 ){
        cout <<  "Time to graduate!\n";
    }
    else if( a==2 ){}
    else{
        cout<< "the world is a harsh place, and because of that you are now dead\n GAME OVER";
    }
    void howtoplay();
    cin >> a;

    if (a == 1){
        cout << "next project";
    }
    else if( a== 2){}
    else{
    Deadend();
                return 0;}
    void howtoplay();
    cin >> a;
    if ( a== 1){
        cout << "personal life\n";
    }
    else if(a == 2){}
    else{
    Deadend();
    void howtoplay();
                return 0;}
    void howtoplay();
    cin >> a;
    if (a == 1){
        cout << "your getting old\n";
    }
    else if(a == 2){}
    else{
       Deadend();
                return 0;}
    cin >> a;
    if (a ==1 ){
        cout << "you die\n";
    }
    else if(a == 2){}
    else{
        Deadend();
    }
  return 0;
}
// Handles calculation for Logic, etc.
int logicCal(int logic[]){
  Experience Character;
  //for (int i; i < 30 ; i++)

    
};

void Deadend(){
cout << "the world is a harsh place, and because of that you are now dead\n GAME OVER\n";
cout << "press any key to continue...\n";
};

void howtoplay(){
  int choice;
cout << "Please select from: 1, 2, or 3, to make your life choices" << endl;
cin >> choice;
};

