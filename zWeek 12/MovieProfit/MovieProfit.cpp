#include <iostream>
#include <string>

using namespace std;

class MovieProfit {
private:
	string       title;
	string    director;
	int    releaseYear;
	int        runTime;
	double productionCost;
	double firstYearRevenue;

public:
	MovieProfit(string aTitle, string aDirector, int aRelease, int aRunTime, double aProductionCost, double aFirstYearRevenue) {
		title = aTitle;
		director = aDirector;
		releaseYear = aRelease;
		runTime = aRunTime;
		productionCost = aProductionCost;
		firstYearRevenue = aFirstYearRevenue;
	}

	string toString() {
		return "Film Title: \t" + title + "\nDirector: \t" + director + "\nRelease Year: \t" + to_string(releaseYear) + "\nRun Time: \t" + to_string(runTime) + " minutes" + "\nProduction: \t$" + to_string(productionCost) + "\nRevenue: \t$" + to_string(firstYearRevenue) + "\n\n";
	}
};

int main() {
	MovieProfit movie1("The Princess Bride", "Rob Reiner", 1987, 98, 16000000, 25000000);
	MovieProfit movie2("Die Hard", "John McTiernan", 1988, 132, 28000000, 50000000);

	cout << movie1.toString();
	cout << movie2.toString();
}