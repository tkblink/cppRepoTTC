//homework10Prob19.cpp - simple payroll program 
//using 3 void functions
//Created/revised by Tyson Bowers on 7/27/13

#include <iostream>
#include <iomanip>
using namespace std;

//function prototype
void calcFedTaxes(double salary, double FWTrate, double FICArate, double &FWT, double &FICA);
void calcNetPay(double salary, double FWT, double FICA, double &netPay);
void displayInfo(double FWT, double FICA, double netPay);

int main()
{
	//declare variables
	double salary=0.0;
	const double FWTrate=0.2;
	const double FICArate=0.08;
	double FWT=0.0;
	double FICA=0.0;
	double netPay=0.0;

	cout << "Enter the salary: $";
	cin >> salary;

	//fwt=salary*fwtRate;
	//fica=salary*ficaRate;
	//netPay=salary-(fwt+fica);

	while(salary>0.0)
	{
		calcFedTaxes(salary,FWTrate,FICArate, FWT, FICA);
		calcNetPay(salary,FWT,FICA,netPay);
		displayInfo(FWT,FICA,netPay);

		cout<<endl;
		cout<<"Enter the salary(negative number to stop): $";
		cin>>salary;
	}//end if

	system("pause");
	return 0;
}	//end of main function


//*****function definitions*****
void calcFedTaxes(double salary, double FWTRate, double FICARate, double &FWT, double &FICA)
{
	FWT=salary*FWTRate;
	FICA=salary*FICARate;
}

void calcNetPay(double salary, double FWT, double FICA, double &netPay)
{
	netPay=salary-(FWT+FICA);
}

void displayInfo(double FWT, double FICA, double netPay)
{
	cout<<endl;
	cout<<fixed<<setprecision(2);
	cout<<"FWT: $"<<FWT<<endl;
	cout<<"FICA: $"<<FICA<<endl;
	cout<<"Net Pay: $"<<netPay<<endl;
}

/*
Enter the salary: $500

FWT: $100.00
FICA: $40.00
Net Pay: $360.00

Enter the salary(negative number to stop): $650

FWT: $130.00
FICA: $52.00
Net Pay: $468.00

Enter the salary(negative number to stop): $-1
Press any key to continue . . .
*/