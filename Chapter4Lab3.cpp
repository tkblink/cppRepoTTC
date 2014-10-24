//Ch4Lab3.cpp
//Calculates and displays the total amount owed
//Created/revised by Tyson Bowers
#include<iostream>
using namespace std;
int main()
{
	//declare constants and variables
	const int SEM_HOUR_FEE = 105;
	const int ROOMBOARD = 2000;
	double hours = 0;
	double total = 0;
	//get user's input
	cout<<"Enter hours enrolled:";
	cin>>hours;
	//calculate total due
	total = (hours*SEM_HOUR_FEE) + ROOMBOARD;
	//display output items
	cout<<"Total due: $"<<total<<endl;
	return 0; 
} //end of main function
/*
Enter hours enrolled:9
Total due: $2945
Press any key to continue . . .

Enter hours enrolled:11
Total due: $3100
Press any key to continue . . .

*/