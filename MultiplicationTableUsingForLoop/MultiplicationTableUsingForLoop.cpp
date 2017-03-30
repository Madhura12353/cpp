// This lab prints multiplication table
// Title: Multiplication Table
// Program by Mdhura kulkarni
// Last modified: 11:45 PM


# include <iostream>
# include <iomanip>
using namespace std;

int main()
{

	int input, row = 1, column = 1;
	char DOTTED_LINE = 178;
	const int
		MIN_NUMBER = 1,
		MAX_NUMBER = 12;

	system("color b3");
	system("title Multiplication table using for loop");


	cout
		<< "\n                      Print the Multiplication Table                     \n"
		<< "                           up to a user defined limit                      \n"
		<< "                                 By Madhura                             \n\n";

	while (true)
	{

		cout << "\nUp to what number do you want to print the multiplication table? ";
		cin >> input; cin.ignore(80, '\n');

		while (input > MAX_NUMBER || input < MIN_NUMBER)
		{
			cout << "        Your number must be ";

			if (input > MAX_NUMBER)
				cout << "less than or equal to " << MAX_NUMBER << "\n";
			else
				cout << "greater than or equal to " << MIN_NUMBER << "\n";
			cout << "        Try again: ";
			cin >> input; cin.ignore(80, '\n');
		}
		// This code prints the header of the table
		cout << "     ";
		for (int row = 1; row <= input; row++)
			cout << setw(6) << row;

		cout << endl;
		// This code prints the dotted line after the header line
		cout << "    " << DOTTED_LINE;
		for (int row = 1; row <= input * 6; row++)
			cout << DOTTED_LINE;

		cout << endl;
		// This code prints the column and the actual table
		for (row = 1; row <= input; row++)
		{
			for (column = 1; column <= input; column++)
			{
				// Logic to print column number and dotted line
				if (column == 1)
				{
					cout << setw(3) << row << " " << DOTTED_LINE;
				}
				// Logic to print actual table
				cout << setw(6) << column * row;
			}
			cout << endl;
		}
		cout << "\nDon't you love math! So lets do it again!\n\n";
		system("pause");
	}

	system("pause");
}