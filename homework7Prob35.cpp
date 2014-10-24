//homework7Prob35.cpp - Fibonacci Numbers
//Created/revised by Tyson Bowers on 7/17/13

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	//declare for statement variables
	int a=0;
	int b=1;
	int c=0;
	int n=10;

	//declare while statement variables
	int x=0;
	int y=1;
	int z=0;
	int num=10;
	int temp=1;

//display Numbers
cout<<"First 10 Fibonacci numbers(for statement): ";
cout<<a<<" "<<b<<" ";

//begin for statement
for(int i=1;i<=n-2;i++)
{
c=a+b;
a=b;
b=c;
cout<< c <<" "; 
}//end for statement

//space after numbers
cout<<endl;

//display Numbers
cout<<"First 10 Fibonacci numbers(while statement): ";
cout<<x<<" "<<y<<" ";

//begin for statement
while (temp<=num-2)
{
	temp++;
	z=x+y;
	x=y;
	y=z;
	cout<< z <<" "; 
}//end while statement

//space after numbers
cout<<endl;
	system("pause");
	return 0;
}	//end of main function
