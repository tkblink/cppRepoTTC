//Lab8-1.cpp - displays each region's total sales
//Created/revised by Tyson Bowers on 7/17/13

#include <iostream>
using namespace std;

int main()
{
	//declare variables
	int sales            = 0;
	int region           = 1;	//counter
	int totalRegionSales = 0;	//accumulator

	for (int region =1; region < 3;region+=1)
	{
		//get current region's first sales amount
		cout << "First sales amount for Region " 
			<< region << ": ";
		cin >> sales;

		do //begin loop
		{
			//add the sales amount to the total
			//for the region
			totalRegionSales += sales;
			//get the next sales amount for the 
			//current region
			cout << "Next sales amount for Region "
				<< region << ": ";
			cin >> sales;
		}	while (sales > 0);//end while

		//display the current region's total sales
		cout << "****************Region " << region
			<< " sales: $" << totalRegionSales 
			<< endl << endl;
		
		//update the counter
		//reset the accumulator
		//region += 1;
		totalRegionSales = 0;
	}	//end while

	system("pause");
	return 0;
}	//end of main function

/*
First sales amount for Region 1: 1000
Next sales amount for Region 1: 2000
Next sales amount for Region 1: -1
****************Region 1 sales: $3000

First sales amount for Region 2: 400
Next sales amount for Region 2: 500
Next sales amount for Region 2: -3
****************Region 2 sales: $3900

Press any key to continue . . .

First sales amount for Region 1: 1000
Next sales amount for Region 1: 2000
Next sales amount for Region 1: -1
****************Region 1 sales: $3000

First sales amount for Region 2: 400
Next sales amount for Region 2: 500
Next sales amount for Region 2: -3
****************Region 2 sales: $900

Press any key to continue . . .
*/