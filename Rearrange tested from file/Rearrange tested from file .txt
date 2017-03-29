// This program reads the numeric data from file and rearrange it with incresing order
// Title: Rearrange tested from file
// Programmer: Madhura KUlkarni
// Last modified: 11/23/2016 12:30PM

#include<iostream>
#include<iomanip>
#include<fstream>
#include<string>
using namespace std;
void mySwap(int & input1, int  & input2);
void rearrangeNumbers(int & num1, int & num2, int & num3);

int main()
{
	ifstream inputfile;
	string filename;
	int  num1, num2, num3;

	system("title Rearrange tested from file by Madhura");
	system("color E0");

	cout
		<< "\n                    Lab on \"Driver testing the rearrange function.\""
		<< "\n                                    by Madhura                   \n\n";



	inputfile.open("Data Set.txt");

	if (inputfile.fail())
	{
		system("color b3");
		cout << "The test data set must be in a file called \"Data Set.txt\".\n"
			<< "         Failed to open the input file\n"
			<< "         I am exiting the program.\n";

		system("pause");
	}

	else
	{
		system("color E0");

		//Reading  from file

		while (!(inputfile.eof()))
		{

			inputfile >> num1 >> num2 >> num3;
			cout << "\nBefore the call: x = " << num1 << "  y = " << num2 << "  z = " << num3 << endl;
			cout << num1 << num2 << num3;
			rearrangeNumbers(num1, num2, num3);
			cout << "\nAfter the call:  x = " << num1 << "  y = " << num2 << "  z = " << num3 << endl;
			cout << num1 << num2 << num3 << endl;
		}
		cout << endl;
		inputfile.close();
		system("pause");

		cout << "\n\n        BETTER way to test (using a for loop and a table format)\n\n";


		cout
			<< "\t x"<<setw(7)<<"y"<<setw(7)<<"z" << endl
			<< "\t=====================\n";
		for (int count = 1; count <= 6; count++)
		{
			switch (count)
			{
			case 1: num1 = 1, num2 = 2, num3 = 3; break;
			case 2: num1 = 1, num2 = 3, num3 = 2; break;
			case 3: num1 = 2, num2 = 1, num3 = 3; break;
			case 4: num1 = 2, num2 = 3, num3 = 1; break;
			case 5: num1 = 3, num2 = 1, num3 = 2; break;
			case 6: num1 = 3, num2 = 2, num3 = 1; break;

			}
			cout
				<< "Start:   "  << num1 <<setw(7) << num2 << setw(7) << num3;
			rearrangeNumbers(num1, num2, num3);
			cout << "\nEnd:     " << num1 << setw(7) << num2 << setw(7) << num3 << endl << endl;

		}
		
		system("pause");
	}
}
	void rearrangeNumbers(int & num1, int & num2, int & num3)
	{
		if (num1>num2)
			mySwap(num1, num2);
		if (num2 > num3)
			mySwap(num2, num3);
		if (num1>num2)
			mySwap(num1, num2);
		
	}

void mySwap(int & input1, int  & input2)
{
	int input3 = input1;
	input1 = input2;
	input2 = input3;

}



