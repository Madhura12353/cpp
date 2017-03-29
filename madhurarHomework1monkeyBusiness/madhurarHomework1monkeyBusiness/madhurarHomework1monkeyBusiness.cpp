// Monkey business p 449 # 5
// Homework1 review
// Programmer: Madhura kulkarni
// Date modified: 01/23/2016

#include <iostream>
# include <iomanip>
using namespace std;
int main()
{

	const int NUM_MONKEY = 3;
	const int NUM_WEEK = 5;
	int data[NUM_MONKEY][NUM_WEEK];
	
	int  monkey, week, numOfDays=0, min, max,pounds;

	double total=0;
	double average=0;
	cout << "          ***  Monkey Business  ***         " << endl;
	cout << "\nEnter amount of food eaten per pound: " << endl
		<< "(food quantity must be greater than zero)\n\n" << endl;
	cout << fixed << setprecision(2);
	for (monkey = 0; monkey < NUM_MONKEY; monkey++)     // for each monkey
	{
		for (week = 0; week < NUM_WEEK; week++)         // for each week
		{
			cout << "Monkey " << (monkey + 1);          //asking amount of food in pounds and storing it in 2d array
			cout << ", WEEK " << (week + 1) << " : ";
			cin >> data[monkey][week];
			pounds = data[monkey][week];
			while (pounds < 0)                          //if  food quantity is less than zero doing inpput validation
			{
				cout << "please amount food eaten in pounds must be greater than zero\n"
					<< "Try again: ";
				cin  >> data[monkey][week];
				pounds = data[monkey][week];
			}
			 total += data[monkey][0];                //      getting total amount of food here ingnoring week so set week = 0
			 numOfDays++;                             // counting toatl num of days 
				
		}
		
		
		cout << endl;
	}

	cout << "num of days= " << numOfDays << endl;         // displying total num of days
	cout << "total: " << total << endl;                   // total is amount of food 
	average = total / numOfDays;                          // calculating average amount of food eaten
	cout << "	***Average amount of food eaten "<<endl
		 <<"       per day by whole monkey family is:" <<average<<" pound "<< endl<<endl; // displying average
	
	// Get least and greatest amount of food eaten by any one monkey.
	min = max = data[0][0];    // setting min and max = 0 as a initial value
	for (int row = 0; row < NUM_MONKEY; row++)
	{
		for (int col = 0; col < NUM_WEEK; col++)
		{

			if (data[row][col] < min)   //  compairing food eaten per day if food eaten is less than initial value
			{
				min = data[row][col];   //  then setting that valu for min
			}
			if (data[row][col] > max)    // if food eaten in larger than initial value
			{
				max = data[row][col];   // then setting that value as a max
			}
		}
	}

	cout << "	***Least amount of food eaten : " << min <<" pound "<< endl;   // displying min and maximum amount of food eaten by monkey family
	cout << "	***Greatest amount of food eaten: " << max <<" pound "<< endl;
	

	system("pause");
}


