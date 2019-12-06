

#include <iostream>
#include <string>
#include <iomanip>
#include "cashier.h"
#include "bookdata.h"

using namespace std;

void Cashier::cashMain()
{
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