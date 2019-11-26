#pragma once
#include "Character.h"
#include <string>
#include <stdlib.h>
#include <time.h>



using namespace std;



Character::Character() { // Change this to generate a random character.
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

Character::Character(int x, int y, int hp, int strength, int agility, int speed, char icon) {
	this->x = x;
	this->y = y;
	this->hp = hp;
	this->strength = strength;
	this->agility = agility;
	this->speed = speed;
	this->icon = icon;
}

int Character::getX() {
	return x;
}

int Character::getY() {
	return y;
}

int Character::getHp() {
	return hp;
}

int Character::getStrength() {
	return strength;
}

int Character::getAgility() {
	return agility;
}

int Character::getSpeed() {
	return speed;
}

char Character::getIcon() {
	return icon;
}

void Character::moveUp() {
	if (y > 0) {
		y--;
	}
}

void Character::moveDown() {
	if (y < 10) {
		y++;
	}
}

void Character::moveLeft() {
	if (x > 0) {
		x--;
	}
}

void Character::moveRight() {
	if (x < 10) {
		x++;
	}
}

void Character::moveRandom() { // Moves either up, down, left, right, or not at all, randomly.
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

void Character::chasePlayer(Character player) { // Should be used when enemy is near or can "see" player.
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

string Character::whereAmI() {
	return("\nX: " + to_string(x) + ", Y: " + to_string(y));
}