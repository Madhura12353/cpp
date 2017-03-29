//
//
//
//

#include <iostream>
# include<string>
#include<fstream>
#include <cstdlib>
# include<iomanip>
using namespace std;
void reverseArray(char remainderArray[], char reversedArray[], int& lgsize);
void convert10tob(int inputNumber, int baseNumber, ostream& outputfile);
char displeyFinalAnswer(char remainderArray[], int &lgsize, ostream& outputfile);
int getlgsize(char remainderArray[]);
int convertanybase2decimal(char charArray[], int base);
//int computeArrayLength(char charArray[]);
bool isValidArray(char charArray[], int& base);
char getValidArray(char charArray[], int& base);
int readingDataFromFile(double sourseBase[], double targetBase[], char initialNumber[][10], ifstream & inputFile);
void anyBase2anybase(double sourseBase[], double targetBase[], char initialNumber[][10], ostream& outputfile);
//void convertAnyBase2anybase(double sourseBase[], double targetBase[], char initialNumber[][10], ostream& outputfile);
void openTheInputFile(ifstream& inputFile);
string validateInput(double sBase, double tBase, char iNumber[]);
void createOutputFile(ofstream& outputfile);
void displayResult(double sourseBase[], double targetBase[], char initialNumber[][10], ostream& outputfile);
int main()

{
	ofstream outputfile;
	ifstream inputFile;
	string filename;
	//double num1, num2;
	//char num3;
	const int SIZE1 = 30;
	double sourseBase[SIZE1], targetBase[SIZE1];
	char initialNumber[SIZE1][10];
	

	int number, base,currentbase;
	const int SIZE = 70;
	char finalanswer[SIZE];
	char charArray[SIZE];
	int currentBase = 10;

	/*cout << "\n Enter number: ";
	cin >> number;
	cout << "\nEnter base: ";
	cin >> base;


	convert10tob(number, base);*/
	
	
	/*cout << "\nWhat is the current base? ";
	cin >> currentbase;

	cout << "What is the number you want to convert to decimal? ";

	charArray[SIZE]=getValidArray(charArray, currentbase); // The logic of getting number should be in another function

											// Actual Conversion
	int finalAnswer = convertanybase2decimal(charArray, currentbase);
	cout << finalAnswer<<endl;*/

	cout << "\n reading data from file: \n";
	openTheInputFile(inputFile);

	int length = readingDataFromFile(sourseBase, targetBase, initialNumber, inputFile);
	//cout << "\n length of the reading data array is: " << length << endl;
	int finalAnswer;

	/*for (int i = 0; i < length; i++)
	{
		
			finalAnswer = convertanybase2decimal(initialNumber[i], sourseBase[i]);
			cout << "\n final answer is " << finalAnswer;
		
	}
	//convert10tob(initialNumber[0], targetBase[0], currentBase);*/
	
	createOutputFile(outputfile);
	
	anyBase2anybase(sourseBase, targetBase, initialNumber, outputfile);
	
	inputFile.close();


	system("pause");
}


void convert10tob(int inputNumber, int baseNumber, ostream& outputfile)
{
	char remainderArray[70];
	char digits[] = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	int counter = 0;
	char reversedArray[70];

	while (inputNumber > 0)
	{
		remainderArray[counter] = digits[inputNumber % baseNumber];
		inputNumber /= baseNumber;
		counter++;
	}
	remainderArray[counter] = '\0';

	int lgsize = getlgsize(remainderArray);

	reverseArray(remainderArray, reversedArray, lgsize);

	
	displeyFinalAnswer(remainderArray, lgsize,  outputfile);
	
	/*	cout << "STARTING ANYBASE TO DECIMAL" << endl;
	int a = convertanybase2decimal(remainderArray, 16);
	cout << "Conversion is: " << a << endl;

	*/
}



int getlgsize(char remainderArray[])
{
	int lgsize =0;
	for (int i = 0; remainderArray[i]!='\0';i++)
	{
		lgsize++;
	}

	return lgsize;
}

void reverseArray(char remainderArray[], char reversedArray[], int& lgsize)
{

	int j = 0;
	for (int i = (lgsize - 1); i >= 0; i--)
	{
		reversedArray[j] = remainderArray[i];
		j++;
	}
	reversedArray[j] = '\0';

	for (int i = 0; i<lgsize; i++)
	{
		remainderArray[i] = reversedArray[i];
	}
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


/*void displeyFinalAnswer(char remainderArray[], int &lgsize)
{
	for (int i = 0; i < lgsize; i++)
	{
		cout << remainderArray[i];
	}
}*/





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
			total += (10+(charArray[i] - 'A'))*pow(base, length - i - 1);
		}
		else if (charArray[i] >= 'a' && charArray[i] <= 'z')
		{
			total += (10 + (charArray[i] - 'a'))*pow(base, length - i - 1);
		}
	}
	return total;
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
				if (int(charArray[i]) - '0' > base)
				return false;
		}
		else if (charArray[i] >= 'A' && charArray[i] <= 'Z')
		{
			if ((10 + (charArray[i] - 'A'))> base)
			return false;
		}
		else if (charArray[i] >= 'a' && charArray[i] <= 'z')
		{
			if ((10 + (charArray[i] - 'a'))  > base)
			return false;
		}
		else return true;
	}
	 return true;
}

char getValidArray(char charArray[], int& base)
{
	cin >> charArray;
	bool isValid = isValidArray(charArray, base);

	//cout << "\n the input number " << charArray[0] << " is " << isValid << endl;
	int  lgsize=0;
	while (!isValid)
	{
		cout << "       Your number contains invalid digits. Try again:";
	    //int  lgsize = 0;
		//cin >> charArray; 
		isValid = isValidArray(charArray, base);
		lgsize = getlgsize(charArray);
		
		//cout << "\n the input number " << charArray[0] << " is " << isValid << endl;
	}

	return charArray[lgsize];
}



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
	cout << "File " << filename << " was successfully connected!";

}

int readingDataFromFile(double sourseBase[], double targetBase[], char initialNumber[][10], ifstream & inputFile)
{
	
	double num1, num2;
	
	int counter=0;
	const int ARRAY_LENGTH = 10;
	char num3[ARRAY_LENGTH];
	
	int i = 0;
	while (!(inputFile.eof()))
		{
			inputFile >> num1>>num2;
			if (inputFile.eof()) break;
			sourseBase[i] = num1;
			//cout << "\nsourseBase:" << sourseBase[i];
			targetBase[i] = num2;
			//cout << "\ntargetBase:" << targetBase[i];
			inputFile >> num3;
			if (inputFile.eof()) break;
			for (int j = 0; j < 6; j++)
			{
				initialNumber[i][j] = num3[j];

			}
			//cout << "\n row number: "<<i<<" initialNumber:" << initialNumber[i] << endl;
			i++;
		}
		//cout << "\n Number of rows in input file is: " << i<<endl;
		return i;
}

void createOutputFile(ofstream& outputfile)
{
	string outputFileName;
	cout << "\nWhere do you want the convertions to go to??\n"
		<< "\t(do not forget the file name extension) ";
	cin >> ws;
	getline(cin, outputFileName);

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
	cout << outputFileName <<"file is opened succesfully \n";
}
string validateInput(double sBase, double tBase, char iNumber[])
{
	int temp = int(sBase);
	if (sBase != int(sBase))
		return  "     illegeal  sourseBase base";
	else if (sBase  > 36 || sBase  < 2)
		return "     Illegal  base (not in [2, 36])";
	else if (tBase  > 36 || tBase  < 2)
		return "     Illegal  base (not in [2, 36])";
	else if (tBase != int(tBase))
		return  "    illegeal  targetBase base";
	else if (!isValidArray(iNumber, temp))
		return "     illegal initial number";
	else 
		  return "valid";
}





 

void anyBase2anybase(double sourseBase[], double targetBase[], char initialNumber[][10], ostream& outputfile)
{
	int finalanswer;
	string result[30];
	string validationmsg;
	cout << endl << endl << setw(10) << "sourse base" << setw(15) << "target base" << setw(15) << "Initial Number" << setw(15) << "result\n";
	outputfile <<endl<<endl<<setw(10) <<"sourse base"<< setw(15)<<"target base"<<setw(15)<<"Initial Number"<<setw(15)<<"result\n";
	for (int i = 0; i < 10; i++)
	{  
		cout << setw(8) << sourseBase[i] << setw(10) << targetBase[i] << setw(19) << initialNumber[i] << setw(15);
		outputfile << setw(8) <<sourseBase[i] << setw(10) << targetBase[i] << setw(19) << initialNumber[i]  << setw(15);
		validationmsg = validateInput(sourseBase[i], targetBase[i], initialNumber[i]);
		result[i] = validationmsg;
		finalanswer = convertanybase2decimal(initialNumber[i], sourseBase[i]);	
		if (result[i]== "valid")
			 convert10tob(finalanswer, targetBase[i], outputfile);
		else
		{
			cout << result[i];
			
			outputfile << result[i];
			
		}
		cout << endl << endl;
		outputfile << endl << endl;
	}		
}


