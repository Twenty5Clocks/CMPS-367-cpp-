#include <iostream>

using namespace std;

int main(){
	int sum = 2;
	int fibnum = 1;
	int fibnum2 = 2;
	int currfib = 0;

	while (currfib <4000000)
	{
		currfib = fibnum + fibnum2;
		cout << currfib << endl;
		if (currfib%2 == 0)
		{
			cout << "added" << endl;
			sum += currfib;
		}
		fibnum = fibnum2;
		fibnum2 = currfib;

	}

	cout << sum << endl;
	system("Pause");

}