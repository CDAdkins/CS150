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
#include  <iomanip>
#include   <string>
using namespace std;

void repListing() {
	cout << "\nYou Selected Inventory Listing\n";
}

void repWholesale() {
	cout << "\nYou Selected Inventory Wholesale Value\n";
}

void repRetail() {
	cout << "\nYou Selected Inventory Retail Value\n";
}

void repQty() {
	cout << "\nYou Selected Listing by Quantity\n";
}

void repCost() {
	cout << "\nYou Selected Listing by Cost\n";
}

void repAge() {
	cout << "\nYou Selected Listing by Age\n";
}

void lookUpBook() {
	cout << "\nYou Selected Look Up Book\n";
}

void addBook() {
	cout << "\nYou Selected Add Book\n";
}

void editBook() {
	cout << "\nYou Selected Edit Book\n";
}

void deleteBook() {
	cout << "\nYou Selected Delete Book\n";
}

void cashier() {
	int        numBooks;
	string         date; // MM/DD/YY
	string         isbn;
	string    bookTitle;
	float     bookPrice;
	float         total;
	float       taxPaid;
	float      subTotal;
	float  taxRate = .1;
	int          choice;

	do {
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
		cout << "\n\nWould you like to process another transaction? (1 yes / 2 no): ";
		cin >> choice;
	} while (choice == 1);
}

void invMenu() {
	int choice;

	cout << "\nSerendipity Booksellers\nInventory Database";
	cout << "\n\n1. Look-Up a Book\n2. Add a Book";
	cout << "\n3. Edit a Book's Record\n4. Delete a Book";
	cout << "\n5. Return to the Main Menu\n\nEnter Your Choice: ";
	do {
		cout << "\nPlease enter a number between 1 - 5: ";
		cin >> choice;

		switch (choice) {
		case 1: lookUpBook();
				break;

		case 2: addBook();
				break;

		case 3: editBook();
				break;

		case 4: deleteBook();
				break;

		case 5: cout << "\nYou Selected Main Menu\n";
				break;
		}
		
	} while (choice < 1 || choice > 4);
}

void bookInfo() {
	cout << "\nSerendipity Booksellers\nBook Information";
	cout << "\nISBN: \nTitle: \nAuthor: \nPublisher: \nDate Added: ";
	cout << "\nQuantity On Hand: \nWholesale Cost: \nRetail Price: ";
}

void reports() {
	int choice;
	cout << "\nSerendipity Booksellers\nReports";
	cout << "\n\n1. Inventory Listing\n2. Inventory Wholesale Value";
	cout << "\n3. Inventory Retail Value\n4. Listing by Quanitity";
	cout << "\n5. Listing by Cost\n6. Listing by Age\n7. Return to Main Menu";
	cout << "\n\nEnter your choice: ";

	do {
		cout << "\nPlease enter a number between 1 - 7: ";
		cin >> choice;
		switch (choice) {
		case 1: repListing();
				break;
		case 2: repWholesale();
				break;
		case 3: repRetail();
				break;
		case 4: repQty();
				break;
		case 5: repCost();
				break;
		case 6: repAge();
				break;
		}
	} while (choice < 1 || choice > 6);
}

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
			cashier();
			break;
		}
		case 2: {
			invMenu();
			break;
		}
		case 3: {
			reports();
			break;
		}
		case 4: {
			bookInfo();
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