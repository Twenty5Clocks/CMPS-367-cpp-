//------------------------------------
// Name: Jeremy Driesler
// Course: CMPS 367
// Project: No2 Part 1
// Due: February 23, 2015
// Professor: Ray Ahmadnia
//
//Purpose: 
//------------------------------------------



/*----------------------------
dollar -> yen = 1->119.45		char(157)
dollar -> pound =  1->0.66		char(156)
dollar -> euro = 1->0.88		char(238)
Dollar sign						char(36)
double underlines				char(205)
----------------------------*/
#include <iostream>
#include <iomanip>


using namespace std;

int main(){

//declare variables
float pounds, yen, euro;
int startVal, finalVal, incVal;


//user inputs data
cout << "Please enter the table starting value, final value and increment value: ";
cin >> startVal >> finalVal >> incVal;

//Draw the table
cout << fixed << showpoint << setprecision(2);
cout << right << setw(6) << char(36) << right << setw(10) << char(157) << right << setw(10) << char(156)
	<< right << setw(10) << char(238) << endl;
for (int i = 0; i <=40; i++) cout << char(205);
cout << endl;



//terminate program
system("Pause");
return 0;


}
/*-------------------------------output-------------------------
Enter today's date:2/2/2015
Today is February 2nd, 2015
Press any key to continue . . .
----------------------------------------------------------------*/