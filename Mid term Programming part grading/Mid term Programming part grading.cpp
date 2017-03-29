//
//
//
//

#include<iostream>
#include<string>
using namespace std;

int main()
{

	int numOfStudents = 1, gradeOfFirstExam, numOfExams = 1, totalnumOfStudents = 0, count = 0;
	double weight, total = 0, finalgrade = 0;
	string nameOfStudent;
	system("color E0");



	cout << "\n\n How many students are in this class ?: ";
	//cin >> numOfStudents; cin.ignore(80, '\n');

	while (!(cin >> numOfStudents))
	{
		cout << "No letters plese Try again: ";
		cin.clear(); cin.ignore(80, '\n');
	}
	cin.ignore(80, '\n');
	//while (numOfStudents >= 1 && numOfStudents != count)
	//{

		//cout << numOfStudents << endl;


			//while (count < numOfStudents)
		for (int count = 0; count < numOfStudents; count++)
		{
			cout << "\n\nGrades are as followes:\n"
				<< "(93, 100] = > A\n"
				<< "(83, 93] = > B\n"
				<< "(73, 83] = > C\n"
				<< "(63, 73] = > D\n"
				<< "[0, 63] = > F\n";

			int  gradeOfFirstExam, numOfExams = 1, totalnumOfStudents = 0;
			double weight, total = 0, finalgrade = 0;
			
			cout << "\n\nWhat is the NAME of student" << count + 1 << "[may contain spaces, skip initial white space]: \n";

			cin >> ws;
			getline(cin, nameOfStudent);
			cout << nameOfStudent << endl;

			while (total != 100)
			{


				cout << "What is the NUMERIC GRADE for " << nameOfStudent << "'s exam #:" << numOfExams << ": ";
				cin >> gradeOfFirstExam; cin.ignore(80, '\n');
				while (gradeOfFirstExam < 0 || gradeOfFirstExam>100)
				{
					cout << "     Score must be between 0 and 100 . Try again:";
					cin >> gradeOfFirstExam; cin.ignore(80, '\n');

				}
				numOfExams++;
				cout << "\nWhat is the WEIGHT of this exam? [ex. 25%]:\n"
					<< "(100 % currently unaccounted for) ";
				cin >> weight; cin.ignore(80, '\n');


				while (int(weight) != weight)
				{
					cout << "      \nWeight must be a WHOLE number . Try again:";
					cin >> weight; cin.ignore(80, '\n');

				}

				while (weight < 1 || weight>100)
				{
					cout << " Weight must be between 1 and 100 . Try again:";
					cin >> weight; cin.ignore(80, '\n');

				}
				finalgrade += gradeOfFirstExam * weight / 100;
				total += weight;
				cout << "total weight = " << total << endl;


				//cout << "your grade is\n\n";
			}


			cout << nameOfStudent << "got " << finalgrade << " points\n";
			cout << "Thus course grade is: ";


			if (finalgrade > 93 && finalgrade <= 100)
				cout << "A";
			else if (finalgrade > 83 && finalgrade <= 93)
				cout << "B";
			else if (finalgrade > 73 && finalgrade <= 83)
				cout << "C";
			else if (finalgrade > 63 && finalgrade <= 73)
				cout << "D";
			else if (finalgrade >= 0 && finalgrade <= 63)
				cout << "F";
			if (count < numOfStudents) { system("pause"); system("CLS"); }

		}
	

	system("pause"); system("CLS");
	cout << "Thank you for using our program\n"
		<< "Hit ENTER to terminate.\n";
	cin.get();


}

