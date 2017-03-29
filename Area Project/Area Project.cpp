//
//
//
//

#include<iostream>
using namespace std;

int main()
{

	char agree;

	system("color E0");

	cout  
		<< "\n           Project on Designing Overloading Functions          "
		<< "\n         Find the area of a rectangle, triangle, or circle     "
		<< "\n                           By Madhura                        \n";

	cout << "\nDo you want to test the program? ";
	cin >> agree; cin.ignore(80, '\n');

	while (agree != y || agree != Y || agree != n || agree != N)
	{
		cout << "Try again:";
		cin >> agree; cin.ignore(80, '\n');
	}
	cout << "okay";




	system("pause");
}