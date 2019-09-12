#include <iostream>
using namespace std;

int main() {
	int choice;
	cout << "Serendipity Booksellers\nMain Menu\n\n";
	cout << "1. Cashier Module\n";
	cout << "2. Inventory Database Module\n";
	cout << "3. Report Module\n";
	cout << "4. Book Information\n";
	cout << "5. Exit\n\n";
	cout << "Enter your choice: ";
	cin >> choice;
	if (choice == 1) { //Shows the cashier dialogue.
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