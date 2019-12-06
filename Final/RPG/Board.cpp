#pragma once
#include <stdlib.h>
#include <iostream>
#include "Character.h"
#include "Board.h"


using namespace std;


Board::Board() {
	height = 11;
	width = 11;
}

void Board::drawMap(Character player, Character enemy) { // Maybe rename to redraw and have it handle all UI stuff.
	system("CLS");
	for (int y = 0; y < height; y++) {
		for (int x = 0; x < width; x++) {
			if (x == player.getX() && y == player.getY()) {
				cout << "[X]";
			}
			else if (x == enemy.getX() && y == enemy.getY()) {
				cout << "[" << enemy.getIcon() << "]";
			}
			else {
				cout << "[ ]";
			}
		}
		cout << "\n";
	}
}

void Board::drawBattle(Character player, Character enemy) {
	for (int y = 0; y < height; y++) {
		cout << "-";
	}
}
