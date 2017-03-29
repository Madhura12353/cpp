// This program asks user the amount and the value of coins you have and calculate how many coins needed
// title: coin count
// Programmer: Madhura kulkarni
// Date modified: 11/14/2016 

#include<iostream>
using namespace std;

int main()
{
	int totalAmount = 0, total = 0, value = 0, numOfCoins = 0;
	char coin;
	const int
		PENNY = 1,
		NICKLE = 5,
		DIME = 10,
		QUARTER = 25;

	system("color E0");
	system("title Coin count by Madhura");

	cout
		<< "\n                         Midterm for CIT120                          "
		<< "\n                            Sample Solution                          "
		<< "\n                    switch, input validation, loops, grammar         "
		<< "\n                            by Madhura                               ";

	while (true)
	{
		int totalAmount = 0, total = 0, value = 0, numOfCoins = 0;

		cout << "\n\nWhat is the total amount you want to reach in cents\n"
			<< "[validate for non - numeric input ONLY] ? ";

		// Letter validation
		while (!(cin >> totalAmount))
		{
			cout << "No letters please! Try again:";
			cin.clear(); cin.ignore(80, '\n');
		}
		cin.ignore(80, '\n');
		// Actual computation
		while (total < totalAmount)
		{ 
			cout << "\nWhat coin did you get? ";
			cin >> coin; cin.ignore(80, '\n');
			switch (coin)
			{
			case 'P':
			case 'p': value = PENNY; break;
			case 'N':
			case 'n': value = NICKLE; break;
			case 'D':
			case 'd': value = DIME; break;
			case 'Q':
			case 'q': value = QUARTER; break;
			default: cout << "  *** Invalid coin ***\n"; cin.get(); continue;
			}
			// displying coin type, its value in cents and total amount that you enetred
			cout << coin << ":" << "\t" << " value :" << value << "\t";
			total += value;
			numOfCoins++;
			cout << "total :" << total << endl;
		}
		//when you reached to the reqired amount will disply the total amount and number of coins it took to reach that amount
		cout << "\n   ******  Report   ******\n\n"
			<< "Your total amount is:" << totalAmount << endl
			<< "It took " << numOfCoins << " coins to reach " << totalAmount << " cents.\n";

			// when value is greater than total amount it will display how many coins are exttra.
			if (value > totalAmount)
			{
				cout << "\tand you have " << value - totalAmount << " more cents than the "
					<< totalAmount << " that you wanted.\n";
			}
			else if (total > totalAmount)
			{
				cout << "\tand you have " << total - totalAmount << " more cents than the "
					 << totalAmount << " that you wanted.\n";
			}
		//<< "the last coin value that you got was " << value;

		cout << "\n\             **********************                    \n";
	}
	system("pause");
}

