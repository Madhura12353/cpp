//
//
//
//



#include <iostream>
#include<vector>
# include <string>
using namespace std;
double getNumber();
int getInteger();
int getIntegerInRange();
int convertanybase2decimal(char charArray[], int base);
int computeArrayLength(char charArray[]);
bool isValidArray(char charArray[],int base, int counter);
char getValidArray(char charArray[], int base, int counter);
int main()
{

	int base;
	const int SIZE = 30;

	int total = 0, length, counter = 0;
	char charArray[SIZE];


	cout << "\nWhat is the current base? ";
	base = getIntegerInRange(); 


	//cout << "\n Base conversion from number to charcter: " << base + 48 << endl;
	cout << "\nWhat is the number you want to convert to decimal? ";
	cin >> charArray; cin.ignore(80, '\n');

	
	counter = computeArrayLength(charArray);

	//while (!validArray(charArray, base, counter))
	//bool isValid = isValidArray(charArray, base, counter);

	//cout << "\n the input number " << charArray[0] << " is " << isValid << endl;

	/*while (!isValid )
	{
		cout << "\n Invalid input try again: ";
		counter = 0;
		cin >> charArray; cin.ignore(80, '\n');
		counter = computeArrayLength(charArray);
	     isValid = validArray(charArray, base, counter);
		cout << "\n the input number " << charArray[0] << " is " << isValid << endl;
	}*/

	 getValidArray(charArray, base, counter);
//	cout << "\n size of given charachter array is: " << SIZE << endl;

//	cout << "Arrya is: " << charArray;

	convertanybase2decimal(charArray, base);

	//cout << "\n the final answer is: " << convertanybase2decimal(charArray, base);

	
	system("pause");

}


double getNumber()   //   DONE
{
	double number;
	while (!(cin >> number))
	{
		cout << "\tPlease no letter. Try Again: ";
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
	while (int(userInput) != userInput)
	{
		cin.clear(); //cin.ignore(80, '\n');
		cout << "\tYour number is not an integer. Try Again: ";
		//cin >> userinput; cin.ignore(80, '\n');
		userInput = getNumber();
	}

	return int(userInput);
}

int getIntegerInRange()
{
	int userInput = getInteger();
	while (userInput>36 || userInput <2)
	{
		cin.clear();
		cout << "\tInvalid base. Base must be";
		if (userInput > 36)
			cout << "  <= 36.";
		else if (userInput < 2)
			cout << " >=2. ";
		cout <<"Please try again:";
		userInput = getInteger();

	}

	return userInput;
}


/*
* This method validates each entry of the char array
* If any of the entry is invalid then it returns false
* otherwise it returns true
*/
bool isValidArray(char charArray[],int base,int counter) 
{
	for (int i = 0; i < counter; i++)
	{
		if (charArray[i] < '0' || charArray[i] > 'z')
		{
				return false;
		}
		else if (charArray[i] >= '0' && charArray[i] <= '9')
		{
			if (double (charArray[i]) != int(charArray[i]))
				return false;
			
			if (int(charArray[i]) - '0' > base )
			return false;
		}
		else if (charArray[i] >= 'A' && charArray[i] <= 'Z')
		{
			
			if (((charArray[i]) - 55)> base)
			return false;
		}
		else if (charArray[i] >= 'a' && charArray[i] <= 'z')
		{
			
			if ((int(charArray[i]) - 87) > base)
			return false;

		}
		else return true;
	}

       
}

char getValidArray(char charArray[],int base, int counter)
{
	bool isValid = isValidArray(charArray, base, counter);

	//cout << "\n the input number " << charArray[0] << " is " << isValid << endl;

	while (!isValid )
	{
	//cout << "\n Invalid input try again: ";
	counter = 0;
	cin >> charArray; cin.ignore(80, '\n');
	counter = computeArrayLength(charArray);
	isValid = isValidArray(charArray, base, counter);
	//cout << "\n the input number " << charArray[0] << " is " << isValid << endl;
	}

	return charArray[counter];
}



int computeArrayLength(char charArray[]) {
	int counter = 0;

	for (int i = 0; i < strlen(charArray); i++)
	{
		if (charArray[i] == '\n') {
		//	cout << "End reached " << endl;
			return counter;
		}
		else {
			counter = counter + 1;
			//cout << "counter is : " << counter << endl;
		}
	}

	//cout << "Array length is: " << counter << endl;
	return counter;
}



 int convertanybase2decimal(char charArray[],int base)
{
	int total = 0;

	for (int i = 0; i < strlen(charArray); i++)
	{
		//int base;
		

		int length = computeArrayLength(charArray);
		cout << "Character of array is :" << charArray[i] << endl;
		if (charArray[i] == '\n')
		{
			//cout << "End reached " << endl;
			break;
		}
		else {
			//cout << "Continue calculation with char " << charArray[i] << endl;
		}

		if (charArray[i] >= 48 && charArray[i] <= 57)
		{
			if (charArray[i] >= 48)
			{

				//cout << "\n base: " << base << "   raised to: " << length - i - 1;
				//cout << " = " << pow(base, length - i - 1) << endl
				//	<< (charArray[i] - 48) << " * " << pow(base, length - i - 1) << " = "
				//	<< (charArray[i] - 48)*pow(base, length - i - 1) << endl;
				total += (charArray[i] - 48)*pow(base, length - i - 1);
			}
			cout << "\nSize: " << length;

		}
		else if (charArray[i] >= 65 && charArray[i] <= 90)
		{

			//cout << "\n base: " << base << "   raised to: " << length - i - 1;
			//cout << " = " << pow(base, length - i - 1) << endl
			//	<< (charArray[i] - 55) << " * " << pow(base, length - i - 1) << " = "
			//	<< (charArray[i] - 55)*pow(base, length - i - 1) << endl;
			total += (charArray[i] - 55)*pow(base, length - i - 1);

		}
		else if (charArray[i] >= 97 && charArray[i] <= 122)
		{

			//cout << "\n base: " << base << "   raised to: " << length - i - 1;
			//cout << " = " << pow(base, length - i - 1) << endl
			//	<< (charArray[i] - 87) << " * " << pow(base, length - i - 1) << " = "
			//	<< (charArray[i] - 87)*pow(base, length - i - 1) << endl;
			total += (charArray[i] - 87)*pow(base, length - i - 1);
		}
		

	}
	cout << "\nfinal answer is: " << total << endl;

	return total;
}