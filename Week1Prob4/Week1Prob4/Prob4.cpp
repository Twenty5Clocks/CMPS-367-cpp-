//------------------------------------
// Name: Jeremy Driesler
// Course: CMPS 367
// Project: No1 Part 4
// Due: February 9, 2015
// Professor: Ray Ahmadnia
//
//Purpose: Convert temperature from fahrenheit to celsius or vice versa
// based on what the user inputs.
//------------------------------------------
#include <iostream>
#include <iomanip>

using namespace std;

int main(){

	//declare variables
	float inputTemp;
	float outputTemp = 27;
	int choice;

	//output menu
	cout << "-------------Temperature Conversion-------------" << endl;
	cout << "1. From Fahrenheit to Celsius" << endl;
	cout << "2. From Celsius to Fahrenheit" << endl;

	//ask for user input
	cout << "\tEnter your choice: "; cin >> choice;

	cout << "\t\tEnter temperature in ";


	//output information for user
	cout << fixed  << setprecision(0);
	switch (choice){
	case 1: {
		cout << "Fahrenheit: ";
		cin >> inputTemp;
		outputTemp = (inputTemp - 32)*5/9;
		cout << "\t\t" << inputTemp << " Fahrenheit is " << outputTemp << " Celsius" << endl;
		break;
			}
	default: {
		cout << "Celsius: ";
		cin >> inputTemp;
		outputTemp = (inputTemp *9/5)+32;
		cout << "\t\t" << inputTemp << " Celsius is " << outputTemp << " Fahrenheit" << endl; 
		break;
			 }
	}

	//terminate program
	system("Pause");
	return 0;


}
/*-------------------------------output-------------------------
-------------Temperature Conversion-------------
1. From Fahrenheit to Celsius
2. From Celsius to Fahrenheit
        Enter your choice: 1
                Enter temperature in Fahrenheit: 212
                212 Fahrenheit is 100 Celsius
Press any key to continue . . .
----------------------------------------------------------------*/