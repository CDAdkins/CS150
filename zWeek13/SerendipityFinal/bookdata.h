#pragma once

#include <string>
using namespace std;
class BookData {
private:
	string bookTitle;
	string isbn;
	string author;
	string publisher;
	string dateAdded; // MM-DD-YYYY
	int qtyOnHand;
	double wholesale;
	double retail;
	bool empty; // true if the book does not exist

public:
	BookData();

	void setTitle(string title);
	void setIsbn(string isbn);
	void setAuthor(string author);
	void setPub(string publisher);
	void setDateAdded(string dateAdded);
	void setQty(int qty);
	void setWholesale(double wholesale);
	void setRetail(double retail);
	bool isEmpty();
	void insertBook();
	void removeBook();
	string getTitle();
	string getIsbn();
	string getAuthor();
	string getPub();
	string getDateAdded();
	int getQty();
	double getWholesale();
	double getRetail();
};