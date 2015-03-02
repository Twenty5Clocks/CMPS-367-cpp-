//------------------------------------
// Name: Jeremy Driesler
// Course: CMPS 367
// Project: No3 Part 3
// Due: March 2, 2015
// Professor: Ray Ahmadnia
//
//Purpose: user inputs city name
// program decides and prints the abbreviation in capital letters.
//------------------------------------------
#include <iostream>
#include <string>

using namespace std;

int main(){

    //declare variables
    char c;
    int position = 1;
    char decision = 'y';
    int NoWords = 1;
    string abbrev = "";
    char secondletter;
	bool newWord = false;

    //main loop
    while (tolower(decision) == 'y')
	{
        //ask user for input
        cout << "Enter a city name: ";
        while(cin.get(c), c != '\n')
		{
            //grab first letter
            if (position == 1){
				cout << "\t";
                abbrev.append(string(1,char(toupper(c))));
                
			}
            //handle new words
			if (newWord) {
				newWord = false;
				abbrev.append(string(1,char(toupper(c))));
			}
            //count words
			if (isspace(c)) {
				newWord = true;
				NoWords++;
			}
            //save second letter in case of one word
            if (position == 2) secondletter = c;
            cout << char(c);
            position++;
		}
        //this takes care if there is only one word
		if (NoWords ==1) abbrev.append(string(1,char(toupper(secondletter))));
        //ask user if they want to "play" again
        cout  << " or " << abbrev << endl;
        cout << "\tContinue(y/n)?";
        cin >> decision;
        //reset all values for another go round.
        position = 1;
		NoWords = 1;
        abbrev = "";
        cin.ignore();
	}
    

    //terminate program
    system("Pause");
    return 0;


}
/*-------------------------------output-------------------------
Enter a city name: Los Angeles
        Los Angeles or LA
        Continue(y/n)?y
Enter a city name: Montclair
        Montclair or MO
        Continue(y/n)?y
Enter a city name: Clairmont
        Clairmont or CL
        Continue(y/n)?y
Enter a city name: La Habra Heights
        La Habra Heights or LHH
        Continue(y/n)?n
Press any key to continue . . .
----------------------------------------------------------------*/