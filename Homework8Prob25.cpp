//Homework8Prob25.cpp - Problem 25 Page 301
//Created/revised by Tyson Bowers on 7/22/13

#include <iostream>
using namespace std;
#include <iomanip>
int main()
{
	//declare variables
	double salary=0.0;
	double raise=0.0;
	int year = 1;

	cout<<"Enter last year's salary: "<<endl;
	cin>>salary;

	if(salary>0)
	{
	for(double raiseTemp=3.0;raiseTemp<=6.00;++raiseTemp)
		{
		cout<<"Raise for year "<<year<<endl;
		raise =salary*(raiseTemp/100.00);
		cout<<"$"<<raise<<endl;
		salary= salary+raise;
		++year;
		} //end for
	}//end if

	else
	{
		cout<<"Enter a salary greater than 0. "<<endl;
	}//end else

	system("pause");
	return 0;
}	//end of main function
/*
Enter last year's salary:
30000
Raise for year 1
$900
Raise for year 2
$1236
Raise for year 3
$1606.8
Raise for year 4
$2024.57
Press any key to continue . . .

Enter last year's salary:
60000
Raise for year 1
$1800
Raise for year 2
$2472
Raise for year 3
$3213.6
Raise for year 4
$4049.14
Press any key to continue . . .

Enter last year's salary:
-1
Enter a salary greater than 0.
Press any key to continue . . .
*/