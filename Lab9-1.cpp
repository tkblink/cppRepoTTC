//Lab9-1.cpp - simulates a number guessing game
//Created/revised by Tyson Bowers on 7/26/13

#include <iostream>
#include <ctime>
using namespace std;

//function prototype
int getRandomNumber(int lower, int upper);

int main()
{
	//declare variables
	int smallest = 0;
	int largest = 0;
	int randomNumber = 0;
	int numberGuess  = 0;

	//get a range of numbers
	cout<<"Smallest integer: ";
	cin>>smallest;
	cout<<"Largest integer: ";
	cin>>largest;
	cout<<endl;

	randomNumber = getRandomNumber(smallest,largest);

	//get first number guess from user
	cout << "Guess a number within the range of your smallest and largest number: ";
	cin >> numberGuess;

	while (numberGuess != randomNumber)
	{
		int x=1;
		while (x<4)
		{
		cout << "Sorry, guess again: ";
		cin >> numberGuess;
		x++;
		}//end while
numberGuess=randomNumber;
	}	//end while

	cout << endl << "The number was " 
		<< randomNumber << "." << endl;
	
	system("pause");
	return 0;
}   //end of main function


//*****function definitions*****
int getRandomNumber(int lower, int upper)
{
int randInteger = 0;
//generate random integer from lower through upper
randInteger = lower + rand() % (upper-lower+1);
return randInteger;
}//end of getRandomNumber function

/*
Guess a number from 1 through 10: 1
Sorry, guess again: 2
Sorry, guess again: 3
Sorry, guess again: 4

The number was 2.
Press any key to continue . . .


Smallest integer: 1
Largest integer: 16

Guess a number within the range of your smallest and largest number: 12
Sorry, guess again: 16
Sorry, guess again: 8
Sorry, guess again: 4

The number was 10.
Press any key to continue . . .
*/