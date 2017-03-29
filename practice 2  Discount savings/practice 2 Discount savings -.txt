//
//
//
//

# include<iostream>
# include <iomanip>
using namespace std;

int main()
{

	double price,totalSavings=0, totalPay =0;
	int discount,product=1,numOfCustomer=1;

	system("color E0");
	system("title Discount savings by Madhura");

	cout
		<< "\n                Midterm Programming Part        "
		<< "\n                Savings Report Program          "
		<< "\n            validate for negative discounts     "
		<< "\n                    by Madhura                  \n";

	cout << setprecision(2) << showpoint << fixed;

	while (true)
	{
		product = 1;
		totalSavings = 0, totalPay = 0;
		cout << "\nWhat is the price product#" << product << " ? [negative or zero price for next customer] : ";
		cin >> price; cin.ignore(80, '\n');
		

		while (price > 0)
		{
			cout << "\nWhat is the discount for this item ?"
				<< "\n[Only the interger part will be applied] ";
			cin >> discount; cin.ignore(80, '\n');

			double savings = price* discount / 100,
				pay = price - (price* discount / 100);

			cout << "\nPrice : $   " << price << "      Discount : " << discount << " % Savings : $"
				<< savings << "       Pay : $   " << pay << endl;
			totalSavings += savings;
			totalPay += pay;
			product++;
			cout << "\nWhat is the price product#" << product << " ? [negative or zero price for next customer] : ";
			cin >> price; cin.ignore(80, '\n');

		}


		cout << "\n\n      Customer #" << numOfCustomer << " has to pay $" << totalPay << " for " << product - 1 << " items."
			<< " \n     Total Savings for this customer: $     " << totalSavings << ".\n";
		numOfCustomer++;
	}
	system("pause");
}



