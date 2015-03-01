#include <iostream>

using namespace std;

int main(){
	for (int i = 0; i < 4000000; i++)
	{
		if (i % 2 != 0){
			if (i%3!=0){
				if (i%4!=0){
					if (i%5!=0){
						if (i%7!=0){
							cout << i << " is a prime number " << endl;
						}
					}
				}
			}
		}

	}

}