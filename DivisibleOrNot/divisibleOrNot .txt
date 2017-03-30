// This c++ program tells you whether two integers are divisible or not
// Title: Divisible Or Not
// Programmer: Madhura kulkarni
// Last Modified: sep 28 2016, 3:09 pm

#include<iostream>
#include <string>
using namespace std;
int main()

{

	system("color b3");
	system("title Divisible or not");

	int num1, num2,num3,num4, num5,num6, num7,num8, division1, division2, division3, division4;
	cout << "\t\t           Divisible or not\n";
	cout << "\t\t        if version by Madhura\n\n";

	cout << "Please enter an integer:";
	cin >> num1; cin.ignore(80, '\n');
	cout << "\nPlease enter an other integer:";
	cin >> num2; cin.ignore(80, '\n');
	division1 = num1 / num2;
	if (num1 % num2 == 0)
		cout << "\n" << num1 << " is divisible by " << num2 << ".\n\n";
	else
		cout << "\n" << num1 << " is not divisible by " << num2 << ".\n\n";


	system("pause");
//-------------------------------------------------------------------------------------------------------	

	
	cout << "\t\t                Divisible or not        \n";
	cout << "\t\t        common code version by Madhura \n\n";

	cout << "Please enter an integer:";
	cin  >> num3; cin.ignore(80, '\n');

	cout << "\nPlease enter an other integer:";
	cin  >> num4; cin.ignore(80, '\n');
	cout <<"\n"<< num3 << " is";

	if (num3 % num4 == 0)
		cout << "";
	else
		cout << " not " ;
	    cout << " divisible by " << num4 << "\n\n";


	system("pause");
	
//-----------------------------------------------------------------------------------------------------------

	
	cout << "\t\t                Divisible or not\n";
	cout << "\t\t        if without else version by Madhura\n\n";

	cout << "Please enter an integer:";
	cin >> num5; cin.ignore(80, '\n');

	cout << "\nPlease enter an other integer:";
	cin >> num6; cin.ignore(80, '\n');
	cout << "\n" << num5 << " is ";

	if (num5 % num6 != 0)
		cout << "not " ;
	    cout << "divisible by " <<num6 << "\n\n";
	

  system("pause");



//---------------------------------------------------------------------------------------------------------

	
			 cout << "\t\t                Divisible or not\n";
			 cout << "\t\t        using conditional operator by Madhura\n\n";

			 cout << "Please enter an integer:";
			 cin  >> num7; cin.ignore(80, '\n');

			 cout << "\nPlease enter an other integer:";
			 cin  >> num8; cin.ignore(80, '\n');
			 cout <<"\n"<< num7 << " is ";

			 cout
				  <<( num7 % num8 == 0  ?  ""  : "not "),
			 cout << "divisible by "<< num8 <<"\n\n";

			 system("pause");
			 return 0;


}
			
			

		