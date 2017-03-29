//
//
//
//

#include<iostream>
#include<string>
#include<fstream>
using namespace std;
void openTheInputFile(ifstream &inputFile);
void readingDataFromFile(double sourseBase[], double targetBase[], double initialNumber[],  ifstream & inputFile);
int main()
{
	

	ifstream inputFile;
	string filename;
	//double num1, num2;
	//char num3;
	const int SIZE = 30;
	double sourseBase[SIZE], targetBase[SIZE];
	double initialNumber[SIZE];
	char stringtochar[SIZE];

	openTheInputFile(inputFile);
	
	/*cout << "What file contains your data? ";
	cin >> ws; getline(cin, filename);
	inputFile.open(filename);
	while (inputFile.fail())
	{
		system("color b3");
		cout << "\aFailed to open file"
			<< "         Try again: ";
		cin >> ws; getline(cin, filename);
		inputFile.open(filename);
	}*/


	readingDataFromFile(sourseBase, targetBase, initialNumber, inputFile);

	
	inputFile.close();

	system("pause");
}
// This function is to open input file succesfully if user enered incorrect file name this function will ask the user
//again to enetr file name untill  file is succesfully open

void openTheInputFile(ifstream& inputFile)
{
	//ifstream inputFile;
	string filename;
	cout << "What file contains your data? ";
	cin >> ws; getline(cin, filename);
	inputFile.open(filename);
	while (inputFile.fail())
	{
		system("color b3");
		cout << "\aFailed to open file"
			<< "         Try again: ";
		cin >> ws; getline(cin, filename);
		inputFile.open(filename);
	}

}
// reading data from file and storing in different arrays

void readingDataFromFile(double sourseBase[10], double targetBase[10], double initialNumber[10],ifstream & inputFile)
{
	double num1, num2;
	double num3;

	const int ARRAY_LENGTH = 10;

//	char initialNumber[ARRAY_LENGTH];
//	char initialNumbe1[ARRAY_LENGTH];

	const int SIZE = 30;
	//int sourseBase[SIZE], targetBase[SIZE], initialNumber[SIZE];
	for (int i = 0; i < 30; i++)
	{
		inputFile >> num1;
		//cout << i + 1 << " the value of num from input file  is: " << num1 << endl<<endl;
		sourseBase[i] = num1;
		cout << "\n Element of source base array is: " << sourseBase[i];
		inputFile >> num2;
		targetBase[i] = num2;
		cout << "\n Element of targetBasearray is: " << targetBase[i];
		//inputFile.getline( num3,'\n');
		inputFile >> num3;
		initialNumber[i] = num3;
		cout << "\n Element of initialNumber is: " << initialNumber[i];
		//stringtochar[i] = initialNumber[i];
		//strcpy(stringtochar, initialNumber[i].c_str());
	
		//cout << "\n Element of initialNumber array is: " << initialNumber[i] << endl;

		//===============================================================================
	}
}