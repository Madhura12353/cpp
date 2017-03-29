#include <iostream>
# include<string>
#include<fstream>
#include <cstdlib>
# include<iomanip>
# include "numSystemConversionHeader.h"
# include"Input validationHeader.h"
using namespace std;


void printBanner(int size, int maxBase)
{
	cout
		<< "\n     This program converts an integer number(up to " << size << " digits long) "
		<< "\n     from a base (up to " << maxBase << " digits long) to decimal and vice versa"
		<< "\n                      Includes input Validation                            "
		<< "\n    It also reads data from input file and creates output file of result  "
		<< "\n                           by Madhura                                    \n\n";
}

void printMenu()
{
	cout
		<< "\n 1] Convert from decimal to another base"
		<< "\n 2] Convert from an other base to decimal"
		<< "\n 3] Do conversions from an input file"
		<< "\n 4] Exit the program.";
}


void conversionFromDecimal2anotherBase()
{
	ofstream outputfile;
	const int
		MIN_BASE = 2,
		MAX_BASE = 36;
	int userInput, baseNumber;
	cout << "\nWhat is the decimal number you wish to convert? ";
	userInput = getPositiveInteger();
	cout << "To what base do you want to convert " << userInput << " to? ";
	baseNumber = getBaseInRange(MIN_BASE, MAX_BASE);
	convert10tob(userInput, baseNumber, outputfile);
}




void convert10tob(int inputNumber, int baseNumber, ostream& outputfile)
{
	char remainderArray[70];
	char digits[] = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	int counter = 0, lgsize;
	char reversedArray[70];
	while (inputNumber > 0)
	{
		remainderArray[counter] = digits[inputNumber % baseNumber];
		inputNumber /= baseNumber;
		counter++;
	}
	remainderArray[counter] = '\0';
	lgsize = getlgsize(remainderArray);
	reverseArray(remainderArray, reversedArray, lgsize);
	displeyFinalAnswer(remainderArray, lgsize, outputfile);
}


int getlgsize(char remainderArray[])
{
	int lgsize = 0;
	for (int i = 0; remainderArray[i] != '\0'; i++)
	{
		lgsize++;
	}
	return lgsize;
}

char displeyFinalAnswer(char remainderArray[], int &lgsize, ostream& outputfile)
{
	for (int i = 0; i < lgsize; i++)
	{
		outputfile << remainderArray[i];
		cout << remainderArray[i];
	}
	return remainderArray[lgsize];
}


// In convert10to any base we got a remainder array but that array is backword
// to display the correct answer we have to read it from the end 
//so this function is just reading the array in reverse order
void reverseArray(char remainderArray[], char reversedArray[], int& lgsize)
{
	int j = 0;
	for (int i = (lgsize - 1); i >= 0; i--)
	{
		reversedArray[j] = remainderArray[i];
		j++;
	}
	reversedArray[j] = '\0';
	for (int i = 0; i < lgsize; i++)
	{
		remainderArray[i] = reversedArray[i];
	}
}



// This function ask user current base and initial number
// and convert that number into decimal
void conversionFromanyBase2decimal()
{
	int baseNumber, answer;
	const int
		MIN_BASE = 2,
		MAX_BASE = 36;

	char charArray[SIZE];
	cout << "\nWhat is the current base? ";
	baseNumber = getBaseInRange(MIN_BASE, MAX_BASE);
	cout << "What is the number you want to convert to decimal? ";
	getValidArray(charArray, baseNumber);
	answer = convertanybase2decimal(charArray, baseNumber);
	cout << "\n***    " << charArray << " in base " << baseNumber << " converted to decimal is " << answer;
}

bool isValidArray(char charArray[], int& base)
{
	int   lgsize = getlgsize(charArray);
	for (int i = 0; i < lgsize; i++)
	{
		if (charArray[i] < '0' || charArray[i] > 'z')
		{
			return false;
		}
		else if (charArray[i] >= '0' && charArray[i] <= '9')
		{
			if (int(charArray[i]) - '0' >= base)
				return false;
			else
				return true;
		}
		else if (charArray[i] >= 'A' && charArray[i] <= 'Z')
		{
			if ((10 + (charArray[i] - 'A')) >= base)
				return false;
		}
		else if (charArray[i] >= 'a' && charArray[i] <= 'z')
		{
			if ((10 + (charArray[i] - 'a')) >= base)
				return false;
		}
		else return true;
	}

}



// this function is taking array from user and then on the basis of boolean value
// of isvalidarray function proceed. if bool value is false it asks the user to enter  array untill 
// user enters valid array
char getValidArray(char charArray[], int& base)
{
	cin >> charArray;
	bool isValid = isValidArray(charArray, base);

	while (!isValid)
	{
		cout << "\tYour number contains invalid digits. Try again: ";
		cin >> charArray;
		isValid = isValidArray(charArray, base);
	}
	return charArray[getlgsize(charArray)];
}




// This function is doing actual math and returning the final answer as a total
int convertanybase2decimal(char charArray[], int base)
{
	int total = 0;
	int length = getlgsize(charArray);

	for (int i = 0; i < length; i++)
	{
		if (charArray[i] >= '0' && charArray[i] <= '9')
		{
			total += (charArray[i] - '0')*pow(base, length - i - 1);
		}
		else if (charArray[i] >= 'A' && charArray[i] <= 'Z')
		{
			total += (10 + (charArray[i] - 'A'))*pow(base, length - i - 1);
		}
		else if (charArray[i] >= 'a' && charArray[i] <= 'z')
		{
			total += (10 + (charArray[i] - 'a'))*pow(base, length - i - 1);
		}
	}
	return total;
}

// this function is doing different functions
//1) open input file 2)read datafrom file 
//3) create output file 4) conversion 5) storing and displying result
void readingDataFromFileandConvert()
{
	ifstream inputFile;
	ofstream outputfile;
	//const int SIZE = 70;
	double sourseBase[SIZE], targetBase[SIZE];
	char initialNumber[SIZE][70], finalanswer[SIZE], charArray[SIZE];

	openTheInputFile(inputFile);
	readingDataFromFile(sourseBase, targetBase, initialNumber, inputFile);
	createOutputFile(outputfile);
	convertAndcreatetable(sourseBase, targetBase, initialNumber, outputfile);
	inputFile.close();
	outputfile.close();
}

// this function is opening the inputfile 

void openTheInputFile(ifstream& inputFile)
{
	string filename;
	cout << "\nWhat file contains the desired convertions?\n"
		<< "    I will remove any initial or trailing white space: ";
	cin >> ws; getline(cin, filename);
	inputFile.open(filename);
	while (inputFile.fail())
	{
		system("color b3");
		cout << "\a\tFailed to open file\n"
			<< "\t Try again: ";
		cin >> ws; getline(cin, filename);
		inputFile.open(filename);
	}
	filename.erase(filename.find_last_not_of(" \t\n\r\f\v") + 1);
	system("color E0");
	cout << "\n\n            #####################################################\n\n"
		<< "File \"" << filename << "\" was successfully connected!\n";
}

// this function is reading data from file and storing it in different array
void readingDataFromFile(double sourseBase[], double targetBase[], char initialNumber[][SIZE], ifstream & inputFile)
{
	int i = 0;
	while (!(inputFile.eof()))
	{

		inputFile >> sourseBase[i] >> targetBase[i] >> initialNumber[i];
		i++;
	}
	sourseBase[i] = '\0';
}

// this function just validate the data from inputfile befor doing conversion from any base 
// to other base
string validateInput(double sBase, double tBase, char iNumber[])
{
	int temp = int(sBase);
	if (sBase != int(sBase))
		return  "\t\tIllegeal  sourseBase base";
	else if (sBase > 36 || sBase < 2)
		return "\t\tIllegal  base (not in [2, 36])";
	else if (tBase > 36 || tBase < 2)
		return "\t\tIllegal  base (not in [2, 36])";
	else if (tBase != int(tBase))
		return  "\t\tIllegeal  targetBase base";
	else if (!isValidArray(iNumber, temp))
		return "\t\tIllegal initial number";
	else
		return "valid";
}


//this function is getting array length from inputfile
int getArrayLength(double dArray[])
{
	int counter = 0;
	while (dArray[counter] != '\0')
	{
		counter++;
	}
	return counter;
}



// this function ask user the name of output file and create that file for storing further data
void createOutputFile(ofstream& outputfile)
{
	string outputFileName;
	cout << "\n Where do you want the convertions to go to? ";
	cin >> ws; getline(cin, outputFileName);
	outputFileName = outputFileName + "OUT.txt ";
	outputfile.open(outputFileName);

	while (outputfile.fail())
	{
		system("color b3");
		cout << "\tFailed to open file: " << "\"" << outputFileName << "\".\n"
			<< "\tTry again: ";
		cin >> ws;
		getline(cin, outputFileName);
		outputfile.open(outputFileName);
	}
	cout << endl << outputFileName << "file is opened succesfully \n\n";
}

// this function is doing conversion from any base to any other base
// here it is calling first function convert any base to decimal 
// and then calling the decimal to any base
void anyBase2anybase(double base, double tarbase, char initialNumber[], ostream& outputfile)
{
	int finalanswer;
	finalanswer = convertanybase2decimal(initialNumber, base);
	convert10tob(finalanswer, tarbase, outputfile);
}

// this function is first doing conversion if data is valid
// else displying error massage 
// and meanwhile displying the result in table format
void convertAndcreatetable(double sourseBase[], double targetBase[], char initialNumber[][SIZE], ostream& outputfile)
{
	string result[SIZE];
	string validationmsg;
	cout << endl << endl << setw(10) << "Source Base" << setw(15) << "Target Base" << setw(20)
		<< "Initial Number" << setw(24) << "Result\n";
	outputfile << endl << endl << setw(10) << "sourse base" << setw(15) << "target base" << setw(20)
		<< "Initial Number" << setw(18) << "result\n";
	for (int i = 0; i < getArrayLength(sourseBase); i++)
	{
		cout << setw(6) << sourseBase[i] << setw(15) << targetBase[i] << setw(18) << initialNumber[i] << setw(25);
		outputfile << setw(8) << sourseBase[i] << setw(10) << targetBase[i] << setw(19) << initialNumber[i] << setw(22);
		validationmsg = validateInput(sourseBase[i], targetBase[i], initialNumber[i]);
		result[i] = validationmsg;
		if (result[i] == "valid")
			anyBase2anybase(sourseBase[i], targetBase[i], initialNumber[i], outputfile);
		else
		{
			cout << result[i];
			outputfile << result[i];
		}
		cout << endl << endl;
		outputfile << endl << endl;
	}
}


