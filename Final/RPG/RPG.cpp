#include <iostream>
#include <string>
#include <conio.h>
//#include "Character.h" FIX THIS
#include "Character.cpp"
using namespace std;

int boardHeight = 11;  // Height of the board
int boardWidth = 11;  // Width of the board
Character character; // Our player character

void drawMap() {
	system("CLS");
	for (int y = 0; y < boardHeight; y++) {
		for (int x = 0; x < boardWidth; x++) {
			if (x == character.getX() && y == character.getY()) {
				cout << "[X]";
			} else {
				cout << "[ ]";
			}
		}
		cout << "\n";
	}
}

void moveCharacter(char key) {
	switch (key) {
	case 'w': 
		character.moveUp();
		break;

	case 'a':
		character.moveLeft();
		break;

	case 's':
		character.moveDown();
		break;

	case 'd':
		character.moveRight();
		break;

	case 32: // Character does not move, but the game continues.
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
		drawMap();
		moveCharacter(_getch());
	}
}

