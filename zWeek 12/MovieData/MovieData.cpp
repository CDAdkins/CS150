#include <iostream>
#include <string>

using namespace std;

class MovieData {
private:
	string       title;
	string    director;
	int    releaseYear;
	int        runTime;

public:
	MovieData(string aTitle, string aDirector, int aRelease, int aRunTime) {
		title = aTitle;
		director = aDirector;
		releaseYear = aRelease;
		runTime = aRunTime;
	}

	string toString() {		
		return "Film Title: \t" + title + "\nDirector: \t" + director + "\nRelease Year: \t" + to_string(releaseYear) + "\nRun Time: \t" + to_string(runTime) + " minutes\n\n";
	}
};

int main() {
	MovieData movie1("The Princess Bride", "Rob Reiner", 1987, 98);
	MovieData movie2("Die Hard", "John McTiernan", 1988, 132);

	cout << movie1.toString();
	cout << movie2.toString();
}