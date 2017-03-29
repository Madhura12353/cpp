//
//
//
//
#include <iostream>
# include<fstream>
# include<string>
using namespace std;
char convert10tob(int inputNumber, int baseNumber);
void displeyFinalAnswer(char remainderArray[], int logicalSize);
double getNumber();  //   DONE
int getInteger();     //   DONE
int getIntegerInRange();
int convertanybase2decimal(char charArray[], int base);
int computeArrayLength(char charArray[]);
bool isValidArray(char charArray[], int base, int counter);


int main()
{
	ifstream inputFile;
	string filename;
	double num1, num2, num3;
	char inputNumber[100];
	char inputNumberAray[100][100];
	const int SIZE = 30;
	double sourseBase[SIZE], targetBase[SIZE], initialNumber[SIZE];
	//int userInput, baseNumber;


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

	for (int i = 0, count = 1; i < 30; i++)
	{
		inputFile >> num1;
		//cout << i + 1 << " the value of num from input file  is: " << num1 << endl << endl;
		sourseBase[i] = num1;
		//cout << "\n Element of source base array is: " << sourseBase[i] << endl;
		inputFile >> num2;

		targetBase[i] = num2;
		//cout << "\n Element of targetBasearray is: " << targetBase[i] << endl;

	//	inputFile >> num3;
	//	initialNumber[i] = num3;

		inputFile >> inputNumber;

		//cout << "\n Element of initialNumber array is: " << initialNumber[i] << endl;

	}

	for (int i = 0; i < 3; i++)
	{
		//cout << "\nEnter the source base convert(N): ";
		double sourcebase = sourseBase[i];
		cout << "\nsource base  of the number is: " << sourcebase;
		if ((sourcebase) != int(sourcebase))
			cout << " Illegal source base (not int)";
		else if (sourcebase > 36 || sourcebase < 2)
			cout << "Illegal sourcebase (not in [2, 36])";
		else (int(sourcebase));
			//convert10tob(userInput, baseNumber); )


		//cout << "\nEnter the target base <= N: ";
		double targetbase = targetBase[i];
		cout << "\ntarget base number is: " << targetbase ;
		if ((targetbase) != int(targetbase))
			cout << " Illegal targetbase  (not int)";
		else if (targetbase > 36 || targetbase < 2)
			cout << "Illegal targetbase (not in [2, 36])";
		else (int(targetbase));

		//cout << "\n Enter the integer to convert(N): ";
		double initlialnumber = initialNumber[i];
		cout << "\nuser input is:  " << initlialnumber << endl<<endl;


		//char result[] = convertanybase2decimal(initlialnumber, sourcebase);
		//string final = convert10toAny(result[], targetbase);
	}



	
	inputFile.close();


	system("pause");
}



char convert10tob(int inputNumber, int baseNumber)
{
	char digits[] = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	int remainder, division, index, logicalSize = 0;
	char letter;
	const int ARRAY_LENGTH = 70;
	char remainderArray[ARRAY_LENGTH];


	for (int i = 0; i < ARRAY_LENGTH && inputNumber != 0; i++)
	{
		remainderArray[i] = digits[inputNumber % baseNumber];
		//cout << "remainder: " << remainderArray[i] << endl;
		inputNumber /= baseNumber;
		//cout << "\ndivision: " << inputNumber << endl;
		if (inputNumber == 0)
			remainderArray[i + 1] = '\0';

	}

	cout << "Computing logical length of an array" << endl;
	logicalSize = strlen(remainderArray);

	cout << "\n Logical size of the given array is: " << logicalSize << endl;

	displeyFinalAnswer(remainderArray, logicalSize);
	return 0;

}


void displeyFinalAnswer(char remainderArray[], int logicalSize)
{
	cout << "\n The final number is: ";
	for (int i = (logicalSize - 1); i >= 0; i--)
	{
		cout << remainderArray[i];
	}

}



/*double getNumber()   //   DONE
{
	double number;
	while (!(cin >> number))
	{
		cout << "        Please no letter. Try Again: ";
		cin.clear(); cin.ignore(80, '\n');

	}
	cin.ignore(80, '\n');
	return number;
}


// This function ask for integer if its double/ character it will ask again for integer 
int getInteger()     //   DONE
{
	double userInput = getNumber();
	// cin.ignore(80, '\n');
	// cin >> userinput;
	while (int(userInput) != userInput || userInput > 10000000000)
	{
		cin.clear(); //cin.ignore(80, '\n');
		cout << "\t Your number is not an integer!";
		//cin >> userinput; cin.ignore(80, '\n');
		userInput = getNumber();
	}

	return int(userInput);
}

int getIntegerInRange()
{
	double userInput = getInteger();

	while (userInput < 2 || userInput >36)
	{
		cout << "        Invalid base. Base must be <= 36. Please try again:";
		userInput = getInteger();
	}



	return userInput;
}*/

bool isValidArray(char charArray[], int base, int counter)
{
	for (int i = 0; i < counter; i++)
	{
		if (charArray[i] < '0' || charArray[i] > 'z')
		{
			cout << "\n character array element is symbols : " << int(charArray[i]) - '0' << "  base : " << base << endl;
			return false;
		}
		else if (charArray[i] >= '0' && charArray[i] <= '9')
		{
			if (double(charArray[i]) != int(charArray[i]))
				return false;
			cout << "\n character array element is number : " << int(charArray[i]) - '0' << "  base : " << base << endl;
			if (int(charArray[i]) - '0' > base)
				return false;
		}
		else if (charArray[i] >= 'A' && charArray[i] <= 'Z')
		{
			cout << "\n character array element is uppercase letter: " << (int(charArray[i]) - 55) << " base : " << base << endl;
			if (((charArray[i]) - 55)> base)
				return false;
		}
		else if (charArray[i] >= 'a' && charArray[i] <= 'z')
		{
			cout << "\n character array element is lower case letter: " << (int(charArray[i]) - 87) << " base : " << base << endl;
			if ((int(charArray[i]) - 87) > base)
				return false;

		}
		else return true;
	}


}

char getValidArray(char charArray[], int base, int counter)
{
	bool isValid = isValidArray(charArray, base, counter);

	cout << "\n the input number " << charArray[0] << " is " << isValid << endl;

	while (!isValid)
	{
		cout << "\n Invalid input try again: ";
		counter = 0;
		cin >> charArray; cin.ignore(80, '\n');
		counter = computeArrayLength(charArray);
		isValid = isValidArray(charArray, base, counter);
		cout << "\n the input number " << charArray[0] << " is " << isValid << endl;
	}

	return charArray[counter];
}



int computeArrayLength(char charArray[]) {
	int counter = 0;

	for (int i = 0; i < strlen(charArray); i++)
	{
		if (charArray[i] == '\n') {
			cout << "End reached " << endl;
			return counter;
		}
		else {
			counter = counter + 1;
			cout << "counter is : " << counter << endl;
		}
	}

	cout << "Array length is: " << counter << endl;
	return counter;
}



int convertanybase2decimal(char charArray[], int base)
{
	int total = 0;

	for (int i = 0; i < strlen(charArray); i++)
	{
		//int base;


		int length = computeArrayLength(charArray);
		cout << "Character of array is :" << charArray[i] << endl;
		if (charArray[i] == '\n')
		{
			cout << "End reached " << endl;
			break;
		}
		else {
			cout << "Continue calculation with char " << charArray[i] << endl;
		}

		if (charArray[i] >= 48 && charArray[i] <= 57)
		{
			if (charArray[i] >= 48)
			{

				cout << "\n base: " << base << "   raised to: " << length - i - 1;
				cout << " = " << pow(base, length - i - 1) << endl
					<< (charArray[i] - 48) << " * " << pow(base, length - i - 1) << " = "
					<< (charArray[i] - 48)*pow(base, length - i - 1) << endl;
				total += (charArray[i] - 48)*pow(base, length - i - 1);
			}
			cout << "\nSize: " << length;

		}
		else if (charArray[i] >= 65 && charArray[i] <= 90)
		{

			cout << "\n base: " << base << "   raised to: " << length - i - 1;
			cout << " = " << pow(base, length - i - 1) << endl
				<< (charArray[i] - 55) << " * " << pow(base, length - i - 1) << " = "
				<< (charArray[i] - 55)*pow(base, length - i - 1) << endl;
			total += (charArray[i] - 55)*pow(base, length - i - 1);

		}
		else if (charArray[i] >= 97 && charArray[i] <= 122)
		{

			cout << "\n base: " << base << "   raised to: " << length - i - 1;
			cout << " = " << pow(base, length - i - 1) << endl
				<< (charArray[i] - 87) << " * " << pow(base, length - i - 1) << " = "
				<< (charArray[i] - 87)*pow(base, length - i - 1) << endl;
			total += (charArray[i] - 87)*pow(base, length - i - 1);
		}


	}
	cout << "\nfinal answer is: " << total << endl;

	return total;
}