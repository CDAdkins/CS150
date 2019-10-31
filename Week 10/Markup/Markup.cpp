/*	Chapter No. 6 - Exercise No. 1
	File Name: Markup.cpp
	Programmer: Chris Adkins
	Date Last Modified: 10/30/2019
	CS 150 - Thursday 5:30PM

	Problem Statement:
	This program calculates the markup of an item given its 
	wholesale cost and markup percentage.

	Overall Plan:
	1. use cin to get markup cost and wholesale rate
	2. total = wholesale + wholesale * markup.
	3. return the total value to the user.

	Classes Needed and Purpose:
	iostream for user input/output.
*/

#include <iostream>
using namespace std;

double calculateRetail(double whole, double mark) {
	return(whole + (whole * mark));
}

int main() {
	double wholesale;
	double markup;

	cout << "Enter the wholesale cost: ";
	cin >> wholesale;
	cout << "Enter the markup percentage: ";
	cin >> markup;
	markup /= 100;

	cout << calculateRetail(wholesale, markup);
}