//------------------------------------
// Name: Jeremy Driesler
// Course: CMPS 367
// Project: No3 Part 4
// Due: March 2, 2015
// Professor: Ray Ahmadnia
//
//Purpose: User enters interest rate, amount to deposit, and number of years
//			program calculates final value and outputs to user.
//------------------------------------------
#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main(){

	//declare variables
	int years, deposit;
	float interest, total;

	//ask for user input
	cout << "Enter the money you want to deposit: "; cin >> deposit;
	cout << "Enter the interest rate: "; cin >> interest;
	cout << "Enter the duration in years (t): "; cin >> years;
	
	//calculations
	total = (float)deposit * exp(interest * (float)years);

	//output to user
	cout << fixed << showpoint << setprecision(2);
	cout << "\tYour balance after " << years << " years is "<< total << endl;

	//terminate program
	system("Pause");
	return 0;


}
/*-------------------------------output-------------------------
Enter the money you want to deposit: 20000
Enter the interest rate: .05
Enter the duration in years (t): 5
        Your balance after 5 years is 25680.51
Press any key to continue . . .


----------------------------------------------------------------*/