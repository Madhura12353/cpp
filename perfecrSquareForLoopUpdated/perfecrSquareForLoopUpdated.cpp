// This lab gives you square up to limit of your requrment.
//  Title: For loop square lab
//  Program by Madhura kullkarni
// Date modified: 11/07/2016 3:25pm

#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
	int   limit = 0, limitPerLine, number = 0, num;

	system(" color b3");
	system("title Square lab using for loop ");

	cout
		<< "\n                Print the perfect squares up to a user defined limit             "
		<< "                      Uses for and  conditional operator                           "
		<< "                           By Madhura                                            \n";

	while (true)
	{
		cout << "\n\nEnter limit: ";
		cin >> limit; cin.ignore(80, '\n');

		cout << "How many perfect squares would you like per line: ";
		cin >> limitPerLine; cin.ignore(80, '\n');

		cout << "\nHere are the perfect square up to " << limit << "," << limitPerLine << " perferct squares per line:\n";
		int lim = sqrt(limit); // so you don't have to invoke the sqrt function EVERY time you go through the loop

		for (num = 1; num <= lim; num++)

		{
			cout << '\t' << setw(4) << num * num;
			//		cout << ((num % limitPerLine == 0 && (check = num + 1 <= lim) ? "\n" : ""));
			cout << (num % limitPerLine == 0 ? "\n" : " ");

		}
		cout << (--num % limitPerLine == 0 ? " " : "\n");


		//cout << (lim == limitPerLine ? "" : "\n");
		//cout << (lim % limitPerLine == 0 ? "" : "\n");  //  ???
		// here figure out if the last thing you printed was \n or the "" and then see if you need an extra \n
		cout << "\n        ======================================================    \n";
	}
	system("pause");
}