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

void logicCal();
struc CharacterCreation	// data structure
{
	string CharName
	int age
	int hairColor
}

int a;

int main()
{

        cout << "please enter 1 2 or 3 to make a decision on your career path"; // should just make this cout a function so we dont need to keep typing it out
        cout << "but be aware that not all choices\n have happy endings and everything that seems easy is good not\n";
        cout << "1.Become a programmer\n 2. work for wallmart\n 3 become a coal miner\n";
        cin >> a;
    if(a == 1){
        cout << "Nice you want to become a programmer!\n";
        cout << "Now that you have that decided on pick how you will obtain the skills\n\n";
        cout << "Pick a school please\n\n";
        cout << "1.four year college\n2.community college\n3.Harvard Law\n\n\n"; // 1 dead end 2mini game 3 continue on to the next step
    }else{
        cout<< "the world is a harsh place, and because of that you are now dead\n GAME OVER";} // we should make this a function so we don't need to keep typing it out.
        cin >> a;
    if(a == 1){
        cout << "Nice! now pick your classes!\n";
        cout << "1. art classes\n2.math classes\n3.programming\n";}
    else if (a == 2){// this is where the mini game function will go
        cout << "nice lets get some practice!\n";}
    else{
        cout <<"the world is a harsh place, and because of that you are now dead\n GAME OVER\n\n\n";}
        cin >> a;
    if (a == 2) {
        cout << "programming is a good choice! lets get some practice!"; // make a mini game here or instantly add a value
    }
    else if (a == 1){
        cout << "Good choice! not exactly where you should be, but generally the same thing\n";
        cout << "Okay! lets pick a internship!\n";
        cout << "1.google\n2.megaupload\n3.meatypie.io\n";}
    else{
        cout << "the world is a harsh place, and because of that you are now dead\n GAME OVER!\n";
    }
    cin >> a;
    if ( a==1 ){
        cout << "Google is a nice choice! Get ready for some hard work!"//points
    }
    else if(a == 2){
        cout << "meatypie.io is a cool choice, but not much growth will be obtained here"
    }
    else{
     cout << "the world is a harsh place, and because of that you are now dead\n GAME OVER";
    }
    cin >> a;
    if ( a==1 ){
      cout <<  "Time to graduate!\n";
    }
    else if( a==2 ){}
    else{
        cout<< "the world is a harsh place, and because of that you are now dead\n GAME OVER";
    }
    cin >> a;
    if (a == 1){
        cout << "next project";
    }
    else if( a== 2){}
    else{
        cout<< "the world is a harsh place, and because of that you are now dead\n GAME OVER";
    }
    cin >> a;
    if ( a== 1){
        cout << "personal life\n";
    }
    else if(a == 2){}
    else{
        cout<< "the world is a harsh place, and because of that you are now dead\n GAME OVER";
    }
    cin >> a;
    if (a == 1){
        cout << "your getting old\n";
    }
    else if(a == 2){}
    else{
        cout<< "the world is a harsh place, and because of that you are now dead\n GAME OVER";
    }
    cin >> a;
    if (a ==1 ){
        cout << "you die\n";
    }
    else if(a == 2){}
    else{
        cout<< "the world is a harsh place, and because of that you are now dead\n GAME OVER";
    }
	return 0;

}
// Handles calculation for LOgic, etc.
int logicCal(int){
};
