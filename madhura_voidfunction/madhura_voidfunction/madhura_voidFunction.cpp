//void function in array
// Madhura kulkarni
// last modified: 1/23/2016

/*# include<iostream>
using namespace std;
void add(int num,  int num1);
int main()
{
	
	int num = 20;
	add(10, num)
		cout << " now the number is: " << num << endl;



	system("pause");
}
void add(int num, int num1)
{
	num1 += num;
}*/

/* cubeIt - demonstrate 3 different functions to cube a number
* method 1 - pass by copy
* method 2 - pass by reference
* method 3 - pass by pointer
* Liz Miller
* CIT237 January 2016
*/
#include <iostream>
using namespace std;

double cubeIt1(double);
void cubeIt2(double &);
void cubeIt3(double *);

int main() {
	double input;
	double safe = 0.;
	double answer;

	cout << "Enter a number to cube: ";
	cin >> input;
	safe = input;

	answer = cubeIt1(input);
	cout << "method one, the cube of " << input << " is: " << answer << endl;

	cubeIt2(input); // warning! input is changed!
	cout << "method two, reference parameter:\n";
	cout << "  The cube of " << safe << " is: " << input << endl;

	input = safe;
	cubeIt3(&input); // warning - input is changed!
	cout << "method three, pointer parameter:\n";
	cout << "  The cube of " << safe << " is: " << input << endl;

	system("pause");
	return 0;
}
double cubeIt1(double in) {
	return in * in * in;
}
void cubeIt2(double &in) {
	in *= (in * in);
}
void cubeIt3(double *in) {
	*in *= (*in * *in);
}
