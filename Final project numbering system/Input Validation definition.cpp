
#include <iostream>
# include<string>
#include<fstream>
#include <cstdlib>
# include<iomanip>
# include"Input validationHeader.h"
# include "numSystemConversionHeader.h"
using namespace std;

int getPositiveInteger()
{
	int userInput = getInteger();

	while (userInput < 0)
	{
		cout << "\tYour number must be greater than or equal to 1. Try again: ";
		userInput = getInteger();
	}

	return userInput;
}

int getIntInrange(int min, int max)
{
	int userInput = getPositiveInteger();
	while (userInput > max || userInput< min)
	{
		cout << "\tYour number must be less than or equal to " << max << ".\n"
			<< "\tTry Again: ";
		userInput = getPositiveInteger();
	}
	return userInput;
}

double getNumber()   //   DONE
{
	double number;
	while (!(cin >> number))
	{
		cout << "\tPlease no. Inapropriate characters! Try Again: ";
		cin.clear(); cin.ignore(80, '\n');

	}
	cin.ignore(80, '\n');
	return number;
}


// This function ask for integer if its double/ character it will ask again for integer 
int getInteger()     //   DONE
{
	double userInput = getNumber();

	while (int(userInput) != userInput)
	{
		cout << "\tYour number is not an integer! Try Again: ";
		userInput = getNumber();
	}

	return int(userInput);
}

int getBaseInRange(int min, int max)
{
	int userInput = getInteger();

	while (userInput < min || userInput > max)
	{
		cout << "\tInvalid base. Base must be ";
		if (userInput > max)
			cout << " <= " << max;
		else
			cout << " >=" << min;
		cout << " Please try again: ";  // what if less than teh min
		userInput = getInteger();
	}

	return userInput;
}


//##############################################################3
