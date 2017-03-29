//
//
//
//

# include<iostream>
using namespace std;

void printMenu();
double getNumber();
int getInteger();
int getPositiveInteger();
int getIntInrange(int min , int max);
int getBaseInRange(int min, int max);
char convert10tob(int inputNumber, int baseNumber);
void displeyFinalAnswer(char remainderArray[], int logicalSize);
int convertanybase2decimal(char charArray[], int base);
int computeArrayLength(char charArray[]);


int main()
{
	system("color E0");

	int choice, userInput, baseNumber , counter;
	const  int 
		SIZE = 30,
		MIN_BASE = 2,
		MAX_BASE = 36;
	char charArray[SIZE];


	 printMenu();

	cout << "\n\nchoice: ";
	choice = getIntInrange(1, 4);//  getIntInRange(1, 4)


		switch (choice)
		{
		case 1:  
			cout << "Enter the integer to convert(N): ";
			userInput = getInteger();
			cout << "Enter the base <= N: ";
			baseNumber = getBaseInRange(MIN_BASE, MAX_BASE);
			if (userInput != 0)
			{
				cout << "Conversion Done " << endl;
				convert10tob(userInput, baseNumber);
			}
			else
				cout << "0" << endl;
			break;
		case 2:
			cout << "\nWhat is the current base? ";
			baseNumber = baseNumber = getBaseInRange(MIN_BASE, MAX_BASE);
			cout << "What is the number you want to convert to decimal? ";
			cin >> charArray; cin.ignore(80, '\n');
			counter = computeArrayLength(charArray);
			convertanybase2decimal(charArray, baseNumber);
			cout << "\n the final answer is: " << convertanybase2decimal(charArray, baseNumber);
			break;

		case 3: 
				cout << "\n In progress\n"; 
				break;
			case 4:cout << "\n Thank you for converting with us.Hit ENTER to end the program."; 
				cin.get();	

		}
		cout << "\n";
		system("pause");

}
void printMenu()
{
	cout
		<< "\n1] Convert from decimal to another base"
		<< "\n2] Convert from an other base to decimal"
		<< "\n3] Do conversions from an input file"
		<< "\n4] Exit the program.";
}

int getPositiveInteger()
{
	int userInput = getInteger();
	
	while (userInput<=0)
	{
		cout << "        Your number must be greater than or equal to 1.\n"
			<< "         Try again:";
		userInput = getInteger();
	}

	return userInput;
}

int getIntInrange( int min  , int max)
{
	int userInput = getPositiveInteger();
		while (userInput > max || userInput< min)
	{
			cout << "\n          Your number must be less than or equal to "<< max <<"."
				<< "\n          Try Again: ";
			userInput = getPositiveInteger();		
	}
		return userInput;
}



double getNumber()   //   DONE
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

	while (int(userInput) != userInput )
	{
		cout << "\t Your number is not an integer!";
		userInput = getNumber();
	}

	return int(userInput);
}

int getBaseInRange(int min, int max)
{
	int userInput = getInteger();

	while (userInput < min || userInput >max)
	{
		cout << "        Invalid base. Base must be <= "<< max<<" Please try again:";  // what if less than teh min
		userInput = getInteger();
	}

	return userInput;
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
		inputNumber /= baseNumber;
		if (inputNumber == 0)
			remainderArray[i + 1] = '\0';
	}
	logicalSize = strlen(remainderArray);
    displeyFinalAnswer(remainderArray, logicalSize);
	return 0;

}

void displeyFinalAnswer(char remainderArray[], int logicalSize)
{
	for (int i = (logicalSize - 1); i >= 0; i--)
	{
		cout << remainderArray[i];
	}
	cout << "\n displying final answer as a arry: " << remainderArray[logicalSize];

}

int convertanybase2decimal(char charArray[], int base)
{
	int total = 0;

	for (int i = 0; i < strlen(charArray); i++)
	{
		int length = computeArrayLength(charArray);
	
		if (charArray[i] == '\n')
		{
			break;
		}
		else
		{
			
		}

		if (charArray[i] >= '0' && charArray[i] <= '9')
		{
	
				total += (charArray[i] - 48)*pow(base, length - i - 1);
		
		}
		else if (charArray[i] >= 'A' && charArray[i] <= 'Z')
		{
			total += (charArray[i] - 55)*pow(base, length - i - 1);

		}
		else if (charArray[i] >= 'a' && charArray[i] <= 'z')
		{
			total += (charArray[i] - 87)*pow(base, length - i - 1);
		}
	}
	
	return total;
}

int computeArrayLength(char charArray[])
{
	int counter = 0;

	for (int i = 0; i < strlen(charArray); i++)
	{
		if (charArray[i] == '\n') 
		{
			return counter;
		}
		else 
		{
			counter = counter + 1;		
		}
	}
	return counter;
}
