//Lab9-5.cpp - displays straight-line depreciation
//using the formula: (cost - salvage) / life
//Created/revised by Tyson Bowers on 7/26/13

#include <iostream>
#include <iomanip>
using namespace std;

//function prototype
double getDepreciation(double, double, int);

int main()
{
	//declare variables
	double cost         = 0.0;
	double salvage      = 0.0;
	double depreciation = 0.0;
	int lifeYears       = 0;
	char another        = 'Y';

	while (toupper(another) == 'Y')
	{
		cout << "Asset cost: ";
		cin >> cost;
		cout << "Salvage value: ";
		cin >> salvage;
		cout << "Useful life (years): ";
		cin >> lifeYears;

		//call function to calculate depreciation
		depreciation = getDepreciation(cost, salvage,lifeYears);
	
		//display annual depreciation
		cout << fixed << setprecision(2) << endl;
		cout << "Annual depreciation: $" << depreciation << endl;

		cout << endl << "Another calculation (Y/N)? ";
		cin >> another;
		cout << endl;
	}  //end while
	
	system("pause");
	return 0;
}	//end of main function

//*****function definitions*****
double getDepreciation(double price, double endValue, int years)
{
	//calculates and returns the annual straight-line depreciation
    return (price - endValue) / static_cast<double>(years);
}	//end of getDepreciation function

/*
Asset cost: 20500
Salvage value: 3500
Useful life (years): 10

Annual depreciation: $1700.00

Another calculation (Y/N)? n

Press any key to continue . . .
*/
