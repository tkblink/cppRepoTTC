//Lab9-2.cpp - displays two monthly car payments
//Created/revised by Tyson Bowers on 7/26/13

#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

//function prototype
double getPayment(int, double, int);

int main()
{
	//declare variables
	int carPrice = 0;
	int rebate = 0;
	double creditRate = 0.0;
	double dealerRate  = 0.0;
	int term = 0;
	double creditPayment = 0.0;
	double dealerPayment = 0.0;

	//get input items
	cout << "Car price (after any trade-in): ";
	cin >> carPrice;
	cout << "Rebate: ";
	cin>> rebate;
	cout<< "Credit union rate: ";
	cin>>creditRate;
	cout<<"Dealer rate: ";
	cin>>dealerRate;
	cout<< "Term in years: ";
	cin>> term;
	
	//call function to calculate payments
	creditPayment = getPayment(carPrice - rebate, creditRate/12, term*12);
	dealerPayment = getPayment(carPrice, dealerRate/12, term*12);

	//display payments
	if(creditPayment<dealerPayment)
	{
		cout<<endl;
		cout<< "Take the rebate and finance through the credit union. "<<endl;
	cout<<fixed<<setprecision(2)<<endl;
	cout<<"Credit union payment: $"
		<<creditPayment<<endl;
	}

	if(dealerPayment<creditPayment)
	{
		cout<<endl;
		cout<<"Don't take the rebate. Finance through the dealer. "<<endl;
	cout<<"Dealer payment: $"
		<<dealerPayment<<endl;
	}

	if (dealerPayment==creditPayment)
	{
		cout<<"You can finance through either one."<<endl;
		cout<<"Credit union payment: $"<<creditPayment<<endl;
		cout<<"Dealer payment: $"<<dealerPayment<<endl;
	}
	system("pause");
	return 0;
}   //end of main function


//*****function definitions*****
double getPayment(int prin, double monthRate, int months)
{
	//calculates and returns a monthly payment
	double monthPay = 0.0;
	monthPay = prin* monthRate/ 
		(1-pow(monthRate + 1, -months));
	return monthPay;
}//end of getPayment function

/*

*/