
#include <iostream>
using namespace std;

int main()
{
	cout << "          This is program demonstrates how to use while () loop    \n"
		<< "                        to validate input                          \n"
		<< "                            Madhura                                \n";

	double input;


	cout << "Part 1 (Validate an INTEGER)"
		<< "\n  ***  Enter an integer:";


	while ((!(cin >> input)) || (!(static_cast<int>(input) == input)))
	{
		//cout << input << endl;
		if (static_cast<double>(input) == input)
			cout << input << "This is not integer";
		else {
			cout << "please no letter";

		}

		// cin.clear(); cin.ignore(80, '\n');
		// cout << ((!(cin >> input)) ? "Please no letter" : "This is not an integer");
		cin.clear(); cin.ignore(80, '\n');


	}cout << "Good " << input << " is an integer!\n\n";










	system("pause");
}