//
//
//
//

# include<iostream>
using namespace std;
//void funcOne(int );
int n;
int main()
{

	int num = 5;     // declaring an integer variable
	int *ptr;        // declaring ineteger pointer 
	ptr = &num;      //  pointing to that variable

	cout << "This is my variable " << num << endl // printing variable
		<< "This is my pointer " << ptr << endl;  //printing pointer

	system("pause");
}

