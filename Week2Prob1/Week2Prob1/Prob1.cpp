//------------------------------------
// Name: Jeremy Driesler
// Course: CMPS 367
// Project: No2 Part 1
// Due: February 23, 2015
// Professor: Ray Ahmadnia
//
//Purpose: Output the dollar to yen, pound and euro rates
//for a given range and increment
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

const float DOLLAR2YEN = 119.45;
const float DOLLAR2POUND = 0.66;
const float DOLLAR2EURO = 0.88;


int main(){

//declare variables
float pounds, yen, euro;
int startVal, finalVal, incVal;


//user inputs data
cout << "Please enter the table starting value," << endl <<"final value and increment value: ";
cin >> startVal >> finalVal >> incVal;

//Draw the table
cout << fixed << showpoint << setprecision(2);
cout << right << setw(6) << char(36) << right << setw(10) << char(157) << right << setw(10) << char(156)
	<< right << setw(10) << char(238) << endl;
for (int i = 0; i <=40; i++) cout << char(205);
cout << endl;

//display values in table
for(int i = startVal; i <= finalVal; i += incVal){
	cout << right << setw(8) << (float)i << right << setw(10) << (float)i *DOLLAR2YEN << right << setw(10) << (float)i*DOLLAR2POUND
		<< right << setw(10) << (float)i*DOLLAR2EURO << endl;
}



//terminate program
system("Pause");
return 0;


}
/*-------------------------------output-------------------------
Please enter the table starting value,
final value and increment value: 10 100 10
     $         ¥         £         ε
═════════════════════════════════════════
   10.00   1194.50      6.60      8.80
   20.00   2389.00     13.20     17.60
   30.00   3583.50     19.80     26.40
   40.00   4778.00     26.40     35.20
   50.00   5972.50     33.00     44.00
   60.00   7167.00     39.60     52.80
   70.00   8361.50     46.20     61.60
   80.00   9556.00     52.80     70.40
   90.00  10750.50     59.40     79.20
  100.00  11945.00     66.00     88.00
Press any key to continue . . .
----------------------------------------------------------------*/