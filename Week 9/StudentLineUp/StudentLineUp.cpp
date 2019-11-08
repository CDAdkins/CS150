/*	Chapter No. 5 - Exercise No.15
	File Name: StudentLineUp.cpp
	Programmer: Chris Adkins
	Date Last Modified:
	CS 150 - Thursday 5:30PM

	Problem Statement:
	This program takes a list of names and displays a 
	certain number of the based on the user's input.


	Overall Plan:
	1. Use ifstream to read in a txt file with the names.
	2. get input from the user to decide how many names to read.
	3. use the user input in the for loop.
	4. print one name per loop.

	Classes Needed and Purpose:
	iostream for user input and output.
	ifstream to read files into the program.
*/

#include <iostream>
#include <fstream>
using namespace std;

int main() {
	ifstream file("names.txt");
	string name;
	int userInput;

	 do {
		cout << "How many kids are in the class?(1-20) ";
		cin >> userInput;
	 } while (userInput < 0 || userInput > 20); 
	
	for (int i = 0; i < userInput; i++) {
		file >> name;
		if (i == 0) {
			cout << "First: " << name << "\n";
		} else if (i == userInput - 1) {
			cout << "Last: " << name << "\n";
		}
	}
	file.close();
}
