#include <stdlib.h>
#include <iostream>
#include "Character.cpp"
#pragma once

using namespace std;

class Board { // Add random item pickups
private:
	int height;
	int width;

public:
	Board() {
		height = 11;
		width = 11;
	}

	void drawMap(Character player, Character enemy) { // Maybe rename to redraw and have it handle all UI stuff.
		system("CLS");
		for (int y = 0; y < height; y++) {
			for (int x = 0; x < width; x++) {
				if (x == player.getX() && y == player.getY()) {
					cout << "[X]";
				} else if (x == enemy.getX() && y == enemy.getY()) {
					cout << "[" << enemy.getIcon() << "]";
				} else {
					cout << "[ ]";
				}
			}
			cout << "\n";
		}
		cout << "\nHealth: " << player.getHp();
	}
};