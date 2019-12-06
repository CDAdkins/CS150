/*	Serendipity Book Sellers Part 8
	File Name:MainMenu.cpp
	Programmer: Chris Adkins
	Date Last Modified: 12/4/2019
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
	The BookData class has been added which can hold some 
	variables that let us keep track of the details of the book as well
	as the quantity and price.

	This particular revision of Serendipity took all of the loose
	code and placed it into properly named functions that are now
	called from main().

	Overall Plan:
	1. Display the main menu to the user.
	2. Check the users input to determine what to show next.
	3. Display the proper menu in regards to the user's input using switch statements.
	4. Use while loops to validate the user's input, if the user enters anything
		that they shouldn't, then the program will loop and ask them to input again.
*/

#include <iostream>
#include "cashier.h"
#include "invmenu.h"
#include "reports.h"
#include "bookdata.h"
using namespace std;

int main() {
	int          choice; // This value is set by the user when prompted.
	bool   done = false;

	BookData books[20];
	Cashier myCashier;
	InvMenu myInv;
	Reports myReports;

	cout << "Serendipity Booksellers\nMain Menu\n\n";
	cout << "1. Cashier Module\n";
	cout << "2. Inventory Database Module\n";
	cout << "3. Report Module\n";
	cout << "4. Print Books\n";
	cout << "5. Exit\n\n";
	cout << "Enter your choice: ";

	do {
		cout << "\nPlease enter a number between 1 - 5: ";
		cin >> choice;
	} while (choice < 1 || choice > 5);

	switch (choice) {
	case 1: { // Cashier
		myCashier.cashMain();
		break;
	}
	case 2: {
		myInv.invMain();
		break;
	}
	case 3: {
		myReports.reportMain();
		break;
	}
	case 4: {
		cout << "Books In Array:";
		int num = 1;
		for (BookData i : books) {
			i.insertBook();
			i.setTitle("Book Number " + to_string(num));
			cout << "\n" << i.getTitle();
			num++;
		}
		break;
	}
	case 5: {
		cout << "Thank you for shopping Serendipity!";
		break;
	}

	default: {
		cout << "\nPlease enter a number between 1 - 5";
	}
	}
}