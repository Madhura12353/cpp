// This file is to understand the concept of input file and doing littel validation
// Title: Input file open validation and average
// Programmer: Madhura kulkarni
// Last modified: 11/04/2016 3:30 pm

#include<iostream>
#include<fstream>
#include<string>
using namespace std;

int main()
{
	ifstream inputfile;
	string filename;
	int num, num1;

	system("title output file by Madhura");
	system("color E0");

	cout << "\n             This program asks the user for the name of a file that            "
		<< "                             contains two numbers                                 "
		<< "                      and prints on the monitor their averge                      "
		<< "                              by Madhura                                          \n";

	//Opening the file madhuraData.txt which is already exist	

	cout << "What file contains your data? ";
	cin >> ws; getline(cin, filename);

	inputfile.open(filename);

	while (inputfile.fail())
	{
		system("color b3");
		cout << "\aFailed to open file: " << "\"" << filename << "\"." << " Exiting the program.\n"
			 << "         Try again: ";
		cin >> ws; getline(cin, filename);
		inputfile.open(filename);
	}

	system("color E0");
	//Reading number1 from file
	inputfile >> num; 
	//cout << num << " and ";
   //Reading number2 from file
	inputfile >> num1; 
	//cout << num1;
	// calculating average of two numbers 	
	 
	// Displying that two numbers and avergae
	cout << "\nThe average of " << num << " and " << num1 << " is " << (num + num1) / 2.0 << endl << endl;

	//	Closing the file
	inputfile.close();


	system("pause");
}




