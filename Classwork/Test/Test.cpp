#include <iostream>
using namespace std;

int charX = 5;
int charY = 6;



void drawMap() {
	for (int y = 0; y < 11; y++) {
		for (int x = 0; x < 11; x++) {
			if (x == charX && y == charY) {
				cout << "X ";
			} else {
				cout << "# ";
			}
		}
		cout << "\n";
	}
}

int main() {
	drawMap();
}

class Character {
private:
	int x;
	int y;

public:
	Character() {
		x = 0;
		y = 0;
	}
};