//Advanced20.cpp - displays the names of the gifts in the 
//song "The Twelve Days of Christmas"
//Created/revised by Tyson Bowers on 7/15/13

#include <iostream>
using namespace std;

int main()
{
  	//declare variable
	int day = 0;

	//enter input
	cout << "Enter the day (1 through 12): ";
	cin >> day;

	//display output
	switch (day)
	{
	case 1:	
			cout << "1 partridge in a pear tree" << endl;
			break;			
	case 2:	
			cout << "2 turtle doves" << endl;
			break;			
	case 3:	
			cout << "3 french hens" << endl;
			break;			
	case 4:	
			cout << "4 calling birds" << endl;
			break;
	case 5: 
			cout << "5 golden rings" << endl;
			break;
	case 6:	
			cout << "6 geese a laying" << endl;
			break;
	case 7:	
			cout << "7 swans a swimming" << endl;
			break;
	case 8: 
			cout << "8 maids a milking" << endl;
			break;
	case 9: 
			cout << "9 ladies dancing" << endl;
			break;
	case 10: 
			cout << "10 lords a leaping" << endl;
			break;
	case 11: 
			cout << "11 pipers piping" << endl;
			break;
	case 12: 
			cout << "12 drummers drumming" << endl;
			break;
	default: 
			cout << "Error in day number." << endl;
	} //end switch

	system("pause");
	return 0;
}	//end of main function
/*
Enter the day (1 through 12): 1
1 partridge in a pear tree
Press any key to continue . . .

Enter the day (1 through 12): 2
2 turtle doves
Press any key to continue . . .

Enter the day (1 through 12): 3
3 french hens
Press any key to continue . . .

Enter the day (1 through 12): 4
4 calling birds
Press any key to continue . . .

Enter the day (1 through 12): 5
5 golden rings
Press any key to continue . . .

Enter the day (1 through 12): 6
6 geese a laying
Press any key to continue . . .

Enter the day (1 through 12): 7
7 swans a swimming
Press any key to continue . . .

Enter the day (1 through 12): 8
8 maids a milking
Press any key to continue . . .

Enter the day (1 through 12): 9
9 ladies dancing
Press any key to continue . . .

Enter the day (1 through 12): 10
10 lords a leaping
Press any key to continue . . .

Enter the day (1 through 12): 11
11 pipers piping
Press any key to continue . . .

Enter the day (1 through 12): 12
12 drummers drumming
Press any key to continue . . .
*/