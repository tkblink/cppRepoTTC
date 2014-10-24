//Lab10-1.cpp - Converts American dollars to 
//British pounds, Mexican pesos, or Japanese yen
//Created/revised by Tyson Bowers on 8/3/13

#include <iostream>
#include <iomanip>
using namespace std;

//function prototypes
void displayMenu();
double convertDols(double dollars, double convertRate);
void assignRate(int choice, double &convertRate);

int main()
{
	
	//declare variables
    int menuChoice           = 0;
	double americanDollars   = 0.0;
    double conversionRate    = 0.0;
	double convertedCurrency = 0.0;

	//display output in fixed-point notation
    //with two decimal places
    cout << fixed << setprecision(2);

	//get menu choice
	displayMenu();
	cout << "Enter 1, 2, 3, or 4: ";
	cin >> menuChoice;

	while (menuChoice > 0 && menuChoice < 4)
	{
		//get dollars to convert
		cout << "Number of American dollars: ";
		cin >> americanDollars;

		//assign rate
		assignRate(menuChoice, conversionRate);

		convertedCurrency= convertDols(americanDollars, conversionRate);
		cout<< "-->" << convertedCurrency<<endl<<endl;

		//get menu choice
		displayMenu();
		cout << "Enter 1, 2, 3, or 4: ";
		cin >> menuChoice;
	}	//end while

	system("pause");
	return 0;
}	//end of main function

//*****function definitions*****
void displayMenu()
{
	cout << "1 British pounds" << endl;
	cout << "2 Mexican pesos" << endl;
	cout << "3 Japanese yen" << endl;
	cout << "4 Stop program" << endl;
}	//end of displayMenu function

double convertDols(double dollars,double convertRate)
{
	double converted=0.0;
	converted = dollars * convertRate;
	return converted;
}   //end of convertDols function

void assignRate(int choice, double &convertRate)
{
	//declare constants
	const double BRITISH_RATE  = .630676;
	const double MEXICAN_RATE  = 14.0043;
	const double JAPANESE_RATE = 79.48;

	if (choice == 1)
			convertRate = BRITISH_RATE;
		else if (choice == 2)
			convertRate = MEXICAN_RATE;
		else
			convertRate = JAPANESE_RATE;	
		//end if
}//end of assignRate function

/*
1 British pounds
2 Mexican pesos
3 Japanese yen
4 Stop program
Enter 1, 2, 3, or 4: 2
Number of American dollars: 100
-->1400.43

1 British pounds
2 Mexican pesos
3 Japanese yen
4 Stop program
Enter 1, 2, 3, or 4: 1
Number of American dollars: 50
-->31.53

1 British pounds
2 Mexican pesos
3 Japanese yen
4 Stop program
Enter 1, 2, 3, or 4: 3
Number of American dollars: 10
-->794.80

1 British pounds
2 Mexican pesos
3 Japanese yen
4 Stop program
Enter 1, 2, 3, or 4: 4
Press any key to continue . . .
*/