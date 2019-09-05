/*	Chapter No. 2 - Excercise No. 4
	File Name: RestaurantBill.cpp
	Programmer: Chris Adkins
	Date Last Modified: 9/5/2019

	Problem Statement:
	This program takes a meal cost, tax rate, and tip rate and
	calculates the total cost of the meal.

	Overall Plan:
	1. Get initial variables (taxRate, mealCost)
	2. Calculate tax, mealCostWithTax, tip, and totalBill.
	3. output mealCost, tax, tip and totalBill to the user.
*/

#include <iostream>
using namespace std;

int main() {
	double taxRate = 0.0675;
	double mealCost = 44.5;
	double tax = mealCost * taxRate;
	double mealCostWithTax = mealCost + tax;
	double tip = mealCostWithTax * .15;
	double totalBill = mealCostWithTax + tip;

	cout << "Meal Cost: \t$" << mealCost;
	cout << "\nTax Amount: \t$" << tax;
	cout << "\nTip Amount: \t$" << tip;
	cout << "\nTotal Bill: \t$" << totalBill;
}
