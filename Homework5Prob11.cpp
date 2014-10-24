//Homework5Prob11.cpp 
//Problem 11
//Created/revised by <Tyson Bowers> on <6/25/13>
//EGR270 Section 001

#include <iostream> 
#include <iomanip>
using namespace std;

int main()
{
	char shipFee = ' ';
	double pricePerPound = 0.0;
	int teaPounds = 0;
	double balance = 0.0;

	//enter input data
	cout << "Enter the number of pounds of tea ordered: ";
	cin >> teaPounds;
	cout << "Enter the price per pound: ";
	cin >> pricePerPound;
	cout << "Should a $15 shipping fee be applied? Enter Y for YES. Enter N for NO. ";
	cin >> shipFee;

	//calculate balance
	balance = static_cast<double>(teaPounds) * pricePerPound;
	//add $15 shipping fee if yes
	if (shipFee == 'Y')
		{
			balance = balance + 15;
	}
	//end if

	//validate shipFee
	if (shipFee != 'Y' && shipFee != 'N')
	{
		cout << "Invalid Input. Enter Y for YES, N for NO. ";
	}
	//display balance
	cout << fixed << setprecision(2);
	cout << "Balance Due: " << balance << endl;

	system("pause");
	return 0;
}   //end of main function
/*
Desk Check 1:
Enter the number of pounds of tea ordered: 10
Enter the price per pound: 12.54
Should a $15 shipping fee be applied? Enter Y for YES. Enter N for NO. Y
Balance Due: 140.40
Press any key to continue . . .

Desk Check 2:
Enter the number of pounds of tea ordered: 5
Enter the price per pound: 11.59
Should a $15 shipping fee be applied? Enter Y for YES. Enter N for NO. N
Balance Due: 57.95
Press any key to continue . . .
*/
