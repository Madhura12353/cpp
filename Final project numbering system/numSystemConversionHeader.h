#pragma once
const int SIZE = 70;
bool isValidArray(char charArray[], int& base);
int getlgsize(char remainderArray[]);
char getValidArray(char charArray[], int& base);
void reverseArray(char remainderArray[], char reversedArray[], int& lgsize);
void printBanner(int size, int maxBase);
void printMenu();
int convertanybase2decimal(char charArray[], int base);
void convert10tob(int inputNumber, int baseNumber, std::ostream& outputfile);
char displeyFinalAnswer(char remainderArray[], int &lgsize, std::ostream& outputfile);
void conversionFromDecimal2anotherBase();
void conversionFromanyBase2decimal();
void openTheInputFile(std::ifstream& inputFile);

int getArrayLength(double dArray[]);
void createOutputFile(std::ofstream & outputfile);

void anyBase2anybase(double base, double tarbase, char initialNumber[], std::ostream& outputfile);
void readingDataFromFile(double sourseBase[], double targetBase[], char initialNumber[][SIZE], std::ifstream & inputFile);
std::string validateInput(double sBase, double tBase, char iNumber[]);
void convertAndcreatetable(double sourseBase[], double targetBase[], char initialNumber[][SIZE], std::ostream& outputfile);
void readingDataFromFileandConvert();
