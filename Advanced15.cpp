//Advanced15.cpp - displays gross pay, federal tax, state tax, and net pay
//Created/revised by Tyson Bowers on 6/19/13
//EGR270 Section 1

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	//declare constants and variables
	const double FED_RATE   = .2;
	const double STATE_RATE = .05;
	double inputGross       = 0.0;
	//assign the int data type to each of the following variables
	int gross      = 0;
	int federalTax = 0;
	int stateTax   = 0;
	int net        = 0;

	cout << "Gross pay: ";
	cin >> inputGross;
	
	//multiply inputGross by 100, assigning the result (as an integer) to gross
	gross = inputGross * 100;
	//multiply gross by FED_RATE, then add .5; assign the result (as an integer) to federalTax
	federalTax = (gross * FED_RATE) + .5;
	//multiply gross by STATE_RATE, then add .5; assign the result (as an integer) to stateTax
	stateTax = (gross * STATE_RATE) + .5;
	net = gross - federalTax - stateTax;
	
	//display the gross, federalTax, stateTax, and net
	//divide each value by 100.0 before displaying
	cout << fixed << setprecision(2) << endl;
	cout << "Gross:   " << gross/100 << endl;
	cout << "Federal: -" << federalTax/100 << endl;
	cout << "State:   -" << stateTax/100 << endl;
	cout << "         -----" << endl;
	cout << "Net:     " << net/100 << endl;

	system("pause");
	return 0;
}	//end of main function