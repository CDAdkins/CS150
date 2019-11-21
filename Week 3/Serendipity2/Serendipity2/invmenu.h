#include <iostream>
using namespace std;

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

void invmain() {
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