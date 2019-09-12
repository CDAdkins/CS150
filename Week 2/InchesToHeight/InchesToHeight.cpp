/*	Chapter No. 2 - Exercise No. 14
	File Name: InchesToHeight.cpp
	Programmer: Chris Adkins
	Date Last Modified: 9/5/2019

	Problem Statement:
	This program takes a number of inches and
	converts them to feet and inches.

	Overall Plan:
	1. Display inches variable / 12 for feet.
	2. Display inches variable % 12 for inches.
*/

#include <iostream>
using namespace std;

int main() {
	int inches = 74;

	cout << inches / 12 << "ft " << inches % 12 << "in";
}