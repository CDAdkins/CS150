#include <iostream>
#include <string>
#include <conio.h>
#include "Character.cpp"
#include "Board.cpp"
#pragma once

using namespace std;


Character player; // Our player character
Character rat(5, 5, 25, 1, 2, 3, 'R');
Board board;

void moveCharacter(char key) {
	switch (key) {
	case 'w':
		player.moveUp();
		break;

	case 'a':
		player.moveLeft();
		break;

	case 's':
		player.moveDown();
		break;

	case 'd':
		player.moveRight();
		break;

	case 32: // player does not move, but the game continues.
		break;

	case 27:
		cout << "\nClosing Game..."; // Press ESC to exit the game
		exit(0);
		break;

	default: // If an unsupported key is pressed.
		moveCharacter(_getch());
	}
}

int main() {
	while (true) {
		board.drawMap(player, rat);
		rat.chasePlayer(player);
		moveCharacter(_getch());

	}
}

