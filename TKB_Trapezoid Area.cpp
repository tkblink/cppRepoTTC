// busted_ 2013sp.cpp
// Tyson Kyle Bowers
//EGR 270 section 1
//Test 1
//6/26/13

#include <iostream>
#include <iomanip>
using namespace std;


int main()
{
	 //declare variables
	 double base1 = 0.0;
	 double base2 = 0.0;
	 double height = 0.0;
	 double area = 0.0;

	 //enter input items
	 cout << "Enter the length of the top of trapezoid in feet: ";
	 cin >> base1;
	 cout << "Enter the length of the bottom of trapezoid in feet: ";
	 cin >> base2;
	 cout << "Enter the height of the trapezoid in feet: ";
	 cin >> height;

	 //calculate volume
	area = (base1 + base2) * height/2;

	 //display output item
	 cout << fixed << setprecision(2);
	 cout << "area in square feet): " << area << endl;
	 system("pause");
	 return 0;
}
 //end of main function
/*
Enter the length of the top of trapezoid in feet: 4
Enter the length of the bottom of trapezoid in feet: 8
Enter the height of the trapezoid in feet: 12
area in square feet): 72.00
Press any key to continue . . .

Enter the length of the top of trapezoid in feet: 3
Enter the length of the bottom of trapezoid in feet: 6
Enter the height of the trapezoid in feet: 9
area in square feet): 40.50
Press any key to continue . . .
*/