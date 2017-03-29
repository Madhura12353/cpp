//This lab is loading array and calculating highest lowest and average score
// Title: Array of scores with stats
// Programmer : Madhura Kulkarni
// Last modified: 12/05/2016 11:30 PM


# include<iostream>
# include<iomanip>
using namespace std;
void printBanner(int size);
double getValidScore();
double loadArray(double score[], int Size);
void displayArrayElement(double  nums[], int size);
int getLogicalSize(double score[], int size);
double getHighest(double score[], int size);
double getLowest(double score[], int size);
double getAverage(double score[], int size);
int main()
{

	const int  SIZE = 30;

	double  score[SIZE];
	double highest, lowest, average;
	int logicalSize;
	system("color E0");

	printBanner(SIZE);

	while (true)
	{
		const int  SIZE = 30;
		double  score[SIZE];
		getLogicalSize(score, SIZE);

		cout << "\nEnter the students' score. Enter a negative value to stop."
			<< "\n        [Physical size of the array is " << SIZE << "].                \n\n";

		//score[SIZE] = loadArray(score, SIZE);

		loadArray(score, SIZE);

		logicalSize = getLogicalSize(score, SIZE);
		cout
			<< "\n        Done loading scores"
			<< "\n        Logical size is: " << logicalSize << endl;

		cout << "\nHit ENTER to see the array:\n\n";
		cin.get();

		cout << "Now printing the scores and stats:\n";

		if (logicalSize > 0)
		{
			displayArrayElement(score, logicalSize);
			highest = getHighest(score, logicalSize);
			cout << "\n\n        *** The highest score is: " << highest;
			lowest = getLowest(score, logicalSize);
			cout << "\n        *** The lowest  score is: " << lowest;
			average = getAverage(score, logicalSize);
			cout << "\n        *** The average score is: " << average;

		}
		else
			cout << "\n        The array is empty!";





		cout << "\n\n                --------------------------  \n";
	}

	system("pause");
}


void printBanner(int size)
{
	cout << "\n               This program loads an array of doubles with students' score  "
		"\n                           using a negative value as the loop's sentinel       "
		"\n                                   calculate basic statistics                  "
		"\n                     setting physical size to " << size << " and default per line 5        "
		"\n                                  by Madhura                               \n\n";

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

double getValidScore()
{
	double score = getNumber();
	while (score > 100)
	{
		cout << "Invalid score. Scores cannot be greater than 100. Try again: ";
		score = getNumber();
	}
	return score;
}

double loadArray(double score[], int Size)
{

	int i, count = 1;
	double tempvar;

	for (i = 0; i < Size; i++)
	{
		cout << "Enter score for student " << i + 1 << ": ";
		tempvar = getValidScore();

		if (tempvar < 0) {
			score[i] = tempvar;
			return NULL;
		}
		else
		{
			score[i] = tempvar;
			if (i + 1 == Size)
				cout << "Array FULL! Cannot accept any more scores\n";
		}
	}
	return NULL;
}



int getLogicalSize(double score[], int size)
{

	int counter = 0;
	for (int i = 0; i < size; i++)
	{
		if (score[i] < 0)
		{
			return counter;
		}
		else
		{
			counter++;
		}
	}

	return counter;
}

void displayArrayElement(double score[], int size)
{
	int limitPerLine = 5;


	for (int i = 0, num = 1; i < size; i++, num++)
	{
		if (score[i] < 0)
			break;
		else
			cout << setw(7) << score[i] << (num % limitPerLine == 0 ? "\n" : " ");
	}


}

double getHighest(double score[], int size)
{
	double highest = 0;
	highest = score[0];

	for (int i = 0; i < size; i++)
	{
		if (score[i] > highest)
		{
			highest = score[i];
		}
	}
	return highest;
}

// this function is taking full array and finding out lowest element of the array
double getLowest(double score[], int size)
{
	double lowest = 0;
	lowest = score[0];
	for (int i = 0; i < size; i++)
	{
		if (score[i] < lowest)
		{
			lowest = score[i];
		}
	}

	return lowest;
}

double getAverage(double score[], int size)
{
	double total = 0;

	for (int i = 0; i < size; i++)
	{

		total += score[i];
	}

	return total / size;
}