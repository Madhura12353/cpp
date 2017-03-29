// This program calculates the monthly bill for a music store based on user selected package and number of songs downloaded.
// Switch case lab on Online music store charges.
// Programmer: Uttam Bavarva
// Last Modified: 12th October 2016

#include <iostream>
# include<fstream>
# include<string>
#include <iomanip>
using namespace std;

int main()
{
	ifstream inputfile;

	int num1, num2, num3;

	inputfile.open("data.txt");

	 inputfile >> num1; 
	cout << num1 <<endl;


	/*const int SIZE = 20;
	char digits[] =  "123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ" ;
	for (int i = 0; i < sizeof(digits); i++)
	{
		cout << "digit one = " << digits[i] << endl;
	}


	/*char input;

	cout << "Hit Enter to proceed!" << endl;
	input = cin.get();
	
	while (input != '\n') {
	
		cout << "You did not hit Enter, Hit enter to proceed"<<endl;
		cin.ignore(80,'\n');
		input= cin.get();
	}
	cout << "Program can proceed" << endl;;

	cout << "Give another input" << endl;
	char input1;
	cin >> input1;
	cout << "User inputed" << input1 << endl;*/
	system("pause");
}