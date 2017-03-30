// Music library program by using switch case, if else, continue,and while loop
// Program title: musicLibrarySwitchcase
// Programmer: Madhura Kulkarni
// Last modified: 10/10/2016 10:52am

#include <iostream>
#include <string>
#include<iomanip>
using namespace std;

int main()
{
	system("title Switch Case Lab -- On line music store   by Madhura");
	system("color E0");

	char	        package;
	double	        numOfSongs, monthlyFee = 0, total = 0, extraCharge = 0;
	int		        extraSongs = 0, freeSongs = 0;
	const int		FREE_A = 10,
		            FREE_B = 20,
		            FREE_C = 30;
	const double	MONTHLYFEE_A = 4.99,
					MONTHLYFEE_B = 9.99,
					MONTHLYFEE_C = 14.99,
					EXTRACHARGE_A = 0.99,
					EXTRACHARGE_B = 0.59,
					EXTRACHARGE_C = 0.29,
					TAX = 0.06;   // used for 6 % tax(6/100=0.06).


	cout << "			  Switch Case Lab                               \n"
		<< "			 On line music store                            \n"
		<< "			  by Madhura                                    \n";

	cout << setprecision(2) << showpoint << fixed;
	while (true)
	{
		cout << "\nHere are the possible option packages offered in our store :\n"
			<< "  Package A: Monthly fee $ 4.99. 10 free songs and $" << EXTRACHARGE_A << " per song after that.\n"
			<< "  Package B: Monthly fee $ 9.99. 20 free songs and $" << EXTRACHARGE_B << "per song after that.\n"
			<< "  Package C: Monthly fee $14.99. 30 free songs and $" << EXTRACHARGE_C << " per song after that.\n\n"
			<< "Please select the option package that you have? ";

		cin >> package; cin.ignore(80, '\n');

		switch (package)
		{
		case 'a':
		case 'A':  monthlyFee = MONTHLYFEE_A, extraCharge = EXTRACHARGE_A, freeSongs = FREE_A; break;
		case 'b':
		case 'B':  monthlyFee = MONTHLYFEE_B, extraCharge = EXTRACHARGE_B, freeSongs = FREE_B; break;
		case 'c':
		case 'C':  monthlyFee = MONTHLYFEE_C; extraCharge = EXTRACHARGE_C, freeSongs = FREE_C; break;

		default: cout << "\n         *** Sorry we do not offer that package.\n\n";
			system("pause"); continue;
		}

		cout << "How many songs did you download this month? ";
		cin >> numOfSongs; cin.ignore(80, '\n');

		// Validation for positive number
		if (numOfSongs < 0)
			cout << "\n         *** You can not have negative number of songs!\n\n";

		// Validation for int number
		else  if (static_cast<int>(numOfSongs) != numOfSongs)
			cout << "\n          *** Your number of songs needs to be a whole number!\n\n";

		else if (numOfSongs <= freeSongs)
		{
			cout << setprecision(2) << showpoint << fixed << "\nYour total bill for this month is $"
				<< monthlyFee << " + " << (monthlyFee * TAX)
				<< " (for tax) = " << monthlyFee + (monthlyFee * TAX) << "\n\n";
		}

		// For songs greater than free songs
		else if (numOfSongs > freeSongs)
		{
			extraSongs = numOfSongs - freeSongs,
				total = monthlyFee + (extraSongs*extraCharge);

			cout << setprecision(2) << showpoint << fixed
				<< "\nYour total bill for this month is $" << total << " + " << total*TAX << " (for tax)"
					<< " = " << total + total * TAX << ".\n"
					<< "\tYou have $ " << extraSongs * extraCharge << " extra charges for having "
					<< extraSongs << " more song"
					<< (extraSongs == 1 ? " " : "s")
					<< "\n        than your monthy limit of " << freeSongs << " free songs.\n\n";

		}

		system("pause"); continue;
	}

	system("pause");

}
