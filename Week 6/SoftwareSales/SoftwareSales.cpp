/*	Chapter No. 4 - Exercise No. 9
	File Name: SoftwareSales.cpp
	Programmer: Chris Adkins
	Date Last Modified: 10/2/2019
	CS 150 - Thursday 5:30PM

	Problem Statement:
	This program applies discounts to sales of a software depending
	on the amount of units sold.

	Overall Plan:
	1. Define discount, savings, cost, numSold, and itemPrice variables.
	2. Get numSold from the user using cin.
	3. Determine discount using if statements.
	4. Calculate the cost and savings using multiplication.
	5. Print the results to the user.

	Classes Needed and Purpose:
	<iostream> is used for input and output for the user.
	<iomanip> is used to print the results in standard monetary format.
*/

#include <iostream>
#include <iomanip>

using namespace std;

int main() {

	// These will all change based on the user's input, except for itemPrice.
	double discount  =    0.0; 
	double savings   =    0.0;
	double cost      =    0.0;
	double numSold   =      0;
	double itemPrice = 199.99;

	cout << "Enter the number of units purchased: ";
	cin >> numSold;

	if (numSold >= 100) {
		discount = .5;
	} else if (numSold >= 50) {
		discount = .4;
	} else if (numSold >= 20) {
		discount = .3;
	} else if (numSold >= 10) {
		discount = .2;
	} else { // Basically if the numSold is less than 10.
		discount = 1; // Set to 1 because 0 would make the items free.
	}

	savings = numSold * itemPrice * discount;
	cost = (numSold * itemPrice) - (savings);

	cout << setprecision(2) << fixed << "Discount: \t" << discount * 100 << "%\nRetail Cost: \t$" 
	<< numSold * itemPrice << "\nAmount Saved: \t$" << (numSold * itemPrice * discount) << "\nTotal Cost: \t$" << cost;
}