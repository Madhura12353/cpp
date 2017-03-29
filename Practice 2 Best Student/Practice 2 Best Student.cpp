//
//
//
//

#include<iostream>
#include <string>
#include <iomanip>
using namespace std;

int main()
{

	int numOfStudents=0, grade,count=1, minGrade=0,maxGrade;
	string nameOfStudent, bestStudent;
	double total = 0;
	system ("color E0");
	system ("title Best student program by Madhura");

	cout << "\n              Midterm Sample Solution                "
		<< "\n          Best Student with initials capitalized      "
		<< "\n                       by H.Delta                     ";

	while (true)
	{
		
		numOfStudents = 0;
		total = 0;
		minGrade = 0;
		count = 1,

			cout << setprecision(2) << fixed;
		cout << "\n\n How many students do you have in your class ? ";
		while (!(cin >> numOfStudents))
		{
			cout << "       Only numbers please!Try again : ";
			cin.clear(); cin.ignore(80, '\n');
		}

		cin.ignore(80, '\n');

		//while (count <= numOfStudents)
		for (int count = 0; count < numOfStudents; count++)
		{

			cout
				<< "\nWhat is the student #" << count + 1 << " name?\n"
				<< "(I will skip initial white space, trim trailing white space\n"
				<< "and capitalize where needed) : ";
			//count++;
			cin >> ws;
			getline(cin, nameOfStudent);
			cout << "\nWhat is \"" << nameOfStudent << "'s \" midterm grade ?\n"
				<< "(I will make sure your input is numberic and positive int,\n"
				<< "//but not if it is less than 100) : ";
			while (!(cin >> grade))
			{
				cout << "       Only numbers please!Try again : ";
				cin.clear(); cin.ignore(80, '\n');
			}

			cin.ignore(80, '\n');
			while (grade < 0)
			{
				cout << "   Mid term grade must be POSITIVE. Try again: ";
				while (!(cin >> grade))
				{
					cout << "       Only numbers please!Try again : ";
					cin.clear(); cin.ignore(80, '\n');
				}

			}
			total += grade;
			if (grade > minGrade)
			{
				maxGrade = grade;
				bestStudent = nameOfStudent;
			}

		}
		cout 
			<< "\n        Your best student is " << bestStudent << " and he/she got " << maxGrade << endl
			<< "         The average course grade was " << total / numOfStudents;
		cout << "\n\n           ************************                         \n\n";
		cin.get();
	}
	
}