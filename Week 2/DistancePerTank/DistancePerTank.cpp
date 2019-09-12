/*	Chapter No. 2 - Exercise No. 6
	File Name: DistancePerTank.cpp
	Programmer: Chris Adkins
	Date Last Modified: 9/5/2019

	Problem Statement:
	This program takes a gas tank capacity as well
	as MPGs for city and highway and uses them to
	tell the user how far they can travel in the city
	as well as on the highway.

	Overall Plan:
	1. Multiply tankCapacity by town/highway MPG variables.
	2. Print results to user.
*/

#include <iostream>
using namespace std;

int main() {
	int tankCapacity = 20;
	double townMPG = 23.5;
	double highwayMPG = 28.9;

	cout << "Your car can travel " << tankCapacity * townMPG << " miles in town and " << tankCapacity * highwayMPG << " miles on the highway.";
}