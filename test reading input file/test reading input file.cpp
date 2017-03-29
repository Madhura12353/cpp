
#include<iostream>
using namespace std;
int main()


{

const int ARRAY_LENGTH = 70;

char remainder[ARRAY_LENGTH];
char remainder1[ARRAY_LENGTH];

char remainderArray[ARRAY_LENGTH][ARRAY_LENGTH];




cin >> remainder;
//cin >> remainder1;

//cout << remainder[0] << remainder[1] << endl;
//cout << remainder1[0] << remainder1[1] << endl;

for (int i = 0; i < 5; i++)
{

remainderArray[0][i] = remainder[i];
}

//cout << remainderArray[0][0] << remainderArray[0][1] << endl;

cout << remainderArray[0];
/*

int i, j;

for ( i = 0; i < 5; i++)
{
remainderArray[0] = i;

for ( j = 0; j < 5; j++)
{
remainderArray[0] = j;

}

//cout << "\n final array is: " << remainderArray[0]<<remainder[0];

}
cout << "\n final array is: " << remainderArray[i] << remainder[j];*/

system("pause");
}