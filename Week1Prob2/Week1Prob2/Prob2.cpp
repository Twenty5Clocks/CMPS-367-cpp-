//------------------------------------
// Name: Jeremy Driesler
// Course: CMPS 367
// Project: No1 Part 2
// Due: February 9, 2015
// Professor: Ray Ahmadnia
//
//Purpose: find the taxes of a salary and output information to user about 
//final take home pay, accounting for gender in reply
//------------------------------------------


#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

int main(){

	//declare variables
	string firstName;
	string lastName;
	float salary;
	char gender;
	float taxRate = 0.075;
	float taxes;

	//ask for user input

	cout << "Enter your full name: ";
	cin >> firstName; cin.ignore();
	cin >> lastName;

	cout << "Enter your gender(m/f): ";
	cin >> gender;

	cout << "Enter your salary: ";
	cin >> salary;

	//calculations
	taxes = taxRate * salary;

	//output info to user
	cout << endl << "\tDear ";

	if (gender == 'm' || gender == 'M') cout << "Mr. ";
	else cout << "Ms. ";

	cout << firstName << " " << lastName << "," << endl << endl;
	
	cout << fixed << showpoint << setprecision(2);
	cout << setfill('.');

	cout << "\t\t" << left << setw(20) << "Your salary" << right << setw(10) << salary << endl;
	cout << "\t\t" << left << setw(20) << "Tax( 0.075)" << right << setw(10) << taxes << endl;
	cout << setfill('-');
	cout << "\t\t" << left << setw(29) << "-" << endl;
	cout << setfill('.');
	cout << "\t\t" << left << setw(20) << "Your net income" << right << setw(10) << salary - taxes << endl;

	//terminate program
	system("Pause");
	return 0;

}
/*------------------output---------------------
Enter your full name: Tom Smith
Enter your gender(m/f): m
Enter your salary: 2034.70

        Dear Mr. Tom Smith,

                Your salary............2034.70
                Tax( 0.075).............152.60
                -----------------------------
                Your net income........1882.10
Press any key to continue . . .
-----------------------------------------------*/