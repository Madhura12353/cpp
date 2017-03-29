
#include<iostream>
#include <cstdio>
using namespace std;

int getInteger();
int getIntegerInRange();
char convert10tob(int N, int b);
char displeyFinalAnswer(char remainderArray[], int logicalSize);
int main()
{


	int userInput, baseNumber;
	cout << "Enter the integer to convert(N): ";
	userInput = getInteger();

	cout << "Enter the base <= N: ";
	baseNumber = getIntegerInRange();

	if (userInput != 0)
	{
		cout << "Conversion Done " << endl;
		convert10tob(userInput, baseNumber);
	}
	else
		cout << "0" << endl;

	system("pause");;
}


char convert10tob(int inputNumber, int baseNumber)
{
	char digits[] = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	int remainder, division, index, logicalSize = 0;
	char letter;
	const int ARRAY_LENGTH = 70;
	char remainderArray[ARRAY_LENGTH];


	for (int i = 0; i < ARRAY_LENGTH && inputNumber != 0; i++)
	{
	remainderArray[i] = digits[inputNumber % baseNumber];
	inputNumber /= baseNumber;
	if (inputNumber == 0)
	remainderArray[i + 1] = '\0';
	}
	logicalSize = strlen(remainderArray);	
    displeyFinalAnswer(remainderArray, logicalSize);
	return 0;
	}


char convert10tob(int inputNumber, int baseNumber)
{
	char digits[] = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	const int ARRAY_LENGTH = 70;
	char remainderArray[ARRAY_LENGTH];

	for (int i = 0; i < ARRAY_LENGTH && inputNumber != 0; i++)
	{
		remainderArray[i] = digits[inputNumber % baseNumber];
		inputNumber /= baseNumber;
		if (inputNumber == 0)
			remainderArray[i + 1] = '\0';
	}

	displeyFinalAnswer(remainderArray, strlen(remainderArray));
	return 0;
}

char conversion( int input)
{
	char finalChar;

	if (input <= 9 || input >= 0)
		finalChar = input;
	else if (input > 9 )
		finalChar = 10+( 'A'- input)

}


	char displeyFinalAnswer(char remainderArray[], int logicalSize)
	{
		
		char finalanswer[30];
		//cout << "\n character array of before final answer is: " << remainderArray<<endl;
	for (int i = (logicalSize - 1),count = 0; i >= 0; i--,count++)
	{
		finalanswer[count] = remainderArray[i];
		cout << remainderArray[i];
	}
	finalanswer[logicalSize] = '\0';
	//cout << "\n character array of final answer is: " << finalanswer;
	return finalanswer[30];
	}



double getNumber()   //   DONE
{
	double number;
	while (!(cin >> number))
	{
		cout << "        Please no letter. Try Again: ";
		cin.clear(); cin.ignore(80, '\n');

	}
	cin.ignore(80, '\n');
	return number;
}


// This function ask for integer if its double/ character it will ask again for integer 
int getInteger()     //   DONE
{
	double userInput = getNumber();
	while (int(userInput) != userInput ) 
	{
		cout << "\t Your number is not an integer!";
		userInput = getNumber();
	}

	return int(userInput);
}

int getIntegerInRange()
{
	int userInput = getInteger();

	while (userInput < 2 || userInput >36)
	{
		cout << "        Invalid base. Base must be <= 36. Please try again:";
		userInput = getInteger();
	}

	return userInput;
}
