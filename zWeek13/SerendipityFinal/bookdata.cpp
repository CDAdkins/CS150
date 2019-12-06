#include "bookdata.h"
#include <string>

using namespace std;

BookData::BookData() {
	qtyOnHand = 0;
	wholesale = 0;
	retail = 0;
	empty = true;
	bookTitle = "";
	isbn = "";
	author = "";
	publisher = "";
	dateAdded = "";
}

void BookData::setTitle(string title) {
	bookTitle = title;
}

void BookData::setIsbn(string isbn) {
	this->isbn = isbn;
}

void BookData::setAuthor(string author) {
	this->author = author;
}

void BookData::setPub(string publisher) {
	this->publisher = publisher;
}

void BookData::setDateAdded(string dateAdded) {
	this->dateAdded = dateAdded;
}

void BookData::setQty(int qty) {
	this->qtyOnHand = qty;
}

void BookData::setWholesale(double wholesale) {
	this->wholesale = wholesale;
}

void BookData::setRetail(double retail) {
	this->retail = retail;
}

bool BookData::isEmpty() {
	return empty;
}

void BookData::insertBook() {
	empty = false;
}

void BookData::removeBook() {
	empty = true;
}

string BookData::getTitle() {
	return bookTitle;
}

string BookData::getIsbn() {
	return isbn;
}

string BookData::getAuthor() {
	return author;
}

string BookData::getPub() {
	return publisher;
}

string BookData::getDateAdded() {
	return dateAdded;
}

int BookData::getQty() {
	return qtyOnHand;
}

double BookData::getWholesale() {
	return wholesale;
}

double BookData::getRetail() {
	return retail;
}