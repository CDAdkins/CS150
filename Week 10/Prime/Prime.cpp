/*	Chapter No. 6 - Exercise No. 10
	File Name: Prime.cpp
	Programmer: Chris Adkins
	Date Last Modified: 10/30/2019
	CS 150 - Thursday 5:30PM

	Problem Statement:
	This program checks to see if a number is prime.

	Overall Plan:
	1. get a number from the user with cin.
	2. validate the input with a do-while.
	3. modulo the number by every number before it.
	4. if the modulo ever = 0 it isn't prime, otherwise it is.

	Classes Needed and Purpose:
	iostream for user input/output.
*/

#include <iostream>;
using namespace std;

bool isPrime(int number) {
	for (int i = 2; i <= number / 2; ++i) {
		if (number % i == 0) {
			cout << "This is not a prime number";
			return false;
		}
	}
	cout << "This is a prime number";
	return true;
}

int main() {
	int num;
	cout << "Enter your number: ";
	cin >> num;
	isPrime(num);
}