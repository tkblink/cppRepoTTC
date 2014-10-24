//TKB_Bowers_EGR270Exam2.cpp - displays Ohms Law Calculator
//Created/revised by Tyson Bowers on 7/29/13

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
  	//declare variable
	double amps= 0.0;
	double volts=0.0;
	double ohms=0.0;
	int num=0;

	while(num!=4)
	{
	//display menu:
	cout<<"Ohms Law Calculator "<<endl;
	cout<<"1. Calculate the Resistance in Ohms"<<endl;
	cout<<"2. Calculate Current in Amps"<<endl;
	cout<<"3. Calculate Voltage in Volts"<<endl;
	cout<<"4. Quit"<<endl<<endl;
	

	//enter input
	cout << "Enter the number of your choice: ";
	cin >> num;

	//display output
	if (num>0&&num<5)
	{
	switch (num)
	{
	case 1:	
			cout<<"What is the voltage in volts? "<<endl;
			cin>>volts;

			cout << "What is the current in amps? "<<endl;
			cin>>amps;

			ohms=volts/amps;
			cout<<fixed<<setprecision(3);
			cout<<"The Resistance is "<<ohms<<" ohms."<<endl;
			cout<<endl;
			break;			
	case 2:	
			cout<<"What is the voltage in volts? "<<endl;
			cin>>volts;

			cout << "What is the resistance in ohms? "<<endl;
			cin>>ohms;
			if(ohms>0)
			{
			amps=volts/ohms;
			cout<<fixed<<setprecision(3);
			cout<<"The current is "<<amps<<" amps."<<endl;
			cout<<endl;
			}
			else
			{
				cout<<"Input Error: The resistance in ohms must be positive."<<endl;
				cout<<endl;
			}
			break;			
	case 3:	
			cout << "What is the current in amps? "<<endl;
			cin>>amps;
			cout<<"What is the resistance in ohms? "<<endl;
			cin>>ohms;
			if(ohms>0)
			{
			volts=amps*ohms;
			cout<<fixed<<setprecision(3);
			cout<<"The voltage is "<<volts<<" volts."<<endl;
			cout<<endl;
			}
			else
			{
				cout<<"Input Error: The resistance in ohms must be positive."<<endl;
				cout<<endl;
			}
			break;			
	case 4:	
			cout<<"You have quit the program. "<<endl;
			cout<<endl;
			break;
	default: 
			cout << endl;
	} //end switch
	} //end if
	else
	{
		cout << "Input Error: Choose a number 1-4." << endl;
		cout<<endl;

	} //end else
}//end while

	system("pause");
	return 0;
}	//end of main function
/*
Desk Check:
Ohms Law Calculator
1. Calculate the Resistance in Ohms
2. Calculate Current in Amps
3. Calculate Voltage in Volts
4. Quit

Enter the number of your choice: 1
What is the voltage in volts?
120
What is the current in amps?
40
The Resistance is 3.000 ohms.

Ohms Law Calculator
1. Calculate the Resistance in Ohms
2. Calculate Current in Amps
3. Calculate Voltage in Volts
4. Quit

Enter the number of your choice: 2
What is the voltage in volts?
240
What is the resistance in ohms?
-1
Input Error: The resistance in ohms must be positive.

Ohms Law Calculator
1. Calculate the Resistance in Ohms
2. Calculate Current in Amps
3. Calculate Voltage in Volts
4. Quit

Enter the number of your choice: 2
What is the voltage in volts?
240
What is the resistance in ohms?
60
The current is 4.000 amps.

Ohms Law Calculator
1. Calculate the Resistance in Ohms
2. Calculate Current in Amps
3. Calculate Voltage in Volts
4. Quit

Enter the number of your choice: 3
What is the current in amps?
60
What is the resistance in ohms?
60
The voltage is 3600.000 volts.

Ohms Law Calculator
1. Calculate the Resistance in Ohms
2. Calculate Current in Amps
3. Calculate Voltage in Volts
4. Quit

Enter the number of your choice: -1
Input Error: Choose a number 1-4.

Ohms Law Calculator
1. Calculate the Resistance in Ohms
2. Calculate Current in Amps
3. Calculate Voltage in Volts
4. Quit

Enter the number of your choice: 4
You have quit the program.

Press any key to continue . . .
*/