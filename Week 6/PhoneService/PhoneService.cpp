/*	Chapter No. 4 - Exercise No. 22
	File Name: PhoneService.cpp
	Programmer: Chris Adkins
	Date Last Modified: 10/2/2019
	CS 150 - Thursday 5:30PM

	Problem Statement:
	This program creates a receipt to the user along with
	possible savings if the user chose another plan.

	Overall Plan:
	1. Declare all of our variables.
	2. Get input from user to determine the package selected as well as minutesUsed.
	3. Calculate the total cost of each package individually so they can be compared.
	4. Compare the total cost of each package.
	5. Print the user's info back to them along with possible savings from other packages.

	Classes Needed and Purpose:
	<iostream> For communication with the user.
	<iomanip> For printing in standard monetary format.
	<string> for getline().
*/

#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main() {
	string         customerName;
	int        minutesGiven = 0; // Only used on Package A and B.
	int             minutesUsed;
	int            extraMinutes; // How many minutes over the limit.
	int                 package;
	double          monthlyRate;
	double additionalMinuteCost; // Only used on Package A and B. Cost per additional minute.
	double               totalA;
	double               totalB; // How much customer would pay with Package B.
	double               totalC; // How much customer would pay with Package C.

	cout << setprecision(2) << fixed;
	cout << "Enter your name: ";
	getline(cin, customerName);
	cout << "\nWhat package have you purchased?\n1. Package A\n2. Package B\n3. Package C\nPlease enter your choice: ";
	cin >> package;
	cout << "\nHow many minutes have you used? ";
	cin >> minutesUsed;

	minutesGiven = 450;
	additionalMinuteCost = .45;
	monthlyRate = 39.99;
	if (minutesUsed > minutesGiven) {
		extraMinutes = minutesUsed - minutesGiven;
		totalA = (extraMinutes * additionalMinuteCost) + monthlyRate;
	} else {
		totalA = monthlyRate;
	}

	minutesGiven = 900;
	additionalMinuteCost = .4;
	monthlyRate = 59.99;
	if (minutesUsed > minutesGiven) {
		extraMinutes = minutesUsed - minutesGiven;
		totalB = (extraMinutes * additionalMinuteCost) + monthlyRate;
	} else {
		totalB = monthlyRate;
	}

	monthlyRate = 69.99;
	totalC = monthlyRate;

	cout << "\nCustomer Name: \t|" << customerName;
	cout << "\nMinutes Used: \t|" << minutesUsed;

	if (package == 1) {
		cout << "\nPackage: \t|A";
		cout << "\nTotal Cost: \t|$" << totalA;
		if (totalA > totalB) {
			cout << "\n\nWith Package B you would save: $" << totalA - totalB;
			if (totalA > totalC) {
				cout << "\nWith Package C you would save: $" << totalA - totalC;
			}
		} 
	} else if (package == 2) {
		cout << "\nPackage: \t|B";
		cout << "\nTotal Cost: \t|$" << totalB;
		if (totalB > totalC) {
			cout << "\n\nWith Package C you would save: $" << totalB - totalC;
		}
	} else {
		cout << "\nPackage: \t|C";
		cout << "\nTotal Cost: \t|$" << totalC;
	}
}