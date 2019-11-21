#include <iostream>

using namespace std;

class Inventory {

public:
	int    itemNumber;
	int      quantity;
	double       cost;


public:
	Inventory() {
		itemNumber = 0;
		quantity   = 0;
		cost       = 0;
	}

	Inventory(int anItemNumber, int aQuantity, double aCost) {
		setItemNumber(anItemNumber);
		setQuantity(aQuantity);
		setCost(aCost);
	}

	
	void setItemNumber(int anItemNumber) {
		itemNumber = anItemNumber;
	}
	void setQuantity(int aQuantity) {
		quantity = aQuantity;
	}
	void setCost(double aCost) {
		cost = aCost;
	}
	int getItemNumber() {
		return itemNumber;
	}
	int getQuantity() {
		return quantity;
	}
	double getCost() {
		return cost;
	}
	double getTotalCost() {
		return cost * quantity;
	}
};

int main() {
	int userInput = -1;
	Inventory myItem;


	while (userInput < 0) {
		cout << "Enter the item number: ";
		cin >> userInput;
	}
	myItem.setItemNumber(userInput);
	userInput = -1;

	while (userInput < 0) {
		cout << "\nEnter the quantity: ";
		cin >> userInput;
	}
	myItem.setQuantity(userInput);
	userInput = -1;

	while (userInput < 0) {
		cout << "\nEnter the cost of the item: ";
		cin >> userInput;
	}
	myItem.setCost(userInput);
	userInput = -1;

	cout << "\nTotal Cost: $" << myItem.getTotalCost();
}
