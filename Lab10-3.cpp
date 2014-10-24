//Lab10-3.cpp - Displays the number of units of
//electricity used and the total charge
//Created/revised by Tyson Bowers on 8/3/13

#include <iostream>
#include <iomanip>
using namespace std;

//function prototypes
void getInput(int &newReading, int &oldReading);
void getUnits(int curRead, int prevRead, int &numUnits);
double getTotal(int numUnits, double chgPerUnit, double &totChg);
void displayBill(int used, double charge);

int main()
{
	
	//declare constant and variables
    const double UNIT_CHG =.11;
	int current =0;
	int previous=0;
	int units=0;
	double total =0.0;

	//display output in fixed-point notation
    //with two decimal places
    cout << fixed << setprecision(2);

	//call functions
	getInput(current, previous);
	getUnits(current, previous, units);
	total=getTotal(units, UNIT_CHG, total);
	displayBill(units, total);

	system("pause");
	return 0;
}	//end of main function

//*****function definitions*****
void getInput(int &newReading, int &oldReading)
{
	cout<<"Current reading: ";
	cin>>newReading;
	cout<<"Previous reading: ";
	cin>>oldReading;
}//end of getInput function

void getUnits(int curRead, int prevRead, int &numUnits)
{
	numUnits=curRead-prevRead;
}//end of getUnits function

double getTotal(int numUnits, double chgPerUnit, double &totChg)
{
	totChg=numUnits*chgPerUnit;
	return totChg;
}//end of getTotal function

void displayBill(int used, double charge)
{ cout<< "Units used: " << used<<endl;
cout<<"Total charge: $"<<charge<<endl;
}//end of displayBill function
/*
Current reading: 200
Previous reading: 100
Units used: 100
Total charge: $11.00
Press any key to continue . . .
*/