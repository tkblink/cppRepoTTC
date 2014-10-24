//Switch_if_practice.doc word document
//Conversion for:
//degrees
//radians
//centimeters
//Created/revised by Tyson Bowers on 7/10/13

#include <iostream>
using namespace std;

int main()
{
  	//declare variable
	int conversionID = 0;
	int invalid = 0;
	const double PI = 3.14159;
	double degrees = 0.0;
	double radians = 0.0;
	double inches = 0.0;
	double centimeters = 0.0;

	//get code
	cout << "Enter a code (1 through 4): ";
	cin >> conversionID;

	//conversion
	switch (conversionID)
	{
	case 1:
		cout << "Enter the radians: ";
		cin >> radians;
		degrees = radians * (180/PI);
		cout << "degrees: " << degrees << endl;
		break;
	case 2:
		cout << "Enter the degrees: ";
		cin >> degrees;
		radians = degrees * (PI/180);
		cout << "radians: " << radians << endl;
		break;
	case 3:
		cout << "Enter the inches: ";
			cin >> inches;
			if (inches <0)			
				cout << "Invalid. Inches can not be negative. " << endl;
			else
		{centimeters = inches * 2.54;
		cout << "centimeters: " << centimeters << endl;
			}
		break;
	case 4:
		cout << "End Program." << endl;
		break;
	default:
		invalid = -1;
	}
	//end switch

	if (invalid == -1)
		cout << "Invalid code. " << endl;
	//end if

	system("pause");
	return 0;
}	//end of main function
/*Enter a code (1 through 4): 1
Enter the radians: 1
degrees: 57.2958
Press any key to continue . . .

Enter a code (1 through 4): 2
Enter the degrees: 1
radians: 0.0174533
Press any key to continue . . .

Enter a code (1 through 4): 3
Enter the inches: 1
centimeters: 2.54
Press any key to continue . . .

Enter a code (1 through 4): 4
End Program.
Press any key to continue . . .
*/
