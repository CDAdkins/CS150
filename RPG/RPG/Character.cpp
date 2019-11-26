#include <string>
#include <stdlib.h>
#include <time.h>
#pragma once

using namespace std;

class Character {
private:

	int strength; // How much damage you deal. (1-10)
	int agility; // How well you can dodge. (1-10)
	int speed;  // Decides who gets to attack first. (1-10)
	char icon; // How the character is defined on the map.
	int hp;   // How long it takes you to die. (1-100) If hp <= 0 then character is dead.
	int x;   // Character's X position
	int y;  // Character's Y position




public:
	Character() { // Change this to generate a random character.
		srand(time(NULL));
		int randNum = rand() % 5 + 1;

		x = 0;
		y = 0;
		hp = 100;
		strength = 5;
		agility = 5;
		speed = 5;
		icon = 'X';
	}

	Character(int x, int y, int hp, int strength, int agility, int speed, char icon) {
		this->x = x;
		this->y = y;
		this->hp = hp;
		this->strength = strength;
		this->agility = agility;
		this->speed = speed;
		this->icon = icon;
	}

	int getX() {
		return x;
	}

	int getY() {
		return y;
	}

	int getHp() {
		return hp;
	}

	int getStrength() {
		return strength;
	}

	int getAgility() {
		return agility;
	}

	int getSpeed() {
		return speed;
	}

	char getIcon() {
		return icon;
	}

	void moveUp() {
		if (y > 0) {
			y--;
		}
	}

	void moveDown() {
		if (y < 10) {
			y++;
		}
	}

	void moveLeft() {
		if (x > 0) {
			x--;
		}
	}

	void moveRight() {
		if (x < 10) {
			x++;
		}
	}

	void moveRandom() { // Moves either up, down, left, right, or not at all, randomly.
						// Should be used when enemy is far from player.
		srand(time(NULL));
		int randNum = rand() % 5 + 1;

		switch (randNum) {
		case 1:
			moveUp();
			break;
		case 2:
			moveDown();
			break;
		case 3:
			moveLeft();
			break;
		case 4:
			moveRight();
			break;
		case 5:
			return;
		}
	}

	void chasePlayer(Character player) { // Should be used when enemy is near or can "see" player.
		if (player.getX() < x) {
			moveLeft();
			return;
		}
		else if (player.getX() > x) {
			moveRight();
			return;
		}
		else if (player.getY() < y) {
			moveUp();
		}
		else {
			moveDown();
		}
	}

	string where() {
		return("\nX: " + to_string(x) + ", Y: " + to_string(y));
	}
};
