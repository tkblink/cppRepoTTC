//Lab11-3.cpp 
//Stores monthly rainfall amounts in an array
//Displays the monthly rainfall amounts or
//the total rainfall amount
//Created/revised by Tyson Bowers on 8/4/13

#include <iostream>
using namespace std;

//fuction prototypes
void displayMonthly(double rain[], int numElements);
double getTotal(double rainAmt[], int elements);

int main()
{
	//declare array and variable
	double rainfall[12] = {0.0};
	int choice =0;
	double totalRainfall=0.0;

	//get rainfall amounts
	for (int x=0; x<12; x+=1)
	{
		cout<<"Enter rainfall for month "<<x+1<<": ";
		cin>>rainfall[x];
	}//end for

	do
	{
		//display menu and get menu choice
		cout<<endl;
		cout<<"1 Display monthly amounts"<<endl;
		cout<<"2 Display total amount"<<endl;
		cout<<"3 End program"<<endl;
		cout<<"Enter your choice: ";
		cin>>choice;

		if(choice !=1 && choice != 2 && choice !=3)
			cout<<"Invalid Choice."<<endl<<endl;
			else
			{
			//call appropriate function or end program
			if(choice == 1)
				displayMonthly(rainfall,12);
			else
			
				if(choice==2)
				{
					totalRainfall=getTotal(rainfall,12);
					cout<<"Total rainfall: "<<totalRainfall<<endl;
				}//end if
				//end if
			}//end if
		}while (choice!=3);
		
	system("pause");
	return 0;
}//end of main function

//*****function definitions*****
	void displayMonthly(double rain[], int numElements)
	{
		cout<< "Monthly rainfall amounts:"<<endl;
		for(int x=0; x<numElements;x+=1)
			cout<<rain[x]<<endl;
		//end for
	}//end of displayMonthly function

	double getTotal(double rainAmt[], int elements)
	{
		double total =0.0;
		for(int x=0; x<elements; x+=1)
			total = total + rainAmt[x];
		//end for
		return total;
	}//end of getTotal function

	/*
	Enter rainfall for month 1: 5
Enter rainfall for month 2: 6
Enter rainfall for month 3: 7
Enter rainfall for month 4: 8
Enter rainfall for month 5: 9
Enter rainfall for month 6: 10
Enter rainfall for month 7: 11
Enter rainfall for month 8: 12
Enter rainfall for month 9: -1
Enter rainfall for month 10: 20
Enter rainfall for month 11: 11
Enter rainfall for month 12: 1

1 Display monthly amounts
2 Display total amount
3 End program
Enter your choice:
1
Monthly rainfall amounts:
5
6
7
8
9
10
11
12
-1
20
11
1

1 Display monthly amounts
2 Display total amount
3 End program
Enter your choice: 2
Total rainfall: 99

1 Display monthly amounts
2 Display total amount
3 End program
Enter your choice: 3
Press any key to continue . . .
	*/