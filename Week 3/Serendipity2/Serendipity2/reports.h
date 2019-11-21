#include <iostream>
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

void reportmain() {
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