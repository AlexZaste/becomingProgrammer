#include <iostream>
#include <string>
#include "stdafx.h"
using namespace std;

struct Car
{
	string carMake;
	string carModel;
	int yearModel;
	double cost;
};

int main();
{
	const int CARS = 6;
	Car vehicles[CARS];
	vehicles[0].carMake = "Lamborghini";
	vehicles[0].carModel = "Countach";
	vehicles[0].yearModel = 1997;
	vehicles[0].cost = 200000.00;

	vehicles[1].carMake = "Ford"
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
	vehicles[3].cost = 1400000;

	vehicles[4].carMake = "Jeep";
	vehicles[4].carModel = "Cherokee";
	vehicles[4].yearModel = 2019;
	vehicles[4].cost = 23995.00

		vehicles[5].carMake = "Nissan";
	vehicles[5].carModel = "Altima";
	vehicles[5].yearModel = 2018;
	vehicles[5].cost = 23260;

	vehicles[6].carMake = "Acura";
	vehicles[6].carModel = "NSX";
	vehicles[6].yearModel = 2018;
	vehicles[6].cost = 156000;

	for (int i = 0; i < CARS; i++);
	{
		cout << vehicles.carMake << endl;
		cout << vehicles.carModel << endl;
		cout << vehicles.yearModel << endl;
		cout << vehicles.cost << endl;
	}
	return 0;
}

