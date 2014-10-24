//Homework8Prob22.cpp - Problem 22 Page 300
//Created/revised by Tyson Bowers on 7/22/13

#include <iostream>
using namespace std;
#include <iomanip>
int main()
{
	for(int x=1; x<5; ++x)
	{
		cout<<x<<" ";
		for(int y=0; y<=9; ++y)
		{
			cout<<x*y<<" ";
		}//end for
		cout<<endl;
	} //end for

	system("pause");
	return 0;
}	//end of main function
/*
1 0 1 2 3 4 5 6 7 8 9
2 0 2 4 6 8 10 12 14 16 18
3 0 3 6 9 12 15 18 21 24 27
4 0 4 8 12 16 20 24 28 32 36
Press any key to continue . . .
*/