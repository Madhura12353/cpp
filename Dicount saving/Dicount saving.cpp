// This  program  ask user price and discount of the product and give the saving and amount that you have to pay
// Title: Discount saving
// Program by Madhura
// Date modified 11/11/2016 3:37 PM

#include<iostream>
#include <iomanip>
using namespace std;

int main()
{
	int numOfCustomer = 1;
	
	system("color E0");
	system("title Discount saving by Madhura");

	cout
		<< "\n                      Midterm Programming Part                       \n"
		<< "                       Savings Report Program                          \n"
		<< "                  validate for negative discounts                      \n"
		<< "                             by Madhura                                \n";

	while (true)
	{
		double originalPrice = 0, saving, totalSaving = 0, totalPay = 0, pay;
		int discount, numOfProduct = 1;

		cout << showpoint << fixed << setprecision(2);
		cout << "\nWhat is the price product#" << numOfProduct << "? [negative or zero price for next customer]:";
		cin >> originalPrice; cin.ignore(80, '\n');
	    if ( originalPrice < 0)
		{
			cout << "\n         Customer#" << numOfCustomer << " did not buy anything\n"
				<< "\n            **************************         \n"; numOfCustomer++; continue;

		}
		while (originalPrice >= 0)
		{
			cout << "What is the discount for this item?\n"
				<< "         [Only the interger part will be applied ";
			cin >> discount; cin.ignore(80, '\n');			

			while (discount < 0)
			{
				cout << "\n         Discount has to positive. Please try again:";
				cin >> discount; cin.ignore(80, '\n');
			}

			//cout << showpoint << fixed << setprecision(2);
			saving = originalPrice *  discount / 100;
			pay = originalPrice - saving;
			cout << "\nPrice:  $   " << originalPrice << "        " << "Discount:   " << discount << "%     "
				<< "Saving:  $  " << saving << "     " << "Pay = $   " << pay << endl;

			totalSaving += saving;
			//cout << totalSaving << endl;
			totalPay += pay;
			//cout << totalPay << endl;
			numOfProduct++;
			cout << "\nWhat is the price product#" << numOfProduct << "? [negative or zero price for next customer]:";
			cin >> originalPrice; cin.ignore(80, '\n');

		}
		
			cout 
				<< "\n       customer #"<< numOfCustomer<<" has to pay  $" << totalPay << " for " << numOfProduct - 1 << " items." << endl
				<< "       Total Savings for this customer: $ " << totalSaving << ".\n\n";
			numOfCustomer++;
		system("pause");
		cout << "\n                **********************************************      \n\n";
	
	}
	
	system("pause");
}
