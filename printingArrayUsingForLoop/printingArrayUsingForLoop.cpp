// This lab prints character array and string vertically usinng for loop
// Program title: Array using for loop
// Program by Madhura kulkarni
// Last modified: 11/07/2016 2:50 PM


# include<iostream>
#include <string>
using namespace std;

int main()
{
	const int MAX = 80;
	char chararray[MAX];
	string inoutstring;

	system("color E0");
	system("title Printing character array and string vertically");

	cout << "\n                        This project uses a for loop to               " << endl
	     << "                   print a character array and a string VERTICALLY      " << endl
	     << "                             By M. Kulkarni                        \n" << endl;

	cout << "Enter a string: ";
	getline(cin, inoutstring);

	cout << "Your STRING vertically is:" << endl;

	// Printing string
	for (int i = 0; i < inoutstring.length(); i++)//inoutstring.length()
	{
		cout << "\t" << inoutstring[i];
		cout << "\n";

	}

	cout << "\n";
	system("pause");
	cout << "\nEnter a character ARRAY: ";
	cin.getline(chararray, MAX, '\n');
	cout << "Your char ARRAY VERTICALLY is:" << endl;
	// Print character array

	for (int i = 0; chararray[i] != '\0'; i++)// i < MAX ||
	{
		{
			cout << "\t" << chararray[i];
		}
		cout << endl;
	}


	cout << "\n";
	system("pause");

}