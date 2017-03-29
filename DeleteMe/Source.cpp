#include <iostream>
using namespace std;
int main()
{
	    cout << "                          Midterm Programming Part" << endl;
		cout << " 	                    Savings Report Program" << endl;
		cout << " 	               validate for negative discounts" << endl;
		cout << " 	                        by M.Kulkarni" << endl<< endl;


		double price=1,discount;
		
		int productcounter = 0;
		while (price > 0) {
			productcounter = productcounter + 1;
			cout << " What is the price product#"<<productcounter<<" ? (I will NOT validate for non - numric input)" << endl;
			cout << " [negative or zero price for next customer] : " << endl;
			cin >> price;
			if (price > 0) {
				cout << "What is the discount for this item? (I will NOT validate for non-numric input)" << endl;
				cout << "         [I will validate for Whole Positive number]:" << endl;
				cin >> discount;

				cout << endl << "Price: $  " << price << "      Discount: " << discount << "%      Savings: $  1.00       Pay: $   9.00" << endl;

			}
			
		}
		

	system("pause");

}
