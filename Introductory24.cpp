//Introductory24.cpp - displays the total sales
//Created/revised by Tyson Bowers 7/17/13

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	char anotherSale = ' ';
	int salesAmount  = 0;
	int totalSales   = 0;

	cout << "Do you want to enter a sales amount (Y or N)? ";
	cin >> anotherSale;

	//perform loop 
	while(anotherSale=='Y' || anotherSale=='y')
	{
		cout << "Enter the sales amount: ";
		cin >> salesAmount;
		totalSales += salesAmount;
		cout << "Do you want to enter a sales amount (Y or N)? ";
		cin >> anotherSale;
	}//end while

	cout << fixed << setprecision(0);
	cout << "Total sales: $" << totalSales << endl;

	system("pause");
	return 0;
}	//end of main function
/*
Do you want to enter a sales amount (Y or N)? y
Enter the sales amount: 100
Do you want to enter a sales amount (Y or N)? Y
Enter the sales amount: 200
Do you want to enter a sales amount (Y or N)? n
Total sales: $300
Press any key to continue . . .
*/