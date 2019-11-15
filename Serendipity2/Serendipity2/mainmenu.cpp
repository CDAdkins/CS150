/*	Serendipity Book Sellers Part 5
	File Name:MainMenu.cpp
	Programmer: Chris Adkins
	Date Last Modified: 10/23/2019
	CS 150 - Thursday 5:30PM

	Problem Statement:
	This program displays a main menu with
	the ability to show several other sub menus.
	As of right now there is some small logic
	used in order to allow the user to see every
	different menu but no functionality beyond
	that has been implemented yet aside from the cashier module.
	I have also added some input validation to check
	to see if the user enters a number outside the given parameters.

	This particular revision of Serendipity took all of the loose
	code and placed it into properly named functions that are now
	called from main().

	Overall Plan:
	1. Display the main menu to the user.
	2. Check the users input to determine what to show next.
	3. Display the proper menu in regards to the user's input using switch statements.
	4. use while loops to validate the user's input.
*/

#include <iostream>
#include <cashier.h>
#include <bookinfo.h>
#include <invmenu.h>
#include <reports.h>
using namespace std;

int main() {
	int          choice; // This value is set by the user when prompted.
	bool   done = false;
	

	cout << "Serendipity Booksellers\nMain Menu\n\n";
	cout << "1. Cashier Module\n";
	cout << "2. Inventory Database Module\n";
	cout << "3. Report Module\n";
	cout << "4. Book Information\n";
	cout << "5. Exit\n\n";
	cout << "Enter your choice: ";

	do {
		cout << "\nPlease enter a number between 1 - 5: ";
		cin >> choice;
	} while (choice < 1 || choice > 4);

	switch (choice) {
	case 1: { // Cashier
		cashMain();
		break;
	}
	case 2: {
		invmain();
		break;
	}
	case 3: {
		reportmain();
		break;
	}
	case 4: {
		bookmain();
		break;
	}
	case 5: {
		cout << "Thank you for shopping Serendipity!";
		break;
	}
	default: {
		cout << "\nInvalid Input";
	}
	}
}