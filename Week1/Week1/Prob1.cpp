//------------------------------------
// Name: Jeremy Driesler
// Course: CMPS 367
// Project: No1 Part 1
// Due: February 9, 2015
// Professor: Ray Ahmadnia
//
//Purpose: user inputs three integer
//			program organizes and prints numbers in sequential order
//------------------------------------------

#include <iostream>

using namespace std;

int main(){

	//declare variables
	int num1, num2, num3;
	int lowest, middle, highest;

	//ask for three ints from user
	cout << "Enter 3 integer numbers: ";
	cin >> num1 >> num2 >> num3;

	//calculation/decision making
	highest = (num1>num2 && num1>num3)? num1:((num2>num3)?  num2:num3); //decide whish is highest
	lowest = (num1<num2 && num1<num3)? num1:((num2<num3)?  num2:num3);  // decide which is lowest
	middle = ((num1 > num2 && num1 < num3)||(num1 < num2 && num1 > num3))? num1:(((num2>num1&&num2<num3)||(num2<num1&&num2>num3))? num2:num3);
																		//decide which is in middle


	//output
	cout << "\tYour numbers from lowest to highest are: ";
	cout << lowest << " " << middle << " " << highest << endl;

	//terminate program
	system("Pause");
	return 0;

}
/*-------------------output-------------------------------------------
Enter 3 integer numbers: 4 7 5
        Your numbers from lowest to highest are: 4 5 7

Press any key to continue . . .
--------------------------------------------------------------------*/