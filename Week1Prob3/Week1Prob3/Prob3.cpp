//------------------------------------
// Name: Jeremy Driesler
// Course: CMPS 367
// Project: No1 Part 3
// Due: February 9, 2015
// Professor: Ray Ahmadnia
//
//Purpose: determine cost of membership based on age and
//gender of user.
//------------------------------------------


#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main(){
	//declare variables
	int age;
	char gender;
	string firstName;
	string lastName;

	//output menu
	cout << fixed <<showpoint << setprecision(2);
	cout << setfill('-');

	cout << right << setw(25) << "\"ACE\" Club" << right << setw(20) << "-" << endl;
	cout << "Males" << endl;
	cout << setfill('.');
	cout << "\t" << left << setw(20) << "Adults" << right << setw(17) << "100.00" << endl;
	cout << "\t" << left << setw(20) << "Teenagers" << right << setw(17) << "130.00" << endl;
	cout << "\t" << left << setw(20) << "Children" << right << setw(17) << "20.00" << endl;
	cout << "Females" << endl;
	cout << "\t" << left << setw(20) << "Adults" << right << setw(17) << "110.00" << endl;
	cout << "\t" << left << setw(20) << "Teenagers" << right << setw(17) << "100.00" << endl;
	cout << "\t" << left << setw(20) << "Children" << right << setw(17) << "20.00" << endl << endl;

	//ask for user input
	cout << "\t\tWhat is your name: ";
	cin >> firstName;
	cin.ignore();
	cin >> lastName;

	cout << "\t\t" << firstName << " " << lastName << ", please enter your gender and age: ";
	cin >> gender;
	cin.ignore();
	cin >> age;
	cout << endl;

	cout << "\tHello ";
	if (gender == 'm' || gender == 'M') cout << "Mr. ";
	else cout << "Ms. ";
	cout << firstName << " " << lastName << "," << endl << endl;

	cout << "Your membership at the \"ACE\" club is $";
	if (gender == 'm' || gender =='M')
	{
		switch (age){
			case 1: case 2: case 3: case 4: case 5: case 6:
			case 7: case 8: case 9: case 10 : case 11: case 12:
				cout << "20.00"; break;

			case 13: case 14: case 15: case 16: case 17: case 18: case 19:
				cout << "130.00"; break;

			default: cout << "100.00"; break;

		}
	}
	else{
		switch (age){
			case 1: case 2: case 3: case 4: case 5: case 6:
			case 7: case 8: case 9: case 10 : case 11: case 12:
				cout << "20.00"; break;

			case 13: case 14: case 15: case 16: case 17: case 18: case 19:
				cout << "100.00"; break;

			default: cout << "110.00"; break;

		}
	}
	cout << endl << endl;

		
	//terminate program
	system("Pause");
	return 0;

}
/*-----------------------------output------------------
---------------"ACE" Club--------------------
Males
        Adults.........................100.00
        Teenagers......................130.00
        Children........................20.00
Females
        Adults.........................110.00
        Teenagers......................100.00
        Children........................20.00

                What is your name: Bill Clinton
                Bill Clinton, please enter your gender and age: m 34

        Hello Mr. Bill Clinton,

Your membership at the "ACE" club is $100.00

Press any key to continue . . .
-----------------------------------------------------*/