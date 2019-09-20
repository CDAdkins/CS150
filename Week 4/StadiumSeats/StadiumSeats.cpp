/*	Chapter No. 3 - Exercise No. 2
	File Name: StadiumSeats.cpp
	Programmer: Chris Adkins
	Date Last Modified:9/19/2019
	CS 150 - Thursday 5:30PM

	Problem Statement: 
	This program will ask how many seats of different types have been purchased, 
	it will then calculate the cost while printing the total amount in proper 
	monetary format.


	Overall Plan:
	1. Declare the variables for ticket prices.
	2. Declare the variables for amount of tickets purchased.
	3. Declare variable for total cost.
	4. Use user input to gather data about tickets purchased.
	5. Multiply ticket cost by amount purchased and print result to user.
	6. use setPrecision to print using money format.

	Classes Needed and Purpose:

*/

#include <iostream>
#include <iomanip>
using namespace std;

int main() {
	int classA = 15, classB = 12, classC = 9; // Dollar costs of seats
	int numA, numB, numC; // Number purchased
	double totalCost;

	cout << "How many Class A seats were purchased ";
	cin >> numA;
	cout << "How many Class B seats were purchased ";
	cin >> numB; 
	cout << "How many Class C seats were purchased ";
	cin >> numC;

	totalCost = (numA * classA) + (numB * classB) + (numC * classC);

	cout << "The Total Cost is: $" << fixed << setprecision(2) << totalCost;
}