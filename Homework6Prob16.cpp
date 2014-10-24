//Homework6Prob16.cpp - displays the answer
//after a math operation has been performed 
//by two integers
//Created/revised by Tyson Bowers on 7/15/13

#include <iostream>
using namespace std;

int main()
{
  	//declare variable
	char letter = ' ';
	int num1 = 0;
	int num2 = 0;
	int answer = 0;

	//enter input
	cout << "Enter the letter of the operation you wish to perform. " << endl;
	cout << "Enter A for add, S for subtract, M for multiply, and D for divide: " << endl;
	cin >> letter;

	letter = toupper(letter);

	//display output
	
	switch (letter)
	{
	case 'A':	
		cout << "Enter the first integer: ";
		cin >> num1;
		cout << "Enter the second integer: ";
		cin >> num2;
		answer = num1 + num2;
		cout << "Answer: " << answer << endl;
			break;			
	case 'S':	
		cout << "Enter the first integer: ";
		cin >> num1;
		cout << "Enter the second integer: ";
		cin >> num2;
		if (num1 > num2)
		answer = num1 - num2;
		else
			answer = num2 - num1;
	cout << "Answer: " << answer << endl;
			break;			
	case 'M':	
		cout << "Enter the first integer: ";
		cin >> num1;
		cout << "Enter the second integer: ";
		cin >> num2;
		answer = num1 * num2;
		cout << "Answer: " << answer << endl;
			break;			
	case 'D':	
		cout << "Enter the first integer: ";
		cin >> num1;
		cout << "Enter the second integer: ";
		cin >> num2;
		if (num1>num2)
			answer = num1/num2;
		else
			answer = num2/num1;
		cout << "Answer: " << answer << endl;
			break;	
	default: 
			cout << "Error: You must choose one of the following letters: A, S, M, or D." << endl;
	} //end switch
	
	system("pause");
	return 0;
}	//end of main function
/*
Enter the letter of the operation you wish to perform.
Enter A for add, S for subtract, M for multiply, and D for divide:
A
Enter the first integer: 10
Enter the second integer: 20
Answer: 30
Press any key to continue . . .

Enter the letter of the operation you wish to perform.
Enter A for add, S for subtract, M for multiply, and D for divide:
a
Enter the first integer: 45
Enter the second integer: 15
Answer: 60
Press any key to continue . . .

Enter the letter of the operation you wish to perform.
Enter A for add, S for subtract, M for multiply, and D for divide:
S
Enter the first integer: 65
Enter the second integer: 50
Answer: 15
Press any key to continue . . .

Enter the letter of the operation you wish to perform.
Enter A for add, S for subtract, M for multiply, and D for divide:
s
Enter the first integer: 7
Enter the second integer: 13
Answer: 6
Press any key to continue . . .

Enter the letter of the operation you wish to perform.
Enter A for add, S for subtract, M for multiply, and D for divide:
G
Error: You must choose one of the following letters: A, S, M, or D.
Press any key to continue . . .

Enter the letter of the operation you wish to perform.
Enter A for add, S for subtract, M for multiply, and D for divide:
M
Enter the first integer: 10
Enter the second integer: 20
Answer: 200
Press any key to continue . . .

Enter the letter of the operation you wish to perform.
Enter A for add, S for subtract, M for multiply, and D for divide:
d
Enter the first integer: 45
Enter the second integer: 15
Answer: 3
Press any key to continue . . .

Enter the letter of the operation you wish to perform.
Enter A for add, S for subtract, M for multiply, and D for divide:
d
Enter the first integer: 50
Enter the second integer: 100
Answer: 2
Press any key to continue . . .
*/