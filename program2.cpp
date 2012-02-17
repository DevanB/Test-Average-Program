// Written By: Devan Beitel
// Programming Assignment 2 for CS-2250
// Date: 02/19/10
// Compiler: Xcode and VC++ 2005
// Purpose: Get and calculate the average test score for 5 tests


#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	double test1, test2, test3, test4, test5;
	double testAverage;
	
	cout << "Enter the first test score: ";
	cin >> test1;
	cout << "Enter the second test score: ";
	cin >> test2;	
	cout << "Enter the third test score: ";
	cin >> test3;
	cout << "Enter the fourth test score: ";
	cin >> test4;
	cout << "Enter the fifth test score: ";
	cin >> test5;
	
	testAverage = (test1+test2+test3+test4+test5)/5;
	
	cout << setprecision(2) << fixed << showpoint << endl;
	cout << "The average of the test scores is " << testAverage << "." << endl;
	
	
	return 0;
}	
