//
//
//
//

#include<iostream> 
using namespace std;

int main()
{

	double totalAmount;
	char coin;
	int value, numOfCoins = 0;
	const int
		PENNY = 1,
		NICKLE = 5,
		DIME = 10,
		QUARTER = 25;
	double total = 0;


	system("color E0 ");
	system("title coin count by Madhura");

	cout
		<< "\n                  coin count                     "
		<< "\n                   by Madhura                     ";

	while (true)
	{
		double total = 0;
		int  numOfCoins = 0;

		cout << "\nWhat is the total amount you want to reach in cents"
			<< "\n[validate for non - numeric input ONLY] ?: ";

		while (!(cin >> totalAmount))
		{
			cout << "No letters Try again: ";
			cin.clear(); cin.ignore(80, '\n');
		}

		while (total != totalAmount && total < totalAmount)
		{
			cout << total << endl;
			cout << "\nWhat coin did you get ?  ";
			cin >> coin; cin.ignore(80, '\n');

			switch (coin)
			{
			case 'p':
			case 'P': value = PENNY; break;
			case 'n':
			case 'N': value = NICKLE; break;
			case 'd':
			case 'D': value = DIME; break;
			case 'q':
			case 'Q': value = QUARTER; break;
			default: cout << "    *** Invalid coin ***\n";
				continue;

			}

			numOfCoins++;

			total += value;
			cout << total << endl;

			cout << coin << "           value: " << value << "     total : " << total;

		}

		cout <<"\n\n                  ******      REPORT      ******"
			<< "\nYour total amount is: " << total << ".\n"
			<< "It took " << numOfCoins << " coins to reach " << totalAmount << " cents\n";

		if (total > totalAmount)
		{
			cout << "and you have " << total - totalAmount << " more cents than the "
				<< totalAmount << " that you wanted.\n";
		}

		else if (value > totalAmount)
		{
			cout << "and you have " << value - totalAmount << " more cents than the "
				<< totalAmount << " that you wanted.\n";
		}

		cout << "\n\n                        ******************   ";
	}

	system("pause");
}
