/*	Serendipity Book Sellers Part 2
	File Name:MainMenu.cpp
	Programmer: Chris Adkins
	Date Last Modified: 9/11/2019
	CS 150 - Thursday 5:30PM

	Problem Statement:
	This program displays a main menu with
	the ability to show several other sub menus.
	As of right now there is some small logic 
	used in order to allow the user to see every
	different menu but no functionality beyond
	that has been implemented yet.


	Overall Plan:
	1. Display the main menu to the user.
	2. Check the users input to determine what to show next.
	3. Display the proper menu in regards to the user's input.
*/

#include <iostream>
using namespace std;

int main() {
	int choice; // This value is set by the user when prompted.
	cout << "Serendipity Booksellers\nMain Menu\n\n";
	cout << "1. Cashier Module\n";
	cout << "2. Inventory Database Module\n";
	cout << "3. Report Module\n";
	cout << "4. Book Information\n";
	cout << "5. Exit\n\n";
	cout << "Enter your choice: ";
	cin >> choice;
	if (choice == 1) { // Shows the cashier dialogue.
		cout << "\nSerendipity Booksellers\n\nDate: ";
		cout << "\n\nQty\tISBN\tTitle\t\tPrice\tTotal";
		cout << "\n\n\n\t\tSubtotal\n\t\tTax\n\t\tTotal";
		cout << "\n\nThank You For Shopping Serendipity!";
	} else if (choice == 2) { // Shows Inventory Management.
		cout << "\nSerendipity Booksellers\nInventory Database";
		cout << "\n\n1. Look-Up a Book\n2. Add a Book";
		cout << "\n3. Edit a Book's Record\n4. Delete a Book";
		cout << "\n5. Return to the Main Menu\n\nEnter Your Choice: ";
	} else if (choice == 3) { // Shows Report Module.
		cout << "\nSerendipity Booksellers\nReports";
		cout << "\n\n1. Inventory Listing\n2. Inventory Wholesale Value";
		cout << "\n3. Inventory Retail Value\n4. Listing by Quanitity";
		cout << "\n5. Listing by Cost\n6. Listing by Age\n7. Return to Main Menu";
		cout << "\n\nEnter your choice";
	} else if (choice == 4) { // Shows Book Information.
		cout << "\nSerendipity Booksellers\nBook Information";
		cout << "\nISBN: \nTitle: \nAuthor: \nPublisher: \nDate Added: ";
		cout << "\nQuantity On Hand: \nWholesale Cost: \nRetail Price: ";
	}
}