//homework7Prob31.cpp - Displays annual raise and total salary 
//for the next 3 years.
//Created/revised by Tyson Bowers on 7/17/13

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	//declare variables
	double salary = 0.0;
	double raise = 0.0;
	double totalSalary=0.0;
	int year=1;

//Input Salary
cout<<"Enter salary: ";
cin>>salary;

//begin while statement
while (year<4)
{
	cout<<"Raise for year "<<year<<endl;
	raise = salary*.05;
	cout<<"$"<<raise<<endl;
	salary=raise+salary;
	totalSalary= totalSalary + salary;
	year++;
}//end while statement

//display totalSalary
cout<<endl;
cout<<fixed<<setprecision(2);
cout<<"Total Salary for the next 3 years: $";
cout<<totalSalary<<endl;

//space after numbers
cout<<endl;

	system("pause");
	return 0;
}	//end of main function
/*
Enter salary: 10000
Raise for year 1
$500
Raise for year 2
$525
Raise for year 3
$551.25

Total Salary for the next 3 years: $33101.25

Press any key to continue . . .
*/