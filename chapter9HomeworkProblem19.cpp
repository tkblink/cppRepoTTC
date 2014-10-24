//Intermediate19.cpp - allows you to experiment with scope and lifetime
//Created/revised by Tyson Bowers on 7/26/13

#include <iostream>
using namespace std;

//declare global variable
//int number=0;

//function prototype
int getDoubleNumber(int);

int main()
{
	int number       = 0;
	int doubleNumber = 0;

	//get input item
	cout << "Enter a number: ";
	cin >> number;

	//double the number
	doubleNumber = getDoubleNumber(number);

	//display result
	cout << "Answer: " << doubleNumber << endl;

	system("pause");
	return 0;
}	//end of main function

//*****function definitions*****
int getDoubleNumber(int number)
{
	return number * 2;
}	//end of getDoubleNumber function

/*
Global Variable:
Enter a number: 5
Answer: 10
Press any key to continue . . .

Pass number into getDoubleNumber:
Enter a number: 5
Answer: 10
Press any key to continue . . .
*/