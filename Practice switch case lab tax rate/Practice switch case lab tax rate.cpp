//
//
//
//

#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
	char myCountry;
	double tax = 0;
	int incomeRange = 0,range=0;
	const double
		BIGTAX = 0.13,
		TAXTAX = 0.64,
		FREETAX = 0.07,
		MIDTAX = 0.23,
		UTOTAX = 0.02,
		RANGE1 = 0,
		RANGE2 = 3000,
		RANGE3 = 5000,
		RANGE4 = 7000,
		RANGE5 = 12000,
		RANGE6 = 15345,
		RANGE7 = 17000,
		RANGE8 = 19095,
		RANGE9 = 22987,
		RANGE10 = 25361,
		RANGE11 = 28375,
		RANGE12 = 32645,
		RANGE13 = 35345;

	system("color E0");
	cout << "                          Switch Case Lab                           \n"
		<< "                        tax rate by country                         \n"
		<< "                            by Madhura                              \n";

	while (true)
	{
		cout << "\nWhat country do you live in ? Please select one of the following choices :\n"
			<< " Big Country\n"
			<< " Taxastan\n"
			<< " Freeland\n"
			<< " Middle Road Union\n"
			<< " Utopia\n"
			<< "\tCountry name : ";
		cin >> myCountry; cin.ignore(80, '\n');
		//cout << myCountry << endl;
		switch (myCountry)
		{
		case'b':
		case'B': tax = BIGTAX; break;
		case't':
		case'T':tax = TAXTAX; break;
		case'f':
		case'F':tax = FREETAX; break;
		case'm':
		case'M':tax = MIDTAX; break;
		case'u':
		case'U':tax = UTOTAX; break;
		default:cout << "\n         *** Sorry we do not have this country in our database.\n\n ";
			system("pause"); system("CLS"); continue;

		}
		cout <<"The tax computed is "<< tax << endl;
		
			cout << "What is your income range?\n"
				<< "1[0, 3, 000]"
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
				<< "Please enter your choice here :";

			cin >> range; cin.ignore(80, '\n');
	
			while (range < 1 || range > 13)
			{
			switch (range)
			{
			case 1: incomeRange = RANGE1; break;
			case 2: incomeRange = RANGE2; break;
			case 3: incomeRange = RANGE3; break;
			case 4: incomeRange = RANGE4; break;
			case 5: incomeRange = RANGE5; break;
			case 6: incomeRange = RANGE6; break;
			case 7: incomeRange = RANGE7; break;
			case 8: incomeRange = RANGE8; break;
			case 9: incomeRange = RANGE9; break;
			case 10: incomeRange = RANGE10; break;
			case 11: incomeRange = RANGE11; break;
			case 12: incomeRange = RANGE12; break;
			case 13: incomeRange = RANGE13; break;

			default:cout << "Invalid input please try again:";
				cin >> range; cin.ignore(80, '\n');//break;
				 
			}

		}
				cout << "Your taxable income is " << incomeRange << " and your tax rate is " << tax << " %. \n"
					<< "You have to pay $" << incomeRange * tax << " in taxes.\n";


			
}
system("pause");
}