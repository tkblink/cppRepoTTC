//Lab11-1.cpp - calculates the total sales
//Created/revised by Tyson Bowers on 8/4/13

#include <iostream>
using namespace std;

int main()
{	
    //declare arrays and variable
	int domestic[6] = {12000, 45000, 32000, 
					   67000, 24000, 55000};
	int international[6] = {10000, 56000, 42000, 
							23000, 12000, 34000};
	int totalSales = 0;	//accumulator
	int totalDomestic =0;//accumulator
	int totalInternational=0;//accumulator
	int monthSales[6]={0};

	//accumulate sales
	for (int x = 0; x < 6; x += 1)
	{
		totalDomestic +=domestic[x];
		totalInternational += international[x];
		totalSales += domestic[x] + international[x];
		monthSales[x]=domestic[x] + international[x];
	}//end for

	//display total domestic sales, total
	//international sales, and total sales
	cout<<"Total domestic sales: $"<<totalDomestic<<endl;
	cout<<"Total international sales: $"<<totalInternational<<endl;
	cout << "Total sales: $" << totalSales << endl;

	//display total sales made in each month
	for(int x=0; x<6; x+=1)
		cout<<"Month "<<x+1<<" sales: $"<<monthSales[x]<<endl;
	//end for

	system("pause");
    return 0;
}   //end of main function
/*
Total domestic sales: $235000
Total international sales: $177000
Total sales: $412000
Month 1 sales: $22000
Month 2 sales: $101000
Month 3 sales: $74000
Month 4 sales: $90000
Month 5 sales: $36000
Month 6 sales: $89000
Press any key to continue . . .
*/