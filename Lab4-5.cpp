//Lab4-5.cpp - displays the amount of a raise
//Created/revised by Tyson Bowers on 6/12/13

#include <iostream>
using namespace std;

int main()
{
	//declare variables
	double salary = 350.0;
	double raise = 0.0;

	//calculate and display raise
	raise = salary * 3 / 100;
	cout << "Raise: $" << raise << endl;

	system("pause");
	return 0;
}	//end of main function
