//------------------------------------
// Name: Jeremy Driesler
// Course: CMPS 367
// Project: No3 Part 5
// Due: March 2, 2015
// Professor: Ray Ahmadnia
//
//Purpose: Find average, max and min of three integers using user defined functions.
//------------------------------------------
#include <iostream>
#include <iomanip>

using namespace std;

//functions prototypes
void ReadData(int& a, int& b, int& c);
int ComputeSum(int a, int b, int c);
float ComputeAverage(int a, int b, int c);
void DisplayTotalAve(int a, int b, int c, int t, float ave);
void FindMaxMin(int a, int b, int c, int& max, int& min);
void DisplayMaxMin(int a, int b);

int main(){

	//Read Data into x, y, and z
	int x, y, z;
	ReadData(x,y,z);

	//Compute total of x, y, and z
	int total;
	total = ComputeSum(x,y,z);

	//Compute the average of x,y,and z
	float average;
	average = ComputeAverage(x,y,z);

	//Display total and average of x, y, and z
	DisplayTotalAve(x,y,z,total,average);

	//Find the maximum and minimum of x,y,z)
	int max, min;
	FindMaxMin(x,y,z, max, min);

	//Overload Display Function to show the max and min values
	DisplayMaxMin(max, min);

	//terminate program
	system("Pause");
	return 0;


}
void ReadData(int& a, int& b, int& c)
{
	cout << "Enter three integers: ";
	cin >> a >> b >> c;

	
}
int ComputeSum(int a, int b, int c)
{
	return (a + b + c);
}
float ComputeAverage(int a, int b, int c)
{
	return ((a + b + c)/ 3.);
}

void DisplayTotalAve(int a, int b, int c, int t, float ave)
{
	cout << fixed << showpoint << setprecision(2);

	cout << "The total and average of " << a << ", " << b << ", and " << c << "are: " << endl;
	cout << "\tTotal: " << t << endl;
	cout << "\tAverage: " << ave << endl;

}

void FindMaxMin(int a, int b, int c, int& max, int& min)
{
	min = a;
	max = a;
	if (max < b) max = b;
	if (max < c) max = c;
	if (min > b) min = b;
	if (min > c) min = c;
}

void DisplayMaxMin(int a, int b)
{
	cout << "The Maximum and Minimum of the inputs are: " << endl;
	cout << "\tMaximum: " << a << endl;
	cout << "\tMinimum: " << b << endl;
}



/*-------------------------------output-------------------------
Enter three integers: 95 63 2
The total and average of 95, 63, and 2are:
        Total: 160
        Average: 53.33
The Maximum and Minimum of the inputs are:
        Maximum: 95
        Minimum: 2
Press any key to continue . . .
----------------------------------------------------------------*/