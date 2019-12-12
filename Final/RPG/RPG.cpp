#pragma once
#include <iostream>
#include <cstdlib>
#include <string>
#include <time.h>
#include <conio.h>
#include "Character.h"
#include "Board.h"

using namespace std;

Character player; // Our player character
Character coin(10, 10, '@');
Board board;
Character enemies[100];

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

int main(int level) {
	srand(time(NULL));
	int randNum = rand() % 10;

	bool levelDone = false;

	player = Character();

	for (int i = 0; i < level; i++) {
		int randNum = rand() % 10;
		enemies[i] = Character(5, randNum, '#');
	}
	while (!levelDone) {
		switch (board.drawMapImproved(player, enemies, coin, level)) {
		case 0: // No contact is made
			moveCharacter(_getch());
			for (int i = 0; i < level; i++) {
				enemies[i].smartMove(player);
			}
			break;

		case 1: // Player is caught by enemy
			// Replace map with 'YOU LOSE'
			cout << "\nYou Lose\n";
			cin.ignore();
			levelDone = true;
			break;

		case 2: // Player gets coin
			moveCharacter(_getch());
			level++;
			main(level);
			break;
		}
	}
}

