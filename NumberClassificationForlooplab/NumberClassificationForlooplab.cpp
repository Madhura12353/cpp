// This lab prints the positive number classification as Perfect, Abundant or deficient
// Title: Number classification
// Program by Mdhura kulkarni
// Last modified: 11:45 PM

#include <iostream>
using namespace std;

int main()
{
	int input = 0, num, total;

	system("Title Positive number classification by Madhura");
	system("color E0");

	cout
		<< "\n                     Positive number classification as                      \n"
		<< "                      perfect, abundant, or deficient                         \n"
		<< "                               By Madhura                                     \n";

	while (true)
	{
		total = 0;

		cout << "\nEnter a number to be classified as perfect, abundant, or deficient: ";
		cin >> input; cin.ignore(80, '\n');

		while (input <= 0)
		{
			cout << "This classification is for positive integers only. Please try again: ";
			cin >> input; cin.ignore(80, '\n');
		}


		for (num = 1; num < input; num++)
		{
			if (input % num == 0)
			{
				total += num;
			}
		}

		cout << "\t" << input << " is ";
		if (total == input)
			cout << "a PERFECT ";
		else if (total < input)
			cout << "a DEFICIENT ";
		else if (input < total)
			cout << "an ABUNDANT ";
		cout << "number. \n\n";

		cout << "                    *****************************************                     \n";
	}
	system("pause");
}
