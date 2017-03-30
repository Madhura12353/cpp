// Read and Sum of two integers
// Project Name: ReadAndSum
// Programmer: Madhura Kulkarni
// Last Modified Date and Time: Sep 21 2016, 11:59am

#include<iostream>
using namespace std;
int main()
{
	system("color E0");
	system("title Read and Sum by Madhura");

	cout << "\t\t\t         Two numbers added    \n";
	cout << "\t\t\t           by Madhura         \n\n";

	int integer1, integer2;
	cout << "Please enter an an INTEGER:";
	cin >> integer1;
	cin.ignore(80, '\n');
	cout << "\n";

	cout << "Please enter an another INTEGER ";
	cin >> integer2;
	cout << "\n";
	
	cout << "The sum of " << integer1 << " ";
	cout << "and " << integer2 << " " << "is :" <<integer1 + integer2 << "\n\n";
	cout << "\"" << integer1 << "+" << integer2 << "\"" << "=";
	cout << integer1 + integer2 <<"\n\n";


system("pause");


}
