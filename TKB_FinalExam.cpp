//TKB_FinalExam.cpp - Displays the contents of an 
//Array filled with 100 random numbers
//Created/revised by Tyson Bowers on 8/7/13

#include <iostream>
#include <ctime>
using namespace std;

//function prototype
void getRandomNumber(int lower, int upper, int &number);
int getNumberRange1(int numbers[], int numElements);
int getNumberRange2(int numbers2[], int numElements2);
void displayArray(int numbers[],int amount, int numz1, int numz2);

int main()
{
	//declare array and variables
	int random[100] = {0};
	int smallest = 100;
	int largest = 200;
	int randomNumber = 0;
	int sub=0;
	int numCount1 = 0; //count of numbers in range1
	int numCount2=0; //count of numbers in range2

	//intitialize rand function
	srand(static_cast<int>(time(0)));	

	//get 100 random numbers and assign to array
	while(sub<100)
	{
		getRandomNumber(smallest,largest,randomNumber);
		random[sub]=randomNumber;
		sub+=1;
	}

	//get the number count of numbers between 110 and 155
	numCount1= getNumberRange1(random,100);

	//get the number count of numbers greater than 160
	numCount2= getNumberRange2(random,100);

	//Display Array
	displayArray(random,100,numCount1,numCount2);

	system("pause");
	return 0;
}   //end of main function


//*****function definitions*****
void getRandomNumber(int lower, int upper, int &number)
{
//generate random integer from lower through upper
number = lower + rand() % (upper-lower+1);
}//end of getRandomNumber function

int getNumberRange1(int numbers[], int numElements)
{
	int x=0;
	int count = 0;

	do
	{
		if (numbers[x]>109 && numbers[x]<156)
		{
			count++;
		}
		x+=1;
	}while(numElements>x);

		return count;
}

int getNumberRange2(int numbers[], int numElements2)
{
	int count=0;

	for(int x=0; x<numElements2;x+=1)
	{
		if(numbers[x]>160)
		{
			count++;
		}
	}

	return count;
}

void displayArray(int numbers[],int amount, int numz1, int numz2)
{
	cout<<"The number of elements between 110 and 155:"<<endl;
	cout<<numz1<<endl;
	cout<<"The number of elements greater than 160:"<<endl;
	cout<<numz2<<endl<<endl;
	cout<<"Here are the 100 numbers in the array:"<<endl;

	for (int sub2=0; sub2<amount; sub2+=1)
	{
		cout<<"number "<<sub2+1<<": "<<numbers[sub2]<<endl;
	}
}
/*
The number of elements between 110 and 155:
46
The number of elements greater than 160:
39

Here are the 100 numbers in the array:
number 1: 165
number 2: 177
number 3: 117
number 4: 161
number 5: 193
number 6: 167
number 7: 140
number 8: 177
number 9: 170
number 10: 140
number 11: 173
number 12: 121
number 13: 113
number 14: 158
number 15: 161
number 16: 149
number 17: 176
number 18: 126
number 19: 128
number 20: 184
number 21: 152
number 22: 115
number 23: 125
number 24: 139
number 25: 194
number 26: 130
number 27: 199
number 28: 159
number 29: 189
number 30: 104
number 31: 180
number 32: 127
number 33: 117
number 34: 146
number 35: 106
number 36: 137
number 37: 145
number 38: 135
number 39: 180
number 40: 195
number 41: 160
number 42: 103
number 43: 187
number 44: 163
number 45: 100
number 46: 108
number 47: 192
number 48: 127
number 49: 105
number 50: 153
number 51: 154
number 52: 173
number 53: 173
number 54: 134
number 55: 150
number 56: 144
number 57: 110
number 58: 132
number 59: 151
number 60: 146
number 61: 126
number 62: 175
number 63: 116
number 64: 166
number 65: 109
number 66: 186
number 67: 191
number 68: 188
number 69: 159
number 70: 162
number 71: 169
number 72: 164
number 73: 120
number 74: 171
number 75: 176
number 76: 126
number 77: 157
number 78: 200
number 79: 114
number 80: 122
number 81: 123
number 82: 137
number 83: 180
number 84: 193
number 85: 120
number 86: 186
number 87: 113
number 88: 129
number 89: 105
number 90: 192
number 91: 135
number 92: 119
number 93: 153
number 94: 169
number 95: 104
number 96: 120
number 97: 103
number 98: 164
number 99: 141
number 100: 152
Press any key to continue . . .
*/