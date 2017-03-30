// This program ask your full name and display on screen
// Title : Read your full name
// Programmer: Madhura Kulkarni
// Last modified: oct 4 2016, 4:29pm

#include <iostream>
#include <string>

using namespace std;

int main()

{
	system("title Read your full name");

	cout << "			 The greeting lab            \n"
	     << "			 with strings first          \n"
	     << "			 by using putback method   \n\n";

	string name1;
	char ch;

	cout << "\nWhat is your FULL name?";
	cin >> ch;
	cin.putback(ch);
	getline(cin, name1);

	cout << "Hello" << "\"" << name1 << "\". \n\n";

	system("pause");


	//**********************************************************************************************************

	string name;
	cout << "\n			 The greeting lab            \n"
	     << "			 with strings first          \n"
	     << "			 by using ws method        \n\n";


	cout << "What is your FULL name? ";
	// cin >>ws used to skip initial white spaces.
	// getline used to read full name (if you put spaces between your initial name and middle name)
	cin >> ws; 
	getline(cin, name);
	cout << "Hello" << "\"" << name << "\"" << "\n\n";

	system("pause");

	//*********************************************************************************************************
	cout << "\n			The greeting lab             \n"
	     << "			with strings first			 \n"
	     << "			by using character array method\n\n";

	const int SIZE = 30;
	char name3[SIZE];

	cout << "Type your FULL name:";
	cin >> ws;
	cin.getline(name3, SIZE);// useful only for character array here 'name3' is cahracter and '30'is size 
	cout << "Hello " << "\"" << name3 << "\"" << "\n\n";


	system("pause");
	return 0;

}