//Create a program that creates and initializes: a character, an int, a short, a long, a double, a float
//Create pointers to each.
// Lab1A1_pointer
// Madhura kulkarni
// 1/23/2016


#include<iostream>
using namespace std;
int main()
{

	char z = 'c';
	char *cptr = &z;

	int number = 5;
	int *intptr = nullptr;
	intptr = &number;

	short shortNum = 32760;
	short *shortptr = nullptr;
	shortptr = &shortNum;

	long longNum = 2147483640;
	long *longtptr = nullptr;
	longtptr = &longNum;


	double doubleNum = 25.30;
	double *doubleptr = nullptr;
	doubleptr = &doubleNum;

	float floatNum = 3.1e30;
	float *floatptr = nullptr;
	floatptr = &floatNum;
	
// getting address and value of character

	cout << "\nCharcter : " << z << endl; //this is the original value1
	cout << "Address of Charcter : " << &z << endl; // printing the address of value1
	cout << "Value of pointer: " << cptr << endl;      // printing value of pointer 
	cout << "Value where pointer is looking: " << *cptr << endl;

	*cptr =  'B';
	cout << "\nCharcter : " << z << endl; //this is the original value1
	cout << "Address of Charcter : " << &z << endl; // printing the address of value1
	cout << "Value of pointer: " << cptr << endl;      // printing value of pointer 
	cout << "Value where pointer is looking: " << *cptr << endl;
	cout << "\n------------------------\n";
//----------------------------------------------------------------

	cout << "\nInteger : " << number << endl; //this is the original value1
	cout << "Address of nInteger : " << &number << endl; // printing the address of value1
	cout << "Value of pointer: " << intptr << endl;      // printing value of pointer 
	cout << "Value where pointer is looking: " << *intptr << endl;

	*intptr *= 2;
	//value1 = value1 * 3;
	cout << "\n Now the Integer is : " << number << endl;
	cout << "Address of Integer: " << &number << endl;
	cout << "Value of pointer: " << intptr << endl;
	cout << "Value where pointer is looking: " << *intptr << endl;
	cout << "\n------------------------\n";
//------------------------------------------------------------------

	cout << "\nShort number :" << shortNum << endl; //this is the original value1
	cout << "Address of short number :" << &shortNum << endl; // printing the address of value1
	cout << "Value of pointer: " << shortptr << endl;      // printing value of pointer 
	cout << "Value where pointer is looking: " << *shortptr << endl;
	
	*shortptr += 2;

	cout << "\nNow the Short number :" << shortNum << endl; 
	cout << "Address of short number :" << &shortNum << endl; 
	cout << "Value of pointer: " << shortptr << endl;     
	cout << "Value where pointer is looking: " << *shortptr << endl;
	cout << "\n------------------------\n";
//====================================================================

	cout << "\nLong number :" << longNum << endl; //this is the original value1
	cout << "Address of Long number :" << &longNum << endl; // printing the address of value1
	cout << "Value of pointer: " << longtptr << endl;      // printing value of pointer 
	cout << "Value where pointer is looking: " << *longtptr << endl;

	*longtptr += 2;
	cout << "\nLong number :" << longNum << endl; //this is the original value1
	cout << "Address of Long number :" << &longNum << endl; // printing the address of value1
	cout << "Value of pointer: " << longtptr << endl;      // printing value of pointer 
	cout << "Value where pointer is looking: " << *longtptr << endl;
	cout << "\n------------------------\n";
	//====================================================================

	cout << "\nDouble number :" << doubleNum << endl; //this is the original value1
	cout << "Address of double number :" << &doubleNum << endl; // printing the address of value1
	cout << "Value of pointer: " << doubleptr << endl;      // printing value of pointer 
	cout << "Value where pointer is looking: " << *doubleptr << endl;

	*doubleptr += 2;
	cout << "\nDouble number :" << doubleNum << endl; //this is the original value1
	cout << "Address of double number :" << &doubleNum << endl; // printing the address of value1
	cout << "Value of pointer: " << doubleptr << endl;      // printing value of pointer 
	cout << "Value where pointer is looking: " << *doubleptr << endl;
	cout << "\n------------------------\n";
	//====================================================================
	cout << "\nFloat number :" << floatNum << endl; //this is the original value1
	cout << "Address of float number :" << &floatNum << endl; // printing the address of value1
	cout << "Value of pointer: " << floatptr << endl;      // printing value of pointer 
	cout << "Value where pointer is looking: " << *floatptr << endl;

	*floatptr += 2;
	cout << "\nFloat number :" << floatNum << endl; //this is the original value1
	cout << "Address of float number :" << &floatNum << endl; // printing the address of value1
	cout << "Value of pointer: " << floatptr << endl;      // printing value of pointer 
	cout << "Value where pointer is looking: " << *floatptr << endl;
	system("pause");
}