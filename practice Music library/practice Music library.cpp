//
//
//
//

# include<iostream>
# include <iomanip>
using namespace std;

int main()
{

	system("color E0");

	char package;
	double monthyFee, extrafee, totalCharge;
	int numOfSongs, freeSongs;
	const double
		MONTHLY_FEE_A = 4.99,
		MONTHLY_FEE_B = 9.99,
		MONTHLY_FEE_C = 14.99,
		EXTRA_FEE_A = 0.99,
		EXTRA_FEE_B = 0.59,
		EXTRA_FEE_C = 0.29;

	const int FREE_SONGS_A = 10,
		FREE_SONGS_B = 20,
		FREE_SONGS_C = 30;

	cout
		<< "\n                                Switch Case Lab                                "
		<< "\n                               On line music store                             "
		<< "\n                                   by Madhura                                  ";

	while (true)
	{
		cout << setprecision(2) << fixed;
		cout
			<< "\n\nHere are the posible option packages offered in our store:\n"
			<< "  Package A : Monthly fee $ 4.99. 10 free songs and $0.99 per song after that.\n"
			<< "  Package B : Monthly fee $ 9.99. 20 free songs and $0.59 per song after that.\n"
			<< "  Package C : Monthly fee $14.99. 30 free songs and $0.29 per song after that.\n";

		cout << "\nPlease select the option package that you have ? ";
		cin >> package; cin.ignore(80, '\n');

		switch (package)
		{
		case 'a':
		case 'A':monthyFee = MONTHLY_FEE_A, freeSongs = FREE_SONGS_A, extrafee = EXTRA_FEE_A; break;
		case 'b':
		case 'B':monthyFee = MONTHLY_FEE_B, freeSongs = FREE_SONGS_B, extrafee = EXTRA_FEE_B; break;
		case 'c':
		case 'C':monthyFee = MONTHLY_FEE_C, freeSongs = FREE_SONGS_C, extrafee = EXTRA_FEE_C; break;
		default: cout << "\n\n  ****  Sorry we do not have this package.\n\n"; system("pause"); continue;
		}

		cout << "How many songs did you download this month?";
		cin >> numOfSongs; cin.ignore(80, '\n');


		if (numOfSongs < 0)
		{
			cout << "         *** You can not have negative number of songs!\n";

		}

		else if (int(numOfSongs) != numOfSongs)
		{
			cout << "         *** Your number of songs needs to be whole number!\n";
		}



		else if (numOfSongs <= freeSongs)
		{
			cout << "\n         Your total bill for this month is "
				<< "$" << monthyFee << " + " << (monthyFee* 0.06) << " (for tax )= "
				<< monthyFee + (monthyFee* 0.06) << ".";
		}
		else
		{
			totalCharge = monthyFee + (numOfSongs - freeSongs)*extrafee;

			cout
				<< "\n         Your total bill for this month is "
				<< "$" << totalCharge << " + " << totalCharge * 0.06 << " ( for tax =) " << totalCharge + (totalCharge * 0.06)
				<< "\n         You have " << (numOfSongs - freeSongs)*extrafee << " extra charges for having "
				<< (numOfSongs - freeSongs) << " more song";
			cout << ((numOfSongs - freeSongs) == 1 ? "" : "s");
			cout << "\n         than your monthly limit of " << freeSongs << " free songs.";

		}

		cout << "\n\n\n";
		system("pause"); continue;

	}
}