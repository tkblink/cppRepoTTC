//Lab7-5.cpp - calculates and displays the average price
//Created/revised by Tyson Bowers on 7/15/13

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	int numPrices     = 0;    //counter
	double price      = 0.0;
	double totalPrice = 0.0;  //accumulator
	double avgPrice   = 0.0;

	//get the first price
	cout << "Price: ";
	cin >> price;

	while (price != -1)
	{    
		//update the counter and accumulator
		numPrices = numPrices + 1;    
		totalPrice = totalPrice + price;    
		cout << "Next price(-1 to stop): ";    
		cin >> price;
	} //end while

	//verify that a price was entered
	if (numPrices > 0) 
		avgPrice = totalPrice / numPrices;    
	else    
		avgPrice = 0.0;
	// end if

	cout << fixed << setprecision(2) << endl;
	cout << "Average price: " << avgPrice << endl;

	system("pause");
	return 0;
}	//end of main function
/*
Price: 15.45
Next price(-1 to stop): -1

Average price: 15.45
Press any key to continue . . .
*/
