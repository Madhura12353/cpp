 #include <iostream>
 #include "validation header.h"
 using namespace std;

void printBanner()     //   DONE
{
	cout
		<< "\n          This is program demonstrates how to use while () loop    \n"
		<< "                        to validate input                            \n"
		<< "                            Madhura                                \n\n";

	cout
		<< " **************************************************************************\n"
		<< " *  ALL parts should use the SAME cookie cutter                           *\n"
		<< " *                                -instructions are on digication.        *\n"
		<< " *  Only the condition will be different.                                 *\n"
		<< " *  Consider using the conditional operator to customize your feedback    *\n"
		<< " *  INSIDE the loop.                                                      *\n"
		<< " **************************************************************************\n\n";
}
// This function should return anything except letter.
// If user enters letter, it will keep on asking user input until user enters anything except letter.

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
	// cin.ignore(80, '\n');
	// cin >> userinput;
	while (int(userInput) != userInput)
	{
		cin.clear(); //cin.ignore(80, '\n');
		cout << "\t    " << userInput << " is not an integer. Try Again: ";
		//cin >> userinput; cin.ignore(80, '\n');
		userInput = getNumber();
	}

	return int(userInput);
}
//This function is validating a multilple of 5 if user enters letter it ask user again to enter valid input
//if input is not multiple of 5 it ask user again to enter valid input
int getMultipleOf(int input)     //   DONE
{
	double userInput = getNumber();
	while (static_cast<int>(userInput) != userInput || static_cast<int>(userInput) % input != 0)  //  done
	{
		cout << "\t" << userInput << " is not an multiple of 5. Try again.";
		userInput = getNumber();

	}
	return int(userInput);
}

// This function ask the user to eneter letter if userinput is other that letter then it asks the user to try untill 
//it gets valid input

char getLetter()   //    DONE
{
	char inputLetter;
	cin >> inputLetter; cin.ignore(80, '\n');

	while (inputLetter < 'A' || inputLetter > 'Z' && inputLetter < 'a' || inputLetter > 'z')  // done
	{
		cout << "\t" << inputLetter << " is not letter.Try again ";
		cin >> inputLetter; cin.ignore(80, '\n');
	}
	return (inputLetter);
}
//this function validate the user input is in given range or not if it is not in range
//then it ask user to enter input which is in range

double getNumInRange(int min, int max)     //   DONE
{
	double userinput = getNumber();

	while ((userinput < min) || (userinput > max))               //   done
	{
		cout << "\t" << userinput << " is NOT in the range [" << min << " , " << max << "] . Try again.";
		userinput = getNumber();
	}
	return userinput;
}

int getPerfectSquare()  //   DONE
{
	double input = getNumber();

	while (input < 0 || (sqrt(input)) != int(sqrt(input)))   // done
	{
		cout << (input < 0 ? "    Perfect squares must be positive numbers, so" : " ")
			<< "     " << input << " is not prfrct squre.Try again: ";
		input = getNumber();
	}
	return int(input);
}

