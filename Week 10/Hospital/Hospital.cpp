/*	Chapter No. 6 - Exercise No. 16
	File Name: Hospital.cpp
	Programmer: Chris Adkins
	Date Last Modified: 10/30/2019
	CS 150 - Thursday 5:30PM

	Problem Statement:
	This program calculates the cost of a hospital stay.

	Overall Plan:
	1. Use a do while to validate user input and gather all of our variables.
	2. depending on if the user is an inpatient, use one of our two 
	   calculation functions to add our variables together to get the total.
	3. return the total to the user.

	Classes Needed and Purpose:

*/

#include <iostream>
using namespace std;

double positiveInput() {
	double userInput;
		do {
		cout << "\nEnter a positive number: ";
		cin >> userInput;
	} while (userInput <= 0);
	return userInput;
}

double calculateCharges(int days, double rate, double service, double medicine) { // For inpatients
	double total = days * rate + service + medicine;
	return total;
}

double calculateCharges(double service, double medicine) { // For outpatients
	double total = service + medicine;
	return total;
}

int main() {
	// Inpatient Only Variables
	int daysInHospital; // How many days were spent in the hospital.
	double   dailyRate; // How much did it cost per day.

	// Universal Variables
	int       patientType; // 1 = inpatient, 2 = outpatient.
	double serviceCharges; // Charges for services
	double     medCharges; // Charges for medicine

	cout << "Were you an inpatient? 1 = yes, 2 = no";
	patientType = positiveInput();
	cout << "How much did the services cost?";
	serviceCharges = positiveInput();
	cout << "How much did the medicine cost?";
	medCharges = positiveInput();

	if (patientType == 1) {
		cout << "How many days were you in the Hospital?";
		daysInHospital = positiveInput();
		cout << "How much did it cost per day?";
		dailyRate = positiveInput();
		cout << calculateCharges(daysInHospital, dailyRate, serviceCharges, medCharges);
	} else {
		cout << calculateCharges(serviceCharges, medCharges);
	}
}