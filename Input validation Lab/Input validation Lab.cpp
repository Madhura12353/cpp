// 
//
//
//

#include <iostream>
#include <iomanip>
#include <string>
#include <cmath>

using namespace std;

int main()
{
	//system("color b3");
	system("title Input validation lab by Madhura");

	cout << "          This is program demonstrates how to use while () loop    \n"
		<< "                        to validate input                          \n"
		<< "                            Madhura                                \n\n"

		<< " **************************************************************************\n"
		<< " *  ALL parts should use the SAME cookie cutter                           *\n"
		<< " *                                -instructions are on digication.        *\n"
		<< " *  Only the condition will be different.                                 *\n"
		<< " *  Consider using the conditional operator to customize your feedback    *\n"
		<< " *  INSIDE the loop.                                                      *\n"
		<< " **************************************************************************\n\n";

	double input = 0;
	char inputLetter;
	while (true) {

			//cout << setprecision(1) << fixed;
		cout << "Part 1 (Validate an INTEGER)"
			<< "\n ***    Enter an integer:";

		cin >> input;

		while ((!cin) || (!(static_cast<int>(input) == input)))
		{

			cout << ((!(cin)) ? "\tPlease no letter " : "\tthis is not an integer");


			cin.clear(); cin.ignore(80, '\n');
			cin >> input;
		}
		cout << "Good " << static_cast<int>(input) << " is an integer!\n\n";
		//*********************************************************************************************************************
		cout << "Part 2 (validate a multiple of 5)\n"
			<< "***  Enter a multiple of 5:";
		cin.clear(); cin.ignore(80, '\n');
		cin >> input;
		while ((!(cin)) || (!(static_cast<int>(input) == input)) || static_cast<int>(input) % 5 != 0)
		{
			cout << ((!cin) ? "please no letter" : "This is not an multiple of 5. Try again.");
			cin.clear(); cin.ignore(80,'\n');
			cin >> input;
		}
		
		cout << "Good " << static_cast<int>(input) << " is multilple of 5\n\n ";
		//*********************************************************************************************************************

		cout << "Part 3 (Validate a letter)\n"
			<< "Enter a letter:";
		cin.clear(); cin.ignore(80, '\n');
		cin >> inputLetter;
		

		while (!((inputLetter >= 'A' && inputLetter <= 'Z') || (inputLetter >= 'a' && inputLetter <= 'z')))
		{
			cout << inputLetter << " is not letter.Try again";
			cin.clear(); cin.ignore(80, '\n');
			cin >> inputLetter;
		}



/*		while (!isalpha(inputLetter))
		{
			cout << inputLetter << "is not letter.Try again";
			cin.clear(); cin.ignore(80, '\n');
			cin >> inputLetter;
		}*/
		cout << "Good! " << inputLetter << " is a letter\n\n";
		//****************************************************************************************************************************
		
		cout << "Part 4 (validate a number between [0, 100])\n"
			<< "***  Enter a number between 0 and 100 INCLUSIVE:";
		 
		cin.clear(); cin.ignore(80, '\n');
		cin >> input;

		while ((!cin) || ( input < 0) || (input > 100))
			
		{
			cout << ((!(cin)) ? "Please no letter" : "is NOT in the range [0, 100]. Try again.");
            cin.clear(); cin.ignore(80,'\n');
			cin >> input;
		}
		cout << "Good!" << input << " is a number between 0 and 100!\n\n";
		//**********************************************************************************************************************
		cout << "Part 5 (validate a PERFECT SQUARE)\n"
			<< " Make sure you do not call the sqrt function with an invalid argument\n"
			<<" since that may create a run time error in some compilers.\n"
			<<" Give approprate error message if the number is negative.\n"
			<<" NOTE: This still followes the \"cookie cutter\ format\n"
			<<" given in the instructions page.\n"
			<<" ***  Enter a perfect square : ";

		cin.clear(); cin.ignore(80, '\n');
		cin >> input;

		while ((!cin) || (input<0) ||(!(static_cast<int>(input) == input)||static_cast<int>(sqrt(input))!= sqrt(input)))
		{
		
			cout << ((!cin) ? "Please no letter" :
				(input < 0 ? (" Perfect squares must be positive numbers, so " + to_string(input) + " is NOT a perfect square.") : to_string(input) + " is NOT a perfect square."));

  
			cin.clear(); cin.ignore(80, '\n');
			cin >> input;
		}
	  
		
		cout << "Good! " << static_cast<int>(input) << "is perfect square\n";

	}

	system("pause");
}
