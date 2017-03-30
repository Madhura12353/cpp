// This lab is validating input by using While loop and function
// Ptogram Title: Input validation lab using function
// Programmer: Madhura Kulkarni
// Last modified: 11/14/2016

#include <iostream>
#include "validation header.h"
using namespace std;


int main()
{
	int input = 0;
	double userInput;
	char inputLetter;
	const int MIN = 0,
		MAX = 100;

	//double inputLetter;
	system("color E0");
	system("title Input validation lab by Madhura");

	printBanner();

	while (true)
	{
		cout << "Part 1  (Validate an INTEGER)";    //   DONE

		cout << "\n  ***   Enter an integer: ";
		input = getInteger();
		cout << "Good " << input << " is an integer! \n\n";

		//***********************************************************************************
		cout << "Part 2 (validate a multiple of 5)\n";     //   DONE

		cout << "  ***   Enter a multiple of 5: ";
		input = getMultipleOf(5);
		cout << "Good this is multiple of 5!\n";

		//***********************************************************************************
		cout << "\nPart 3 (Validate a letter)\n";      //   DONE

		cout << "  ***   Enter a letter: ";
		inputLetter = getLetter();
		cout << "Good! " << inputLetter << " is a letter!\n";
		//************************************************************************************
		cout << "\nPart 4 (validate a number between [" << MIN << "," << MAX << "])\n ";    //   DONE

		cout << "  ***   Enter a number between " << MIN << " and " << MAX << " INCLUSIVE: ";
		userInput = getNumInRange(MIN, MAX);
		cout << "Good!" << userInput << " is a number between" << MIN << " and " << MAX << " !\n\n";

		//*************************************************************************************
		cout << "Part 5 (validate a PERFECT SQUARE)\n"  //   DONE
			<< "  Make sure you do not call the sqrt function with an invalid argument\n"
			<< "  since that may create a run time error in some compilers.\n"
			<< "  Give approprate error message if the number is negative.\n"
			<< "  NOTE: This still followes the \"cookie cutter\" format\n"
			<< "  given in the instructions page.\n\n";

		cout << "  ***  Enter a perfect square : ";
		input = getPerfectSquare();
		cout << "Good!" << input << " is perfect square!\n\n";
		cout << "           *******************************                \n\n\n";
	}
	system("pause");
}

