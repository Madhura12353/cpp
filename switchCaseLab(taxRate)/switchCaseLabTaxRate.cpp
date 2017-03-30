// This program is creats by using Swich case staement lab (without if else)
// Title: Switch case lab(tax rate)
// Programmer : Madhura Kulkarni
// Last modified: 14/06/2016 10:33am

#include <iostream>
// iomanip for outputformatting 
#include <iomanip>  
using namespace std;

int main()
{

	char countryInitial;
	double income;
	int range, taxRate;
	const int 
		WIDTH_1 = 12,
		WIDTH_3 = 13,
		WIDTH_2 = 17,
		SMILY = 1,
		SMILY_1 = 2,
		CLUB = 5,
		SPADE = 6,
		MUSIC = 14,
		INFINITE=236,
		TAX_RATE_1 = 13,
		TAX_RATE_2 = 64,
		TAX_RATE_3 = 7,
		TAX_RATE_4 = 23,
		TAX_RATE_5 = 2,
		INCOME_1 = 0,
		INCOME_2 = 3000,
		INCOME_3 = 5000,
		INCOME_4 = 7500,
		INCOME_5 = 12000,
		INCOME_6 = 15345,
		INCOME_7 = 17000,
		INCOME_8 = 19095,
		INCOME_9 = 22987,
		INCOME_10 = 25361,
		INCOME_11 = 28375,
		INCOME_12 = 32645,
		INCOME_13 = 35345;
	//Heading 
	cout
		<< "				  Switch Case Lab							      \n"
		<< "				 tax rate by country						      \n"
		<< "				    by Madhura								        ";
	cout<< showpoint << setprecision(2) << fixed;
	//for infinite loop
	while (true) {
		//Asking for user input
		cout << "\n\nWhat country do you live in? Please select one of the following choices:\n"
			//Giving different options. Using symbols for that refered ASCII table.
			<< " " << (char)SMILY   << " Big Country\n"
			<< " " << (char)SMILY_1 << " Taxastan\n"
			<< " " << (char)CLUB    << " Freeland\n"
			<< " " << (char)SPADE   << " Middle Road Union\n"
			<< " " << (char)MUSIC   << " Utopia\n\n";

		//Asking for country name
		cout << "Country name:";
		cin >> countryInitial; cin.ignore(80, '\n');
		// switch case for cosidering lower and uppercase characters 
		// this is also assigning different variable value in different cases.
		switch (countryInitial)
		{
		case 'b':
		case 'B':  taxRate = TAX_RATE_1; break;
		case 't':
		case 'T':  taxRate = TAX_RATE_2; break;
		case 'f':
		case 'F':  taxRate = TAX_RATE_3; break;
		case 'm':
		case 'M':  taxRate = TAX_RATE_4;  break;
		case 'u':
		case 'U':  taxRate = TAX_RATE_5; break;
		default:cout << "\n\n         *** Sorry we do not have this country in our database.\n\n";
			// system pause - to display last line sytem cls to clear screen
			// continue used to get back to the while loop without displeying further code 
			system("pause"); system("CLS");	continue;

		} // here first switch case is ending

		cout.imbue(locale(""));
		cout << "\n What is your income range?\n";
		cout
			<< setw(WIDTH_1) << " 1  (" << INCOME_1 << "," << setw(WIDTH_2) << INCOME_2 << "] \n"
			<< setw(WIDTH_1) << " 2  (" << INCOME_2 << "," << setw(WIDTH_3) << INCOME_3 << "] \n"
			<< setw(WIDTH_1) << " 3  (" << INCOME_3 << "," << setw(WIDTH_3) << INCOME_4 << "] \n"
			<< setw(WIDTH_1) << " 4  (" << INCOME_4 << "," << setw(WIDTH_3) << INCOME_5 << "] \n"
			<< setw(WIDTH_1) << " 5  (" << INCOME_5 << "," << setw(WIDTH_1) << INCOME_6 << "] \n"
			<< setw(WIDTH_1) << " 6  (" << INCOME_6 << "," << setw(WIDTH_1) << INCOME_7 << "] \n"
			<< setw(WIDTH_1) << " 7  (" << INCOME_7 << "," << setw(WIDTH_1) << INCOME_8 << "] \n"
			<< setw(WIDTH_1) << " 8  (" << INCOME_8 << "," << setw(WIDTH_1) << INCOME_9 << "] \n"
			<< setw(WIDTH_1) << " 9  (" << INCOME_9 << "," << setw(WIDTH_1) << INCOME_10 << "] \n"
			<< setw(WIDTH_1) << "10  (" << INCOME_10 << "," << setw(WIDTH_1) << INCOME_11 << "] \n"
			<< setw(WIDTH_1) << "11  (" << INCOME_11 << "," << setw(WIDTH_1) << INCOME_12 << "] \n"
			<< setw(WIDTH_1) << "12  (" << INCOME_12 << "," << setw(WIDTH_1) << INCOME_13 << "] \n"
			<< setw(WIDTH_1) << "13  (" << INCOME_13 << "," << setw(WIDTH_1) << (char)INFINITE<< ")\n";
		cout << "Please enter a choice here:";
		cin >> range; cin.ignore(80, '\n');
		// switch case to go to different income range it is also assinging variable lowerIncome for 
		//  specific income.
		switch (range)
		{
		case 1:  income = INCOME_1;    break;
		case 2:  income = INCOME_2;    break;
		case 3:  income = INCOME_3;    break;
		case 4:  income = INCOME_4;    break;
		case 5:  income = INCOME_5;    break;
		case 6:  income = INCOME_6;    break;
		case 7:  income = INCOME_7;    break;
		case 8:  income = INCOME_8;    break;
		case 9:  income = INCOME_9;    break;
		case 10: income = INCOME_10;   break;
		case 11: income = INCOME_11;   break;
		case 12: income = INCOME_12;   break;
		case 13: income = INCOME_13;   break;
		default:cout << "\n\t   *** Sorry we do not have this income bracket.\n\n";

			system("pause"); system("CLS");	continue;

		}

		cout<< "\nYour taxable income is $" << income<< " and your tax rate is " << taxRate << "%.\n"
			<< "You have to pay $"<< income*taxRate / 100 << " in taxes.\n\n";

		system("pause");
		system("CLS");
	}
}













