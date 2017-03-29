//
//
//
//

#include<iostream>
# include<iomanip>
using namespace std;

int main()
{

	char action;
	double firstNumber, secondNumber;

	system ("color E0");
	system("title Action performer by Madhura");

	cout 
		<< "\n               Action  Performer                "
		<< "\n                 Sample Solution                "
		<< "\n                  By Madhura                    ";

	while (true)
	{
		cout << "\n\nAtion: ";
		cin >> action;

		cout << "Give me a number: ";
		cin >> firstNumber; cin.ignore(80, '\n');

		cout << "Give me another number: ";
		cin >> secondNumber; cin.ignore(80, '\n');

		if (action == 'a' || action == 'A')
			cout << firstNumber << " + " << secondNumber << " = " << firstNumber + secondNumber << endl;
		else if (action == 's' || action == 'S')
			cout << secondNumber << " - " << firstNumber << " = " << secondNumber - firstNumber << endl;
		else if (action == 'm' || action == 'M')
			cout << firstNumber << " * " << secondNumber << " = " << firstNumber * secondNumber << endl;
		else if (action == 'd' || action == 'D')
			cout << firstNumber << " / " << secondNumber << " = " << firstNumber / secondNumber << endl;
		else if (action == 'r' || action == 'R')
		{
			if (int(firstNumber) != firstNumber || int(secondNumber) != secondNumber)
				cout << "The remainder (modulo) is defined only for integers\n";
			else cout << firstNumber << " % " << secondNumber << " = " << int(firstNumber) % int(secondNumber) << endl;
		}
		else
			cout << "I do not know how to perform this action.\n";


		cout << "\n\n                    *************************                       ";
	}
	//system("pause");
}