// This lab is validating input by using While loop
// Ptogram Title: Input validation lab
// Programmer: Madhura Kulkarni
// Last modified: 10/24/2016

#include <iostream>
using namespace std;

int main()
{
	double input = 0;
	char inputLetter;
	//system("color b3");
	system("title Input validation lab by Madhura");

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

	while (true)
	{
		cout << "Part 1      (Validate an INTEGER)";
		//cin >> input;
		cout << "\n  ***     Enter an integer:";
		while ((!(cin >> input) || (int(input) != input)))
		{

			while (!(cin))
			{
				cout << "          Please no letter:";
				cin.clear(); cin.ignore(80, '\n');
				cin >> input;
			}

			while (((cin)) && (int(input) != input))      //  done
			{

				cout << "\t    " << input << " is not an integer. Try Again: ";
				cin.clear(); cin.ignore(80, '\n'); 
				cin >> input;
				//cin.clear(); cin.ignore(80, '\n');
			}
			cin.clear(); cin.ignore(80, '\n');
			cout << "          Please no letter:";
		}
		cout << "Good " << input << " is an integer! \n\n";
		//***************************************************************************************
		cout << "Part 2 (validate a multiple of 5)\n";

		cout << "  ***  Enter a multiple of 5:";
		while (!(cin >> input))
		{
			cout << "          Please no letter:";
			cin.clear(); cin.ignore(80, '\n');

		}
		while (static_cast<int>(input) != input || static_cast<int>(input) % 5 != 0)  //  done
		{
			cout << "\t" << input << " is not an multiple of 5. Try again.";
			cin >> input; cin.ignore(80, '\n');
		}

		cout << "Good " << input << " is multilple of 5\n\n ";
		//***********************************************************************************
		cout << "Part 3 (Validate a letter)\n";

		cout << "  ***  Enter a letter:";
		cin >> inputLetter; cin.ignore(80, '\n');

		while (inputLetter < 'A' || inputLetter > 'Z' && inputLetter < 'a' || inputLetter > 'z')  // done
		{
			cout << "\t" << inputLetter << " is not letter.Try again ";
			cin >> inputLetter; cin.ignore(80, '\n');
		}
		cout << "Good! " << inputLetter << " is a letter\n\n";
		//***************************************************************************************
		cout << "Part 4 (validate a number between [0, 100])\n";

		cout << "  ***  Enter a number between 0 and 100 INCLUSIVE:";
		cin >> input; cin.ignore(80, '\n');

		while (input < 0 || input > 100)                 //   done
		{
			cout << "\t" << input << " is NOT in the range [0, 100]. Try again.";
			cin >> input; cin.ignore(80, '\n');
		}
		cout << "Good!" << input << " is a number between 0 and 100!\n\n";
		//*********************************************************************************************
		cout << "Part 5 (validate a PERFECT SQUARE)\n"
			<< "  Make sure you do not call the sqrt function with an invalid argument\n"
			<< "  since that may create a run time error in some compilers.\n"
			<< "  Give approprate error message if the number is negative.\n"
			<< "  NOTE: This still followes the \"cookie cutter\ format\n"
			<< "  given in the instructions page.\n\n"
			<< "  ***  Enter a perfect square : ";
		cin >> input; cin.ignore(80, '\n');

		while (input < 0 || (sqrt(input)) != int(sqrt(input)))   // done
		{
			cout << (input < 0 ? " Perfect squares must be positive numbers, so" : " ")
				<< " " << input << " is not prfrct squre.Try again: ";
			cin >> input; cin.ignore(80, '\n');
		}
		cout << "Good! " << input << " is perfect square\n\n";
		cout << "           *******************************                \n\n\n";
	}

	system("pause");
}
