


 
//This program calculates the payroll and creates well formatted table.
//Output formatting Payroll.
//Programmer: Group Yellow (Madhura Kulkarni, Uttam Bavarba, Himanshu Sharma)
//Last Modified: 28th September 2016

#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
	system("color E0");
	system("title Output formatting Payroll by Uttam Bavarva");

	int hours1, hours2, hours3,
		hours4, hours5, totalhours;
	double payrate1, payrate2, payrate3, 
		   payrate4, payrate5, avgpayrate,
	       pay1, pay2, pay3, pay4, pay5, totalpay;
	const int FIELD1 = 6, FIELD2 = 16,
		      FIELD3 = 9, FIELD4 = 8,
		      FIELD5 = 7, FIELD6 = 10;

	cout << "\tThis program creates a nicely formatted table\n"
		 << "\t\t\tSolution by\n"
		 << "\t\t       Group Yellow.\n\n";



	cout << "Hours worked Employee #1 [Only whole hours will credited]: ";
	cin >> hours1;
	cin.ignore(80, '\n');

	cout << "Hourly pay rate for Employee #1 [not necessarily whole dollars]: ";
	cin >> payrate1;
	cin.ignore(80, '\n');


	cout <<"\nHours worked Employee #2 [Only whole hours will credited]: ";
	cin >> hours2;
	cin.ignore(80, '\n');

	cout << "Hourly pay rate for Employee #2 [not necessarily whole dollars]: ";
	cin >> payrate2;
	cin.ignore(80, '\n');


	cout << "\nHours worked Employee #3 [Only whole hours will credited]: ";
	cin >> hours3;
	cin.ignore(80, '\n');

	cout << "Hourly pay rate for Employee #3 [not necessarily whole dollars]: ";
	cin >> payrate3;
	cin.ignore(80, '\n');


	cout << "\nHours worked Employee #4 [Only whole hours will credited]: ";
	cin >> hours4;
	cin.ignore(80, '\n');

	cout << "Hourly pay rate for Employee #4 [not necessarily whole dollars]: ";
	cin >> payrate4;
	cin.ignore(80, '\n');

	cout << "\nHours worked Employee #5 [Only whole hours will credited]: ";
	cin >> hours5;
	cin.ignore(80, '\n');

	cout << "Hourly pay rate for Employee #5 [not necessarily whole dollars]: ";
	cin >> payrate5;
	cin.ignore(80, '\n');
	
	
	totalhours = hours1 + hours2 + hours3 + hours4 + hours5;
	
	pay1 = hours1*payrate1;
	pay2 = hours2*payrate2;
	pay3 = hours3*payrate3;
	pay4 = hours4*payrate4;
	pay5 = hours5*payrate5;
	
	avgpayrate = (payrate1 + payrate2 + payrate3 + payrate4 + payrate5) / 5;
	totalpay = pay1 + pay2 + pay3 + pay4 + pay5;
	

	cout << "\n\n\t Employee#        Hours        Pay Rate        Total Pay\n"
		 << "\t=========================================================\n";
	
	cout << setprecision(2) << fixed << showpoint;
	cout << "\t" << setw(FIELD1) << "1" << setw(FIELD2) << hours1 << setw(FIELD3) << "$" << setw(FIELD4)
		 << payrate1 << setw(FIELD5) << "$" << setw(FIELD6) << pay1 << endl;

	cout << "\t" << setw(FIELD1) << "2" << setw(FIELD2) << hours2 << setw(FIELD3) << "$" << setw(FIELD4)
		 << payrate2 << setw(FIELD5) << "$" << setw(FIELD6) << pay2 << endl;

	cout << "\t" << setw(FIELD1) << "3" << setw(FIELD2) << hours3 << setw(FIELD3) << "$" << setw(FIELD4)
		 << payrate3 << setw(FIELD5) << "$" << setw(FIELD6) << pay3 << endl;

	cout << "\t" << setw(FIELD1) << "4" << setw(FIELD2) << hours4 << setw(FIELD3) << "$" << setw(FIELD4)
		 << payrate4 << setw(FIELD5) << "$" << setw(FIELD6) << pay4 << endl;

	cout << "\t" << setw(FIELD1) << "5" << setw(FIELD2) << hours5 << setw(FIELD3) << "$" << setw(FIELD4) 
		 << payrate5 << setw(FIELD5) << "$" << setw(FIELD6) << pay5 << endl;

	cout << "\tTOTAL/AVERAGE" << setw(FIELD3) << totalhours << setw(FIELD3) << "$" << setw(FIELD4) 
		 << avgpayrate << setw(FIELD5) << "$" << setw(FIELD6) << totalpay << endl;

	
	cout << "\n\nPlease hit ENTER to terminate the program. ";
	cin.get();

	return 0;
}
