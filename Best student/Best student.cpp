//
//
//
//

#include<iostream>
#include<string>
using namespace std;

int main()
{

	int numOfStudent, count = 0, midTermGrade;
	string nameOfStudent, beststudent;


	system("color E0");

	cout
		<< "\n                   Midterm Sample Solution                 \n"
		<< "              Best Student with initials capitalized         \n"
		<< "                         by Madhura                          \n";


	while (true)
	{
		cout << "\n\nHow many students do you have in your class ? ";
		cin >> numOfStudent; cin.ignore(80, '\n');
		int grades = 0;
		// this loop asks the user all students name and mid term grade
		

			cout << "What is the student # " << count << " name ?\n"
				<< "(I will skip initial white space, trim trailing white space\n"
				<< "	and capitalize where needed) : ";
			cin >> ws;
			getline(cin, nameOfStudent);
			
			//toupper(nameOfStudent[0]);
			/*if (!nameOfStudent.empty())
			{
				nameOfStudent[0] = toupper(nameOfStudent[0]);

				for (size_t i = 1; i < nameOfStudent.length(); ++i)
					nameOfStudent[i] = tolower(nameOfStudent[i]);
			} */
			

			for (int count = 0; count < nameOfStudent.length(); count++)
			{

				nameOfStudent[0] = toupper(nameOfStudent[0]);

					if (nameOfStudent[count] == ' ')
					{
						nameOfStudent[count + 1] = toupper(nameOfStudent[count + 1]);
					}

			}



			
			/*for (int count = 0; count < nameOfStudent.length(); count++)

			{

				nameOfStudent[0] = toupper(nameOfStudent[0]);


				if (nameOfStudent[count] == ' ')
				{

					nameOfStudent[count + 1] = toupper(nameOfStudent[count + 1]);

				}

			}*/


			cout << nameOfStudent << endl;
			//cin >> nameOfStudent;
			cout << "What is \"" << nameOfStudent << " midterm grade?\n"
				<< "(I will make sure your input is numberic and positive int,\n"
				<< "	but not if it is less than 100) : ";
			cin >> midTermGrade; cin.ignore(80, '\n');
			//If mid term grade is negative this loop ask the user again to enter the grade 
			while (midTermGrade < 0)
			{
				cout << "mid term grade must be positive try again:";
				cin >> midTermGrade; cin.ignore(80, '\n');
				cout << midTermGrade << endl;
			}
			//	grades = midTermGrade;
			if (midTermGrade > grades)
			{
				grades = midTermGrade;
				beststudent = nameOfStudent;
			}
			//cout << grades << "are more\n";
		}

		cout << beststudent << "is a best studdent\n";
		system("pause");
		cout << "\n            ********************************                         ";
	}

	//system("pause");

	