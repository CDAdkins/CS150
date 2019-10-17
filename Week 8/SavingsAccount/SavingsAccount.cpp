/*	Chapter No. 5 - Exercise No. 25
	File Name: SavingsAccount.cpp
	Programmer: Chris Adkins
	Date Last Modified:
	CS 150 - Thursday 5:30PM

	Problem Statement:
	This program simulates a bank account with interest over the course
	of three months. It allows deposits and withdrawals. It will display
	a summary at the end of the three months.

	Overall Plan:
	1. Declare all of our variables that we need. We need doubles to keep track
	   of all of the different amounts of money in the program. This includes
	   the balance at the beginning of the program, at the end of the program
	   for each of the months etc. We also need values for the withdrawals and the 
	   interest.
	2. Get input from the user to determine the starting balance in the account.
	3. Use for loops and do-whiles in order to simulate months passing by, the do-whiles
	   are used as input validation to stop the user from inputting a negative number.
	4. Print a summary to the user containing starting and ending balances, total deposits
	   as well as withdrawals, and the total interest made.

	Classes Needed and Purpose:
	iostream for input and output with the user.
	iomanip for displaying monetary values properly.
*/

#include <iostream>;
#include <iomanip>;

using namespace std;

int main() {
	double beginningBalance     = 0; // Balance at the beginning of the first month, never changes after being set.
	double startingBalance      = 0; // Used to keep track of balance at beginning of each month.
	double endingBalance        = 0; // Used to keep track of the balance at the end of each month.
	double annualInterestRate   = 0;
	double monthlyInterestRate  = 0;
	double interest             = 0; // Amount of interest made, not the rate.
	double totalDeposits        = 0; // Sum of all deposits.
	double totalWithdrawals     = 0; // Sum of all withdrawals.
	double totalInterest        = 0; // Sum of money made from interest.
	double userInput;                // Used to keep a reference of what the user typed last.

	cout << setprecision(2) << fixed;
	cout << "Enter your starting balance: $";
	cin >> startingBalance;
	beginningBalance = startingBalance;
	endingBalance = startingBalance;

	cout << "Enter your annual interest rate: ";
	cin >> annualInterestRate;
	annualInterestRate /= 100;
	monthlyInterestRate = annualInterestRate / 12;

	for (int i = 1; i < 4; i++) {
		startingBalance = endingBalance;
		do {
			cout << "How much was deposited into the account during month " << i << "? $";
			cin >> userInput;
		} while (userInput < 0);
		totalDeposits += userInput;
		endingBalance += userInput;

		do {
			cout << "How much money was withdrawn from the account during month " << i << "? $";
			cin >> userInput;
		} while (userInput < 0 && userInput > endingBalance);
		totalWithdrawals += userInput;
		endingBalance -= userInput;

		interest = (startingBalance + endingBalance / 2) * (monthlyInterestRate);
		totalInterest += interest;
		endingBalance += interest;
	}

	cout << "\n\tSUMMARY";
	cout << "\nStarting Balance: \t$" << beginningBalance;
	cout << "\nTotal Amount Deposited: $" << totalDeposits;
	cout << "\nTotal Amount Withdrawn: $" << totalWithdrawals;
	cout << "\nTotal Interest Made: \t$" << totalInterest;
	cout << "\n\nFinal Balance: \t$" << endingBalance;
}