/*	Serendipity Book Sellers Part 4
	File Name:MainMenu.cpp
	Programmer: Chris Adkins
	Date Last Modified: 10/9/2019
	CS 150 - Thursday 5:30PM

	Problem Statement:
	This program displays a main menu with
	the ability to show several other sub menus.
	As of right now there is some small logic 
	used in order to allow the user to see every
	different menu but no functionality beyond
	that has been implemented yet. I have also added
	some input validation to check to see if the user
	enters a number outside the given parameters.


	Overall Plan:
	1. Display the main menu to the user.
	2. Check the users input to determine what to show next.
	3. Display the proper menu in regards to the user's input.
*/

#include <iostream>
#include  <iomanip>
#include   <string>
using namespace std;

int main() {

	int         choice; // This value is set by the user when prompted.
	int       numBooks;
	string        date; // MM/DD/YY
	string        isbn;
	string   bookTitle;
	float    bookPrice;
	float        total;
	float      taxPaid;
	float     subTotal;
	float taxRate = .1;

	cout << "Serendipity Booksellers\nMain Menu\n\n";
	cout << "1. Cashier Module\n";
	cout << "2. Inventory Database Module\n";
	cout << "3. Report Module\n";
	cout << "4. Book Information\n";
	cout << "5. Exit\n\n";
	cout << "Enter your choice: ";
	cin >> choice;
	if (choice < 1 || choice > 5) {
		cout << "\nPlease enter a number between 1 - 5.";
	}

	switch (choice) {
		case 1: { // Main Menu
			cout << "\nPlease Enter The Date (MM/DD/YY): ";
			cin >> date;
			cout << "\nEnter the Title of the Book: ";
			cin.ignore();
			getline(cin, bookTitle);
			cout << "\nEnter ISBN of the Book: ";
			cin >> isbn;
			cout << "\nHow many copies of the book will you be buying?: ";
			cin >> numBooks;
			cout << "\nHow much does the book cost?: $";
			cin >> bookPrice;

			subTotal = numBooks * bookPrice;
			taxPaid = subTotal * taxRate;
			total = subTotal + taxPaid;

			cout << "\nSerendipity Booksellers\n\n " << date;
			cout << "\n\nQty\tISBN\t\tTitle\t\tPrice\tTotal";
			cout << fixed;
			cout << "\n\n" << numBooks << "\t" << isbn << "\t\t" << bookTitle << "\t$" << setprecision(2) << bookPrice << "\t$" << setprecision(2) << total;
			cout << "\n\n\n\t\tSubtotal \t$" << setprecision(2) << subTotal;
			cout << "\n\t\tTax \t$" << setprecision(2) << taxPaid;
			cout << "\n\t\tTotal \t$" << setprecision(2) << total;
			cout << "\n\nThank You For Shopping Serendipity!";
			break;
		}
		case 2: {
			cout << "\nSerendipity Booksellers\nInventory Database";
			cout << "\n\n1. Look-Up a Book\n2. Add a Book";
			cout << "\n3. Edit a Book's Record\n4. Delete a Book";
			cout << "\n5. Return to the Main Menu\n\nEnter Your Choice: ";
			cin >> choice;
			if (choice < 1 || choice > 5) {
				cout << "\nPlease enter a number between 1 - 5.";
			} else {
				cout << "\nYou selected item " << choice;
			}
			break;
		}
		case 3: {
			cout << "\nSerendipity Booksellers\nReports";
			cout << "\n\n1. Inventory Listing\n2. Inventory Wholesale Value";
			cout << "\n3. Inventory Retail Value\n4. Listing by Quanitity";
			cout << "\n5. Listing by Cost\n6. Listing by Age\n7. Return to Main Menu";
			cout << "\n\nEnter your choice: ";
			cin >> choice;
			if (choice < 1 || choice > 7) {
				cout << "\nPlease enter a number between 1 - 7.";
			} else {
				cout << "\nYou selected item " << choice;
			}
			break;
		}
		case 4: {
			cout << "\nSerendipity Booksellers\nBook Information";
			cout << "\nISBN: \nTitle: \nAuthor: \nPublisher: \nDate Added: ";
			cout << "\nQuantity On Hand: \nWholesale Cost: \nRetail Price: ";
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