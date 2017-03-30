

// This program performs Addition, Subtraction, Multiplication, Division and Remainder.
// Action to perform.
// Programmer: Yellow Group(Madhura Kulkarni, Himanshu Sharma and Uttam Bavarva)
// Last modified: 30th September 2016

#include<iostream>
using namespace std;

int main()
{
	system("title Action perfomer by Yellow Group.");

	double n1, n2;
	char ch;

	cout << "                        Action Perfomer                       \n"
 		 << "                          Solution by                         \n"
 		 << "                         Yellow Group                         \n\n\n";

	cout << "         This program performs the five basic actions         \n"
		 << "            that the arithmetic operators perform:            \n"
		 << "    Addition/Subtraction/Multiplication/Division/Remainder    \n\n\n";

	while (true)
	{
		cout << "Action: ";
		cin >> ch;     cin.ignore(80, '\n');
		cout << "Give me a number: ";
		cin >> n1;     cin.ignore(80, '\n');
		cout << "Give me another number: ";
		cin >> n2;     cin.ignore(80, '\n');

		if (ch == 'a' || ch == 'A')
			cout << n1 << " + " << n2 << " = " << n1 + n2 << "\n";

		else if (ch == 's' || ch == 'S')
			cout << n2 << " - " << n1 << " = " << n2 - n1 << "\n";

		else if (ch == 'm' || ch == 'M')
			cout << n1 << " * " << n2 << " = " << n1 * n2 << "\n";

		else if (ch == 'd' || ch == 'D')
		{
			if (n2 != 0)
				cout << n1 << " / " << n2 << " = " << n1 / n2 << "\n";
			else
				cout << "Action cannot be performed. Division by zero is not defined \n";
		}
		else if (ch == 'r' || ch == 'R')
		{
			if (n2 != 0)
			{
				if (n1 == static_cast<int>(n1) && n2 == static_cast<int>(n2))
					cout << n1 << " % " << n2 << " = " << static_cast<int>(n1) % static_cast<int>(n2)
					<< "\n";
				else
					cout << "The remainder(modulo) is defined only for integers.\n";
			}
			else
				cout << "The modulo of zero is not permitted.\n";
		}
		else
			cout << "I do not know how to perform this action.\n\n";

		cout << "\n          *****************         \n\n";
	}

}
