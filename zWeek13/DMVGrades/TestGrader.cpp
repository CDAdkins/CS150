/*	Chapter No. 8 - Exercise No. 15
	File Name: TestGrader.cpp
	Programmer: Chris Adkins
	Date Last Modified: 12/4/2019
	CS 150 - Thursday 5:30PM

	Problem Statement:
	This program creates a key of correct answers and checks it against
	a String containing guesses, it then grades those answers and returns 
	either a pass or fail depending on the number of answers that were
	correct.

	Overall Plan:
	1. Create an empty char array of 20
	2. Create a string with 20 characters representing the right answers
	3. Create a method that uses a for loop to copy each character from 
		our key over to our char array. correctAnswers[i] = key[i];
	4. Create a method that uses the char array to grade against a String with 
		20 characters. It will use a for loop and compare the index of the key
		and the answer string to determine if they match. If they do match
		then the int representing the number of correct answers increments by one.
		the grade method then returns a string telling the user either that they 
		passed or failed the test. It also tells them the number of questions 
		that they got wrong.

	Classes Needed and Purpose:
	iostream to communicate with the user
	string to hold our characters
*/

#include <string>
#include <iostream>

using namespace std;

char correctAnswers[20];
string key = "BDAACABACDBCDADCCBDA";
string goodGuesses = "BDAACABACDBCCDABCBDA";
string badGuesses = "BADCADCACDBCCDABCBDA";

void setKey(string key) {
	for (int i = 0; i < 20; i++) {
		correctAnswers[i] = key[i];
	}
}

string grade(string answers) {
	int numCorrect = 0;
	for (int i = 0; i < 20; i++) {
		if (answers[i] == correctAnswers[i]) {
			numCorrect++;
		}
	}
	if (numCorrect < 15) {
		return("\nYou Failed, you missed " + to_string(20 - numCorrect) + " questions\n");
	} else {
		return("\nYou Passed! You only missed " + to_string(20- numCorrect) + " questions!\n");
	}
}

int main() {
	setKey(key);
	cout << "When given a list of guesses that passes the test:";
	cout << grade(goodGuesses);
	cout << "\nWhen given guesses that do not pass the test:";
	cout << grade(badGuesses);
}
