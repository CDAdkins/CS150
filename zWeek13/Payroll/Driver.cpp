/*	Chapter No. 8 - Exercise No. 16
	File Name: Driver.cpp
	Programmer: Chris Adkins
	Date Last Modified: 12/4/2019
	CS 150 - Thursday 5:30PM

	Problem Statement:
	This program contains a Payroll class that keeps track
	of an employees hourly pay rate, as well as the hours 
	worked. It also contains a driver class that reads
	through a txt file that contains 7 payrolls on it.

	Overall Plan:
	1. Create a payroll class with variables for
		hours worked as well as hourly rate.
		These should be doubles.
	2. Create a test class to read from a txt file 
		and apply the numbers within to an array
		that cant hold 7 payrolls in it.
		using ifstream we can read from the file
		and use Payrolls setHours and setRate
		methods to update our payrolls.
	3. Use a for loop to iterate through the
		payrolls and print out the gross of
		each payroll using the getGross()
		method in the Payroll class.

	Classes Needed and Purpose:
	iostream to communicate with the user.
	fstream to read the payroll data from the file.
*/

#include <iostream>
#include <fstream>
#include "Payroll.h"

using namespace std;

Payroll payrolls[7];
ifstream myFile("payroll.txt");

int main() {
	double hours;
	double rate;
	for (int i = 0; i < 7; i++) {
		myFile >> hours >> rate;
		payrolls[i].setHourlyRate(hours);
		payrolls[i].setHoursWorked(rate);
		cout << "$" << payrolls[i].getGross() << "\n";
	}
	myFile.close();
}