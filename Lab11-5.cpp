//Lab11-5.cpp - increases quantities and then
//displays the results
//Created/revised by Tyson Bowers on 8/4/13

#include <iostream>
using namespace std;

int main()
{
	//declare variable and array
	int increase = 0;
	int quantities[10] = {10, 15, 20, 45, 63, 24, 19, 67, 12, 10};
	
	//get increase amount
	cout << "Enter the increase (or decrease) number: ";
	cin >> increase;
	//display old quantity, increase the quantity, then display new quantity
	for (int x = 0; x < 10; x += 1)
	{
		cout << "Old quantity: " << quantities[x] << endl;
		quantities[x]+= increase ;
		cout << "New quantity: " << quantities[x] << endl << endl;
	} //end for

	system("pause");
	return 0;
}	//end of main function
/*
Enter the increase (or decrease) number: 7
Old quantity: 10
New quantity: 17

Old quantity: 15
New quantity: 22

Old quantity: 20
New quantity: 27

Old quantity: 45
New quantity: 52

Old quantity: 63
New quantity: 70

Old quantity: 24
New quantity: 31

Old quantity: 19
New quantity: 26

Old quantity: 67
New quantity: 74

Old quantity: 12
New quantity: 19

Old quantity: 10
New quantity: 17

Press any key to continue . . .
*/