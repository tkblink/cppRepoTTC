//Lab7-4.cpp - calculates and displays the average price
//Created/revised by Tyson Bowers on 7/15/13

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	int squaredNumber = 0;
	for (int number = 1; number < 6; number +=1)
	{
		squaredNumber = number * number;
		cout << squaredNumber << endl;
	}
	system("pause");
	return 0;
}	//end of main function
/* DESK CHECK:
1
4
9
16
Press any key to continue . . .

1
4
9
16
25
Press any key to continue . . .
*/