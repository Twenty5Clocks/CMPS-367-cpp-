//------------------------------------
// Name: Jeremy Driesler
// Course: CMPS 367
// Project: No3 Part 2
// Due: March 2, 2015
// Professor: Ray Ahmadnia
//
//Purpose: Read a sentence and count letters, digitd, words, and vowels
//------------------------------------------
#include <iostream>
#include <cctype>
#include <iomanip>

using namespace std;

int main(){

    //declare variables
    char c;
    int NoL=0, NoD=0, NoW=1, NoV=0;

    cout << "Enter a sentence: ";
    //main while loop
    while (cin.get(c), c!= '\n')
	{
        if (isdigit(c))NoD++;
        if (isspace(c))NoW++;
        if (isalpha(c)){
            NoL++;
            //these are the ascii values for vowels
            if(tolower(c) == 97 ||tolower(c) == 101 ||tolower(c) == 105 ||tolower(c) == 111 ||tolower(c) == 117 ) NoV++;
		}


	}

    //output info to user using iomanip to make it pretty.
    cout << setfill('.');
    cout <<"\t" << left << setw(10) << "No. of letters" << right << setw(10) << NoL << endl;
    cout <<"\t" << left << setw(10) << "No. of digits" << right << setw(10) << NoD << endl;
    cout <<"\t" << left << setw(10) << "No. of words" << right << setw(10) << NoW << endl;
    cout <<"\t" << left << setw(10) << "No. of vowels" << right << setw(10) << NoV << endl;


    //terminate program
    system("Pause");
    return 0;


}
/*-------------------------------output-------------------------
Enter a sentence: To Build Something, First You have to Tear it off
        No. of letters........39
        No. of digits.........0
        No. of words........10
        No. of vowels........16
Press any key to continue . . .

----------------------------------------------------------------*/