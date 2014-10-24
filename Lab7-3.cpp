//Lab7-3.cpp - 
//displays the total points earned and grade
//Created/revised by Tyson Bowers on 7/15/13

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{	
    //declare variables
	int numberOfGrades = 0;
	int score = 0;  
	int totalPoints = 0;//accumulator
    char grade = ' ';
 
    //get first score
	cout << "First score (-1 to stop): ";
    cin >> score;
	
	while (score != -1)
	{
		//update accumulator
		//then get another score
		numberOfGrades +=1;
		totalPoints += score;
		cout << "Next score (-1 to stop): ";
		cin >> score;
	}	//end while
	
	//determine grade
	if (totalPoints >= 315)
		grade = 'A';
	else if (totalPoints >= 280)
		grade = 'B';
	else if (totalPoints >= 245)
		grade = 'C';
	else if (totalPoints >= 210)
		grade = 'D';
	else
		grade = 'F';
	//end if

	//display the total points and grade
	cout << "Total number of grades: "
		 << numberOfGrades << endl;
	cout << "Total points earned: "
		 << totalPoints << endl;
	cout << "Grade: " << grade << endl;

	system("pause");
    return 0;
}   //end of main function
/*
First score (-1 to stop): 45
Next score (-1 to stop): 40
Next score (-1 to stop): 41
Next score (-1 to stop): 96
Next score (-1 to stop): 89
Next score (-1 to stop): -1
Total number of grades: 5
Total points earned: 311
Grade: B
Press any key to continue . . .

First score (-1 to stop): 25
Next score (-1 to stop): 500
Next score (-1 to stop): 38
Next score (-1 to stop): -500
Next score (-1 to stop): 50
Next score (-1 to stop): 64
Next score (-1 to stop): 78
Next score (-1 to stop): -1
Total number of grades: 7
Total points earned: 255
Grade: C
Press any key to continue . . .
*/