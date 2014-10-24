//Lab6-2.cpp - displays a salesperson's comission
//Created/revised by Tyson Bowers on 7/10/13

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
  	//declare variable
	int sales = 0;
	double commission = 0.0;
	char code = ' ';

	//enter input
	cout << "Enter Code (1, 2, or 3): ";
	cin >> code;

	
	//determine commission------------------------------------
	if (code < 4 && code > 0)
	{
		cout << "Enter Sales: ";
		cin >> sales;
		
		if (sales<0)
			commission = -1;
		else
		{
	switch (code)
	{
	case '1':
		commission = sales * .02;
		break;
	case '2':
		commission = (sales-100000) * .05 + 2000;
		break;
	case '3':
		commission = (sales-400000)*.1 + 17000;
		break;
	
	default:
		cout << "Invalid Code" << endl;
	}//end switch
		}//end else
	}//end if

	if (commission == -1)
		cout << "The sales cannot be less than 0. " << endl;
	
		cout << fixed << setprecision(2);
		cout << "Commission: $" << commission << endl;
	

	system("pause");
	return 0;
}	//end of main function
