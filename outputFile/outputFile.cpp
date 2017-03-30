// This lab is to understand the concept of output file
// Title: output file
// Program by: Madhura Kulkarni
// Last modified: 11/09/2016 2:16 PM

#include <fstream>
#include <iostream>
#include <string>
using namespace std;

int main()
{
	//file stream object
	ofstream outputfile;
	string filename;

	system("title output file by Madhura");
	system("color E0");

	cout << "\n            This program asks the user where you want to save the name          "
		<< "                   and then checking the file is opening or not                     \n";

	//Asking user filename to write my name.
	cout << "\nWhere do you want me to write my name?\n"
		<< "\t(do not forget the file name extension) ";
	//taking input from user
	cin >> ws;
	getline(cin, filename);
	// opening the user specifeid file 

	outputfile.open(filename); //or you can use  ofstream fout(filename);	

	while (outputfile.fail())
	{
		 system ("color b3");
		cout << "\tFailed to open file: " << "\"" << filename << "\".\n"
			 << "\tTry again: ";
		cin >> ws;
		getline(cin, filename);
		outputfile.open(filename);
	}
	system("color E0");
	cout << "file is opened succesfully \n";

	//Wrting a name in that file
	outputfile << "Madhura \n";
	cout << "\nMy name is written in " << filename << "\n\n";

	//Closing the file
	outputfile.close();

	system("pause");
}