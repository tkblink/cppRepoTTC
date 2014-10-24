//Advanced20.cpp - displays the names of the gifts in the 
//song "The Twelve Days of Christmas"
//Created/revised by Tyson Bowers on 7/15/13

#include <iostream>
using namespace std;

int main()
{
  	//declare variable
	int num = 0;

	//enter input
	cout << "Enter the number of employees registered: ";
	cin >> num;

	//display output
	if (num>0)
	{
	switch (num)
	{
	case 1:	
		num = 100;
			cout << "Amount due for seminar: $" << num << endl;
			break;			
	case 2:	
		num = 200;
			cout << "Amount due for seminar: $" << num << endl;
			break;			
	case 3:	
		num = 300;
			cout << "Amount due for seminar: $" << num << endl;
			break;			
	case 4:	
		num = 400;
			cout << "Amount due for seminar: $" << num << endl;
			break;
	case 5: 
		num = 5 * 80;
			cout << "Amount due for seminar: $" << num << endl;
			break;
	case 6:	
		num = 6 * 80;
			cout << "Amount due for seminar: $" << num << endl;
			break;
	case 7:	
		num = 7 * 80;
			cout << "Amount due for seminar: $" << num << endl;
			break;
	case 8: 
		num = 8 * 80;
			cout << "Amount due for seminar: $" << num << endl;
			break;
	case 9: 
		num = 9 * 80;
			cout << "Amount due for seminar: $" << num << endl;
			break;
	case 10: 
		num = 10 * 80;
			cout << "Amount due for seminar: $" << num << endl;
			break;
	
	default: 
		num = num * 60;
			cout << "Amount due for seminar: $" << num << endl;
	} //end switch
	}
	else
	{
		cout << "The number of employees registered must be greater than 0." << endl;
	}
	system("pause");
	return 0;
}	//end of main function
/*
Enter the number of employees registered: 4
Amount due for seminar: $400
Press any key to continue . . .

Enter the number of employees registered: 8
Amount due for seminar: $640
Press any key to continue . . .

Enter the number of employees registered: 12
Amount due for seminar: $720
Press any key to continue . . .

Enter the number of employees registered: 0
The number of employees registered must be greater than 0.
Press any key to continue . . .

Enter the number of employees registered: -2
The number of employees registered must be greater than 0.
Press any key to continue . . .
*/