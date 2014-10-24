//Lab8-4.cpp - displays code
//Created/revised by Tyson Bowers on 7/17/13

#include <iostream>
using namespace std;

int main()
{
	//declare variables
	int number = 1;
	
	while(number<3)
	{
		cout<<number<<' ';
		for(int x=1; x<=4; x+=1)
			cout<<number+x<<' ';
		//end for
		number +=1;
		cout<<endl;
	}//end while

	system("pause");
	return 0;
}	//end of main function
/*Desk Check:
1 2 3 4 5
2 3 4 5 6
Press any key to continue . . .
*/