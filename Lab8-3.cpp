//Lab8-3.cpp - displays code
//Created/revised by Tyson Bowers on 7/17/13

#include <iostream>
using namespace std;

int main()
{
	//declare variables
	int multiplicand = 0;
	int product = 0;
	int multiplier = 1;

	cout << "Multiplicand (negative number to end): ";
	cin >> multiplicand;

	while(multiplicand >=0 && multiplicand < 10)
	{
		while(multiplier<10)
		{
			product = multiplicand * multiplier;
			cout << multiplicand << " * "
				<<multiplier<< " = "
				<<product<<endl;
			multiplier += 1;
		}

	}
	

	system("pause");
	return 0;
}	//end of main function
