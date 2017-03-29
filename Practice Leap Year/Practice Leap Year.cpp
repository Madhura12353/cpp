/*
	Any year is input by the user. Write a program to determine whether the year is a leap year or not.
	In the Gregorian calendar 3 criteria must be taken into account to identify leap years:
	The year is evenly divisible by 4;
	If the year can be evenly divided by 100, it is NOT a leap year, unless;
	The year is also evenly divisible by 400. Then it is a leap year.
	Program Title: Practice Leap Year 
	Programmer: Madhura
	Date Modified: 10/18/2016, 10:11am

*/
#include<iostream>
using namespace std;

int main()
{
	cout << "                          Leap Year Identifier                             \n"
		 << "                              by Madhura                                    \n\n";

	int year;
	char again;

	do {

		cout << "\nEnter a year I will tell you that year you enterd is leap year or not\n";
		cin >> year; cin.ignore(80, '\n');
		if (year < 0)
			cout << "       ****Year can not be negative.Please enter valid year!\n";
        else if (year % 4 == 0 || year % 400 == 0 && year % 100 != 0)
			cout << "This year is leap year\n";
		else 
		{
			cout << "This year is not leap year\n";
		}
		cout << "\nDo you want to do this again enter 'Y' for YES and enter 'N' for NO\n";
		cin >> again; cin.ignore(80, '\n');

	} while (again == 'Y' || again == 'y');  cin.get();cin.clear();
	
	system("pause");
	cin.clear();
}