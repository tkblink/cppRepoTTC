//Homework8Prob15.cpp - Problem 15 Page 298
//Created/revised by Tyson Bowers on 7/22/13

#include <iostream>
using namespace std;

int main()
{
	for(int outer=2; outer<11; outer+=2)
	{
		for(int nested = 1; nested<=outer; nested += 1)
			cout << '*';
		//end for
		cout<<endl;
	} //end for

	system("pause");
	return 0;
}	//end of main function
/*
**
****
******
********
**********
Press any key to continue . . .
*/
