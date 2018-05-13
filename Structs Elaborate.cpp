//Darwish Quiambao
//Simple struct demonstration

#include "stdafx.h"

#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

struct Car
{
	string carMake;
	string carModel;
	int yearModel;
	double cost;
};

int main()
{

	Car vehicles[6];
	
	vehicles[0].carMake = "Lamborghini";
	vehicles[0].carModel = "Countach";
	vehicles[0].yearModel = 1997;
	vehicles[0].cost = 200000.00;
	
	vehicles[1].carMake = "Ford";
	vehicles[1].carModel = "Mustang GT";
	vehicles[1].yearModel = 2017;
	vehicles[1].cost = 28000.50;

	vehicles[2].carMake = "Mitsubishi";
	vehicles[2].carModel = "LancerEVO";
	vehicles[2].yearModel = 2015;
	vehicles[2].cost = 37995.00;

	vehicles[3].carMake = "Pagani";
	vehicles[3].carModel = "Zonda";
	vehicles[3].yearModel = 2017;
	vehicles[3].cost = 1400000.00;

	vehicles[4].carMake = "Jeep"; 
	vehicles[4].carModel = "Cherokee";
	vehicles[4].yearModel = 2019;
	vehicles[4].cost = 23995.00;

	vehicles[5].carMake = "Nissan";
	vehicles[5].carModel = "Altima";
	vehicles[5].yearModel = 2018;
	vehicles[5].cost = 23260.00;

	for (int i = 0; i < 6; i++)
	{
		char ans;
		do
		{
				cout << "Car Make: " << vehicles[0].carMake << endl << endl;
				cout << "Car Model: " << vehicles[0].carModel << endl << endl;
				cout << "Year Model: " << vehicles[0].yearModel << endl << endl;
				cout << "Cost: " << vehicles[0].cost << endl << endl;

				cout << "************************************************" << endl;

				cout << "Would you like to continue?\n\n" << "Enter 'Y' to continue\n or 'N' to exit" << endl;
				cin >> ans;
				if (ans != 'y' && ans != 'Y') {
					return 0;
				};
				
				cout << "************************************************" << endl;

				cout << "Car Make: " << vehicles[1].carMake << endl << endl;
				cout << "Car Model: " << vehicles[1].carModel << endl << endl;
				cout << "Year Model: " << vehicles[1].yearModel << endl << endl;
				cout << "Cost: " << vehicles[1].cost << endl << endl;

				cout << "************************************************" << endl;

				cout << "Would you like to continue?\n\n" << "Enter 'Y' to continue\n or 'N' to exit" << endl;
				cin >> ans;
				if (ans != 'y' && ans != 'Y') {
					return 0;
				};

				cout << "************************************************" << endl;

				cout << "Car Make: " << vehicles[2].carMake << endl << endl;
				cout << "Car Model: " << vehicles[2].carModel << endl << endl;
				cout << "Year Model: " << vehicles[2].yearModel << endl << endl;
				cout << "Cost: " << vehicles[2].cost << endl << endl;

				cout << "************************************************" << endl;

				cout << "Would you like to continue?\n\n" << "Enter 'Y' to continue\n or 'N' to exit" << endl;
				cin >> ans;
				if (ans != 'y' && ans != 'Y') {
					return 0;
				};

				cout << "************************************************" << endl;

				cout << "Car Make: " << vehicles[3].carMake << endl << endl;
				cout << "Car Model: " << vehicles[3].carModel << endl << endl;
				cout << "Year Model: " << vehicles[3].yearModel << endl << endl;
				cout << "Cost: " << vehicles[3].cost << endl << endl;

				cout << "************************************************" << endl;

				cout << "Would you like to continue?\n\n" << "Enter 'Y' to continue or 'N' to exit" << endl;
				cin >> ans;
				if (ans != 'y' && ans != 'Y') {
					return 0;
				};

				cout << "************************************************" << endl;

				cout << "Car Make: " << vehicles[4].carMake << endl << endl;
				cout << "Car Model: " << vehicles[4].carModel << endl << endl;
				cout << "Year Model: " << vehicles[4].yearModel << endl << endl;
				cout << "Cost: " << vehicles[4].cost << endl << endl;

				cout << "************************************************" << endl;

				cout << "Would you like to continue?\n\n" << "Enter 'Y' to continue or 'N' to exit" << endl;
				cin >> ans;
				if (ans != 'y' && ans != 'Y') {
					return 0;
				};

				cout << "Car Make: " << vehicles[5].carMake << endl << endl;
				cout << "Car Model: " << vehicles[5].carModel << endl << endl;
				cout << "Year Model: " << vehicles[5].yearModel << endl << endl;
				cout << "Cost: " << vehicles[5].cost << endl << endl;

				cout << "************************************************" << endl;
				

		} while (ans == 'y' || ans == 'Y');
		break;
		

	};
	return 0;
}

