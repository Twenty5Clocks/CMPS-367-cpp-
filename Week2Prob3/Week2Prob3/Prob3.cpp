//------------------------------------
// Name: Jeremy Driesler
// Course: CMPS 367
// Project: No2 Part 3
// Due: February 23, 2015
// Professor: Ray Ahmadnia
//
//Purpose: This a adding and subtraction 
//practice test program 
//------------------------------------------
#include <iostream>
#include <ctime>

using namespace std;

int main()
{
	//declare variables
	int num1, num2, answer;
	int numCorrect = 0, numWrong = 0;
	char opchoice;
	char contchoice = 'y';

	//output menu
	cout <<"-------Practice Addition and Subtraction---------" << endl;
	cout <<"a.	Addition" << endl;
	cout <<"b.	Subtraction" << endl;
	cout <<"	Enter your choice: ";

	//inputs choice of operation
	cin >> opchoice;

	//seed the random number generator with the time
	srand(time(0));
	do{
		num1 = rand()%30;
		num2 = rand()%30;

		//output problem to user
		cout << "\t\t" << num1;
		if (opchoice == 'a') cout << " + ";
		else cout << " - ";
		cout << num2 << " = ";
		cin >> answer;

		//decide if input is correct
		if ((opchoice == 'a' && answer == (num1 + num2))|| (opchoice == 'b' && answer == (num1 - num2))){
			cout << "\t\t\tCORRECT" << endl;
			numCorrect++;
		}
		else{
			cout << "\t\t\tWRONG" << endl;
			numWrong++;
		}
		cout << "\t\t\tContinue (y/n)? ";
		cin >> contchoice;
		contchoice = tolower(contchoice);

	}while (contchoice != 'n');

	//output results to user
	cout << endl;
	cout << "\tNumber of CORRECT answers: " << numCorrect << endl;
	cout << "\tNumber of WRONG answers: " << numWrong << endl;

	//terminate program
	system("Pause");
	return 0;
}
/*-------------------------------output-------------------------
-------Practice Addition and Subtraction---------
a.      Addition
b.      Subtraction
        Enter your choice: a
                15 + 10 = 25
                        CORRECT
                        Continue (y/n)? Y
                20 + 22 = 44
                        WRONG
                        Continue (y/n)? Y
                6 + 4 = 10
                        CORRECT
                        Continue (y/n)? n

        Number of CORRECT answers: 2
        Number of WRONG answers: 1
Press any key to continue . . .
----------------------------------------------------------------*/