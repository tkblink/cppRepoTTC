//Lab8-5.cpp - displays a store's quarterly sales
//Created/revised by Tyson Bowers on 7/17/13

#include <iostream>
using namespace std;

int main()
{
	//declare variables
	int month      = 1;
	int sales      = 0;
	int totalSales = 0;

	//get an unknown number of sales amounts for each of three months
	while (month < 4)
	{
		cout << "First sales amount for month " << month << " (negative number to end): ";
		cin >> sales;
		while (sales >= 0)
		{
			totalSales = totalSales + sales;
			cout << "Next sales amount for month " << month << " (negative number to end): ";
			cin >> sales;
			
		}	//end while

		//update the month counter
			month += 1;
			
		cout << endl;
	}	//end while

	cout << "Total sales for the store: $" << totalSales << endl;

	system("pause");
	return 0;
}	//end of main function
