/*	Chapter No. 5 - Exercise No. 19
	File Name:HotelSuites.cpp
	Programmer: Chris Adkins
	Date Last Modified: 10/14/2019
	CS 150 - Thursday 5:30PM

	Problem Statement:
	This program calculates the occupancy rate of 120 suites
	in the top 6 floors of a hotel.

	Overall Plan:
	1. Decalre our variables for the total number of occupied suites.
	2. Declare the total number of suites in an int and a percentage as a double.
	3. Declare an int to keep track of the user's input.
	4. Use a for loop to continuously ask the user for their input.
	5. Use a do-while and an if to verify the user's input.
	6. Use the user's input to set the values of our variables.
	7. Use our variables to calculate and display the percentage to the user.

	Classes Needed and Purpose:
	iostream to interact with the user
	iomanip to clean up our output.
*/

#include <iostream>
#include <iomanip>

using namespace std;

int main() {
	int    totalOccupiedSuites =   0; // How many suites are occupied
	int    totalNumSuites      = 120;
	double suitePercentage     =   0;
	int    userInput;

	cout << "There are 20 suites per floor.\n";
	for (int i = 10; i < 17; i++) {
		if (i != 13) {
			cout << "\nHow many suites on Floor Number " << i << " are occupied? ";
			do {
				cin >> userInput;
				if (userInput < 0 || userInput > 20) {
					cout << "Enter a value between 0 and 20: ";
				}
			} while (userInput < 0 || userInput > 20);
			totalOccupiedSuites += userInput;
		}
	}

	suitePercentage = (double)totalOccupiedSuites / totalNumSuites * 100;
	cout << "\nTotal Number Of Occupied Suites: " << totalOccupiedSuites << " out of " << totalNumSuites << ".\n";
	cout << setprecision(2) << fixed << suitePercentage << "% of the suites are occupied.";
}