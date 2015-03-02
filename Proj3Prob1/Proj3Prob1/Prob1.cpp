//------------------------------------
// Name: Jeremy Driesler
// Course: CMPS 367
// Project: No3 Part 1
// Due: March 2, 2015
// Professor: Ray Ahmadnia
//
//Purpose: Enter a telephone number including characters and print out the 
// numbered version of it.
//------------------------------------------
#include <iostream>

using namespace std;

int main(){
	//declare variables
	char decision = 'Y';
	char c;
	int position = 1;

	//main loop
	do{
		//ask user for input
		cout << "Enter a telephone number: ";
		
		while ( cin.get(c), c!= '\n'){
			if (position ==1)cout << "\tThe numeric form is ";
			c = tolower(c);
			//if its a number just print it out
			if (isdigit(c)){
				cout << c;
			}else{
				//if its a letter decide which number to pring and print it
				if (c == 97 || c == 98 || c == 99) cout << "2";
				if (c == 100 || c == 101 || c == 102) cout << "3";
				if (c == 103 || c == 104 || c == 105) cout << "4";
				if (c == 106 || c == 107 || c == 108) cout << "5";
				if (c == 109 || c == 110 || c == 111) cout << "6";
				if (c == 112 || c == 113 || c == 114 || c == 115) cout << "7";
				if (c == 116 || c == 117 || c == 118) cout << "8";
				if (c == 119 || c == 120 || c == 121 || c == 122) cout << "1";
			}

			//this line handles the dashes in the number
			if (position == 1|| position == 4 || position == 7) cout << "-";
			
			position++;
		}
		cout << endl;
		//ask user if they would like to "play" again
		cout << "Continue(y/n)? ";
		position = 1;
		cin >> decision;
		cin.ignore();
		
	}while (toupper(decision) == 'Y');

	//terminate program
	system("Pause");
	return 0;


}
/*-------------------------------output-------------------------
Enter a telephone number: 1800dentist
        The numeric form is 1-800-336-8478
Continue(y/n)? y
Enter a telephone number: 1800FixCars
        The numeric form is 1-800-341-2277
Continue(y/n)? n
Press any key to continue . . .
----------------------------------------------------------------*/