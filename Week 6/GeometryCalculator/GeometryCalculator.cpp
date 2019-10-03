/*	Chapter No. 4 - Exercise No. 11
	File Name:GeometryCalculator.cpp
	Programmer: Chris Adkins
	Date Last Modified: 10/2/2019
	CS 150 - Thursday 5:30PM

	Problem Statement:
	This program displays a menu and, depending on user choice,
	performs one of three geometric operations.

	Overall Plan:
	1. Define all of my variables used to store data given to us by the user.
	2. Display menu to user and save user choice.
	3. Use if statements to decide what code to run based on user choice.
	4. Perform necessary calculations to find area and print results to user.

	Classes Needed and Purpose:
	<iostream> Used for input and output for communication with the user.
*/

#include <iostream>
#include <cmath>

using namespace std;

int main() {
	double pi = 3.14159;
	double area;
	double radius;
	double length;
	double width;
	double height;
	int    choice;

	cout << "Geometry Calculator";
	cout << "\n\t1. Calculate the Area of a Circle";
	cout << "\n\t2. Calculate the Area of a Rectangle";
	cout << "\n\t3. Calculate the Area of a Triangle";
	cout << "\n\t4. Quit\n\n";
	cout << "Enter Your Choice: ";
	cin >> choice;

	if (choice == 1) {
		cout << "\nEnter the radius of the circle: ";
		cin >> radius;
		area = pi * pow(radius, 2);
		cout << "Area: " << area;
	} else if (choice == 2) {
		cout << "\nEnter the length of the rectangle: ";
		cin >> length;
		cout << "\nEnter the width of the rectangle: ";
		cin >> width;
		area = length * width;
		cout << "Area: " << area;
	} else if (choice == 3) {
		cout << "\nEnter the length of the triangle's base: ";
		cin >> length;
		cout << "\nEnter the height of the triangle: ";
		cin >> height;
		area = (height * length) / 2;
		cout << "Area: " << area;
	} else {
		return 0;
	}
}