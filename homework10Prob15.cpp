//homework10Prob15.cpp - displays code
//Created/revised by Tyson Bowers on 7/17/13

#include <iostream>
using namespace std;

//function prototype
void displayProduct(int multiplicand, int multiplier, int product);

int main()
{
	//declare variables
	int multiplicand = 0;
	int product = 0;
	int multiplier = 1;

	cout << "Multiplicand (negative number to end): ";
	cin >> multiplicand;

	if(multiplicand >=0 && multiplicand < 10)
	{
		while(multiplier<10)
		{
			displayProduct(multiplicand, multiplier, product);
			multiplier += 1;
		}//end while

	}//end if
	

	system("pause");
	return 0;
}	//end of main function


//*****function definitions*****
void displayProduct(int multiplicand, int multiplier, int product)
{
	product = multiplicand * multiplier;
	cout << multiplicand << " * "<<multiplier<< " = "
				<<product<<endl;
}

/*
Multiplicand (negative number to end): 2
2 * 1 = 2
2 * 2 = 4
2 * 3 = 6
2 * 4 = 8
2 * 5 = 10
2 * 6 = 12
2 * 7 = 14
2 * 8 = 16
2 * 9 = 18
Press any key to continue . . .

Multiplicand (negative number to end): 4
4 * 1 = 4
4 * 2 = 8
4 * 3 = 12
4 * 4 = 16
4 * 5 = 20
4 * 6 = 24
4 * 7 = 28
4 * 8 = 32
4 * 9 = 36
Press any key to continue . . .

Multiplicand (negative number to end): -1
Press any key to continue . . .
*/