//
//
//
//

#include<iostream>
#include<iomanip>
using namespace std;

int main()
{

	int input,row,column;


	system("color E0");
	cout
		<< "\n                    Print the Multiplication Table            \n"
		<< "                       up to a user defined limit               \n"
		<< "                              By Madhura                        \n";


	cout << "\nUp to what number do you want to print the multiplication table ? ";
	cin >> input; cin.ignore(80, '\n');
	//cout << input<<endl;

	while (input <= 0 || input > 12)
	{
		if(input <= 0)
			cout << "Your numeber must be greater than or equal to 1 ";
		else cout << "Your input is less than or equal to 12: ";

		cout<< "Try again:";
		cin >> input; cin.ignore(80, '\n');
	}

	
	cout << "     ";
	for (int count = 1; count <= input; count++)
	{
		cout  <<setw(6)<< count;
	}
	
	cout << endl;
	cout << "    ";
	for (int count = 1; count <= input*6; count++)
	{
		cout << char(178);
	}

	cout << endl;
	
	for (row = 1; row <= input; row++)
	{
		{
			for (column = 1; column <= input; column++)
			{
				if (column == 1)
					cout <<setw(3)<< row<<" "<< char(178);
				cout << setw(6) << row * column;
			}
				
		}
			cout << endl;
	}



	system("pause");
}

