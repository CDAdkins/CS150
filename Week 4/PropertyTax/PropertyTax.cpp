/*	Chapter No. 3 - Exercise No. 17
	File Name: PropertyTax.cpp
	Programmer: Chris Adkins
	Date Last Modified: 9/19/2019
	CS 150 - Thursday 5:30PM

	Problem Statement:


	Overall Plan:
	1.

	Classes Needed and Purpose:

*/
#include <iostream>
#include <iomanip>
using namespace std;

int main() {
	double realValue;
	double assessedValue;
	double taxRate = 0.0268;
	double annualTax;

	cout << "Enter the value of your house: $";
	cin >> realValue;
	assessedValue = realValue * .6;
	annualTax = taxRate * assessedValue;
	cout << fixed << setprecision(2) << "You will be charged $" << annualTax << " yearly.";
}