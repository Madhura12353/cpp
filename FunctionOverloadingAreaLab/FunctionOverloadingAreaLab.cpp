// This lab is on function overloading and calculates the area area
// Title: Function overloading area lab
// Programmer: Madhura kulkarni
// Last modified : 11/30/2016 11:27 PM

# include <iostream>
using namespace std;

char getYorN();
double getPositiveNumber();
double calculateArea(double radius);
double calculateArea(double length, double width);
void getLegalSidesForTringle(double &side1, double &side2, double &side3);
void getTriangleSides(double &side1, double &side2, double &side3);
double calculateArea(double &side1, double &side2, double & side3);

int main()
{
	char choice;
	double radius, area, length, width,side1, side2, side3;

     system("color E0");
	 system("title Functio overloading area lab by  Madhura kulkarni");

	 cout 
		 << "\n            Project on Designing Overloading Functions                "
		 << "\n         Find the area of a rectangle, triangle, or circle            "
		 << "\n                   By  Madhura kulkarni                                  \n\n";

	cout << "\nDo you want to test the program? ";
	choice = getYorN();
	while (choice == 'Y' || choice == 'y')
	{
		cout << "\nGive me the radius of a circle: ";
		radius = getPositiveNumber();
		area = calculateArea(radius);
		cout << "        The area of the circle is " << area;

		cout << "\n\nGive me the length a rectangle: ";
		length = getPositiveNumber();
		cout << "...and the width: ";
		width = getPositiveNumber();
		area = calculateArea(length, width);
		cout << "        The area of the rectangle is " << area;

		cout << "\n\nGive me the lengths of the sides of a triangle.\n";

		getLegalSidesForTringle(side1, side2, side3);
		
		//legalSides();
		area = calculateArea(side1, side2, side3);
		cout << "\n\n         *********************                   ";

		cout << "\n\nDo you want to test the program? ";
		choice = getYorN();
	}
		
	{
		cout <<"\nDon't you love Geometry?\n";
		system( "pause");
		
	}
		
}
//=====================================================================
char getYorN()
{
	char choice;
	cin >> choice; cin.ignore(80, '\n');
	while (!(choice == 'y' || choice == 'Y' || choice == 'n' || choice == 'N'))
	{
		cout << "Please type Y or N. Try again: ";
		cin >> choice;
	}
	return choice;
}

double getNumber()   //   DONE
{
	double number;
	while (!(cin >> number))
	{
		cout << "Please no letter. Try Again: ";
		cin.clear(); cin.ignore(80, '\n');

	}
	cin.ignore(80, '\n');
	return number;
}

double getPositiveNumber()  //   DONE
{
	double input = getNumber();

	while (input <= 0 )
	{
		cout << "Positive numbers only please. Try again: ";
		input = getNumber();
	}
	return double(input);
}

double calculateArea(double radius)
{
	return 3.1415 * radius * radius;
}

double calculateArea(double length, double width)
{
	return length * width;
}


void getLegalSidesForTringle(double &side1, double &side2, double &side3)
{
	getTriangleSides(side1,side2,side3);
	
	while (side1 + side2 <= side3 || side1 + side3 <= side2 || side2 + side3 <= side1)
	{
		cout << "The sum of two sides of a triangle must be greater than the third side.\n"
			 << "Try again: ";
		getTriangleSides(side1,side2,side3);
	}

}

void getTriangleSides(double &side1, double &side2, double &side3)
{

	cout << "side1: ";
	side1 = getPositiveNumber();
	cout << "side2: ";
	side2 = getPositiveNumber();
	cout << "side3: ";
	side3 = getPositiveNumber();

}
double calculateArea(double &side1, double &side2, double &side3)
{
	double sum = ((side1 + side2 + side3) / 2);
	double area = sqrt(sum*(sum - side1)*(sum - side2)*(sum - side3));
	cout << "        The area of the triangle is  " << area;

	return area;
}