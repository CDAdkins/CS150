/*	Chapter No. 3 - Exercise No.10
	File Name: BoxOffice.cpp
	Programmer: Chris Adkins
	Date Last Modified: 9/19/2019
	CS 150 - Thursday 5:30PM

	Problem Statement:
	This program calculate net and gross profits
	for a movie theatre showing one movie.


	Overall Plan:
	1.

	Classes Needed and Purpose:

*/

#include <iostream>
#include <iomanip>
using namespace std;

int main() {
	string movieName;
	int adultTicketsSold, childTicketsSold;
	int adultPrice = 10, childPrice = 6;
	
	double grossProfit;

	cout << "What was the name of the movie? ";
	cin >> movieName;
	cout << "\nHow many Adult Tickets? ";
	cin >> adultTicketsSold;
	cout << "\nHow many child tickets? ";
	cin >> childTicketsSold;
	double adultProfit = adultTicketsSold * adultPrice;
	double childProfit = childTicketsSold * childPrice;
	grossProfit = adultProfit + childProfit;
	cout << "\nMovie Name: \t\t\t" << movieName;
	cout << "\nAdult Tickets Sold: \t" + adultTicketsSold;
	cout << "\nChild Tickets Sold: \t" + childTicketsSold;
	cout << fixed << setprecision(2) << "\nGross Box Office Revenue: \t$" << grossProfit;
	cout << fixed << setprecision(2) << "\nAmount paid to Distributor: \t$" << grossProfit * .2;
	cout << fixed << setprecision(2) << "\nNet Box Office Revenue: \t$" << grossProfit - grossProfit * .2;

}