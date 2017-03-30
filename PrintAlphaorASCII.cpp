

// This program prints whole ASCII table or only digits or only capital letters or only small letters as per the user's requirement, n per line.
// Print Alphabet or ASCII, n per line.
// Programmer: Yellow Group(Madhura Kulkarni, Himanshu Sharma and Uttam Bavarva)
// Last modified: 11/07/2016 10:44PM

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	system("title Print the WHOLE ASCII table or the Alphabet n characters per line by Yellow Group.");
	system("color E0");

	int choice = 0, perLine, start, end;
	const int
		WIDTH_1 = 4,
		WIDTH_2 = 7,
		MIN_PER_LINE = 1,
		MAX_PER_LINE = 4;


	cout
		<< "\n"
		<< "                  Print the WHOLE ASCII table or the Alphabet                       \n"
		<< "                             n characters per line                                  \n"
		<< "                                by Yellow Group                                    \n\n\n";

	while (choice != 5)
	{
		cout
			<< "Please enter your choice:              \n"
			<< "        1] Print the whole ASCII table \n"
			<< "        2] Print the capital letters   \n"
			<< "        3] Print the lower letters     \n"
			<< "        4] Print the digits            \n"
			<< "        5] Exit the program            \n";

		cout << "Choice: ";
		cin >> choice;   cin.ignore(80, '\n');

		switch (choice)
		{

		case 1: start = 0;       end = 255;      break;
		case 2: start = 'A';     end = 'Z';      break;
		case 3: start = 'a';     end = 'z';      break;
		case 4: start = '0';     end = '9';      break;
		case 5: cout << "\nThank you for using printing with us. Please hit ENTER to end the program. ";
			cin.get();   continue;
		default: cout << "\n  ***   Invalid choice.  \a\n\n";   continue;
		}

		cout << "\nHow many characters do you want to print per line? ";
		cin >> perLine;    cin.ignore(80, '\n');

		while (perLine < MIN_PER_LINE || perLine > MAX_PER_LINE)
		{
			cout
				<< "        Your number must be ";
			if (perLine < MIN_PER_LINE)
				cout << "greater than or equal to " << MIN_PER_LINE;
			else
				cout << "less than or equal to " << MAX_PER_LINE;

			cout << ".\n        Try again: ";
			cin >> perLine;   cin.ignore(80, '\n');
		}

		for (int i = start; i <= end; )
		{
			for (int j = 1; j <= perLine && i <= end; j++, i++)
			{
				cout << setw(WIDTH_1) << i << setw(WIDTH_2);
				switch (i)
				{
				case 0:  cout << "NULL";   break;
				case 7:  cout << "\\a";    break;
				case 8:  cout << "\\b";    break;
				case 9:  cout << "\\t";    break;
				case 10: cout << "\\n";    break;
				case 11: cout << "\\v";    break;
				case 13: cout << "\\r";    break;
				default: cout << char(i);  break;
				}
				if (j < perLine)
					cout << "   ||  ";
			}
			cout << "\n";
		}
		cout << "\n\n";
	}
}
