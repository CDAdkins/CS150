/*	Chapter No. 5 - Exercise No. 24
	File Name: SalesBarChart.cpp
	Programmer: Chris Adkins
	Date Last Modified: 10/16/2019
	CS 150 - Thursday 5:30PM

	Problem Statement: 
	This program asks the user for sales and rounds the number
	down to the nearest 100. It then displays a bar in order
	to visualize the sales.

	Overall Plan:
	1. Initialize our three int variables to represent sales
	2. Get input from the user to set to our ints.
	3. Use nested for loops and if statements to iterate through our stores 
	   and print the proper amount of stars based on user input.
	4. Print output to the user.

	Classes Needed and Purpose:
	iostream for input and output
*/

#include <iostream>
using namespace std;

int main() {
	int   storeOneSales;
	int   storeTwoSales;
	int storeThreeSales;

	cout << "Enter today's sales for Store 1: ";
	cin >> storeOneSales;
	storeOneSales /= 100;
	cout << "Enter today's sales for Store 2: ";
	cin >> storeTwoSales;
	storeTwoSales /= 100;
	cout << "Enter today's sales for Store 3: ";
	cin >> storeThreeSales;
	storeThreeSales /= 100;

	cout << "\n\t  DAILY SALES";
	cout << "\n\t(each * = $100)";
	for (int i = 1; i < 4; i++) {
		cout << "\nStore " << i << ": ";
		if (i == 1) {
			for (int i = 0; i < storeOneSales; i++) {
				cout << "*";
			}
		} else if (i == 2) {
			for (int i = 0; i < storeTwoSales; i++) {
				cout << "*";
			}
		} else if (i == 3) {
			for (int i = 0; i < storeThreeSales; i++) {
				cout << "*";
			}
		}
	}
}