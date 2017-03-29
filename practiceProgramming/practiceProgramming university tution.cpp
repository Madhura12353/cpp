// This program ask student their status of leaving and calculate the total amount they need to pay
// Program title: University tution calculation
// Programmer: Madhura Kulkarni
// Last modified: 10/13/2016

#include <iostream>
#include<iomanip>
using namespace std;

int main()
{

	system("color b3");
	system("title University Tution Calculation");

	char status, other;
	const int INSTATE = 3000, OUT_OF_STATE = 4500,
		INSTATE_EXTRA = 2500, OUT_OF_STATE_EXTRA = 3500;
	int tution, extra;

	cout << "                     Tution Calculation                 \n"
		<< "                    for The University of Guiness        \n"
		<< "                        by Madhura                       \n \n";
	while (true)
	{
		cout << "\nwhat is your resedential status (In State or Out Of state) ?";
		cin >> status; cin.ignore(80, '\n');
		switch (status)
		{
		case 'i':
		case 'I': tution = INSTATE, extra = INSTATE_EXTRA; break;
		case 'o':
		case 'O': tution = OUT_OF_STATE, extra = OUT_OF_STATE_EXTRA; break;
		default: cout << "\n      ****Please enter Instate or Out of state\n\n"; system("pause"); system("CLS");
			continue;
		}
		while (true)
		{
			cout << "Do you want room and board? type YES or NO(Y/N)";
			cin >> other; cin.ignore(80, '\n');
			cout.imbue(locale(""));

			switch (other)
			{
			case 'y':
			case 'Y': cout << setprecision(2) << showpoint << fixed
				<< "\nYour tution for this semester is $" << tution
				<< "\nand the charges for room and board is $" << extra << "\n"
				<< "So your total bill for this semester is $" << tution + extra << "\n\n"; break;
				 
			case'n':
			case'N': cout << "\nYour total bill for this semester is $" << tution << "\n\n"; break;
				

			default: cout << "\n           ****Please enter YES or NO\n\n"; continue; system("pause");

			}
			system("pause"); system("CLS");
			break;
		}

	}
	
	system("pause");
}