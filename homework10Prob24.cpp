//homework10Prob24.cpp - Displays the number of units of
//electricity used and the total charge for multiple users
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
	int sen=0;

	//display output in fixed-point notation
    //with two decimal places
    cout << fixed << setprecision(2);

	while(sen==0)
	{
	//call functions
	getInput(current, previous);
	if(current>0)
	{
	getUnits(current, previous, units);
	total=getTotal(units, UNIT_CHG, total);
	displayBill(units, total);
	}//end if
	else
	{
		cout<<"End of Program."<<endl;
		sen=1;
	}//end else
	}//end while
	system("pause");
	return 0;
}	//end of main function

//*****function definitions*****
void getInput(int &newReading, int &oldReading)
{
	cout<<"Current reading(enter negative number to stop): ";
	cin>>newReading;
	if(newReading>0)
	{
	cout<<"Previous reading: ";
	cin>>oldReading;
	}
	
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
Current reading(enter negative number to stop): 3000
Previous reading: 2000
Units used: 1000
Total charge: $110.00
Current reading(enter negative number to stop): 3000
Previous reading: 5000
Units used: -2000
Total charge: $-220.00
Current reading(enter negative number to stop): 53512
Previous reading: 51875
Units used: 1637
Total charge: $180.07
Current reading(enter negative number to stop): -1
End of Program.
Press any key to continue . . .
*/