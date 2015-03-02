//------------------------------------
// Name: Jeremy Driesler
// Course: CMPS 367
// Project: No2 Part 2
// Due: February 23, 2015
// Professor: Ray Ahmadnia
//
//Purpose:  iNPUT A SENTENCE AND PROGRAM OUTPUTS THE NUMBER OF DIgits
//Upper case letters and vowels
//------------------------------------------
#include <iostream>
#include <iomanip>

using namespace std;

int main(){

	//declare variables
	int noVowels = 0, noUppercase = 0, noDigits = 0;
	char c;

	//ask user for inputs
	cout << "Enter a sentence: ";

	cin.get(c);

	//the main while loop that counts the vowels, digits, and uppercase
	while (c != '\n')
	{
		 if (c >= 'A' && c <= 'Z')  noUppercase++;	//uppercase
		 if (c >= '0' && c <= '9')  noDigits++;		//digits
		 if (c == 65 || c == 69 || c == 73 || c == 79 || c == 79 ||
			 c == 97 || c == 101|| c == 105|| c == 111|| c == 117) noVowels++;	//vowels

		 cin.get(c);
	}
	//set the fill character
	cout << setfill('.');

	//output the results to the user with a star for each instance
	cout << endl <<"\t" << left << setw(30) << "Number of Uppercase Letters" << "=" << noUppercase;
	for (int i = 0; i < noUppercase; i++) cout << "* ";
	cout << endl <<"\t" << left << setw(30) << "Number of Digits" << "=" << noDigits;
	for (int i = 0; i < noDigits; i++) cout << "* ";
	cout << endl << "\t" << left << setw(30) << "Number of Vowels " << "=" << noVowels;
	for (int i = 0; i < noVowels; i++) cout << "* ";
	cout << endl;
	//terminate program
	system("Pause");
	return 0;


}
/*-------------------------------output-------------------------
Enter a sentence: Today Is February the 16th, 2015

        Number of Uppercase Letters...=3* * *
        Number of Digits..............=6* * * * * *
        Number of Vowels .............=7* * * * * * *
Press any key to continue . . .
----------------------------------------------------------------*/