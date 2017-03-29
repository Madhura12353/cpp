//
//
//
//

# include <iostream>
# include <iomanip>
using namespace std;

int main()
{

	char countryName;
	double tax, incomeRange;

	const double
		BIG_TAX = 13,
		TAXASTAN_TAX = 64,
		FREELAND_TAX = 7,
		MIDDLE_TAX = 23,
		UTOPIA_TAX = 2;

	system("color E0");
	system("title tax rate by Madhura");
	while (true)
	{
		cout << setprecision(2) << fixed << showpoint;
		cout
			<< "\nWhat country do you live in? Please select one of the following choices:"
			<< "\n☺ Big Country"
			<< "\n☻ Taxastan"
			<< "\n♣ Freeland"
			<< "\n♠ Middle Road Union"
			<< "\n♫ Utopia";

		cout << "\n\ncountryName: ";
		cin >> countryName;

		switch (countryName)
		{
		case 'b':
		case 'B': tax = BIG_TAX; break;
		case 't':
		case 'T': tax = TAXASTAN_TAX; break;
		case 'f':
		case 'F': tax = FREELAND_TAX; break;
		case 'm':
		case 'M': tax = MIDDLE_TAX; break;
		case 'u':
		case 'U': tax = UTOPIA_TAX; break;
		default:cout << "\n         *** Sorry we do not have this country in our database.\n\n";

			system("pause"); system("CLS"); continue;
			cout << "This is the last line";

		}

		cout << "What is your income range?\n"
			<< "1[0, 3, 000]\n"
			<< "2   (3, 000, 5, 000]\n"
			<< "3   (5, 000, 7, 500]\n"
			<< "4   (7, 500, 12, 000]\n"
			<< "5   (12, 000, 15, 345]\n"
			<< "6   (15, 345, 17, 000]\n"
			<< "7   (17, 000, 19, 095]\n"
			<< "8   (19, 095, 22, 987]\n"
			<< "9   (22, 987, 25, 361]\n"
			<< "10   (25, 361, 28, 375]\n"
			<< "11   (28, 375, 32, 645]\n"
			<< "12   (32, 645, 35, 345]\n"
			<< "13   (35, 345, ∞)\n"
			<< "Please enter your choice here : ";
		cin >> incomeRange; cin.ignore(80, '\n');
		cout.imbue(locale(""));
		switch (int(incomeRange))
		{
		case 1: incomeRange = 0; break;
		case 2: incomeRange = 3000; break;
		case 3: incomeRange = 5000; break;
		case 4: incomeRange = 7500; break;
		case 5: incomeRange = 12000; break;
		case 6: incomeRange = 15345; break;
		case 7: incomeRange = 17000; break;
		case 8: incomeRange = 19095; break;
		case 9: incomeRange = 22987; break;
		case 10: incomeRange = 25361; break;
		case 11: incomeRange = 28375; break;
		case 12: incomeRange = 32645; break;
		case 13: incomeRange = 35345; break;
		default: cout << "This is not in our range";
			system("pause"); system("CLS"); 


		}
		cout << "\nYour taxable income is $" << incomeRange << " and your tax rate is " << tax << "%.\n"
			<< "You have to pay $" << incomeRange * tax / 100 << " in taxes.";

	}




	system("pause");
}