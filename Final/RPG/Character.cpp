/*	CS 150 Final Project
	File Name: Board.cpp
	Programmer: Chris Adkins
	Date Last Modified: 12/11/2019
	CS 150 - Thursday 5:30PM

	This class handles characters in the game.
	The no arg constructor gives us a template for the 
	player character. The playre begins at (1, 1) on the board
	and has the icon 'X' to represent it.

	We also have a constructor for creating a custom character,
	this is what we used to create the enemies and the coin.

	The class has various getters and setters that don't need to
	be explained. It also has the smartMove(), moveRandom(), and
	chasePlayer() functions. smartMove calls moveRandom while the 
	enemy is far away from the player. When the player gets close
	to an enemy the smartMove() function begins to call chasePlayer().
	This is how I simulated a vision system with the enemies. The game
	would not be fun if the enemies were always moving towards the 
	player perfectly, just as the game wouldn't be fun if the enemies
	meandered around the board for the entire game. smartMove() strikes
	a happy medium which keeps the game feeling different every level.
*/
#pragma once
#include "Character.h"
#include <string>
#include <stdlib.h>
#include <time.h>
#include <iostream>

using namespace std;

Character::Character() { // Change this to generate a random character.
	srand(time(NULL));
	int randNum = rand() % 5 + 1;

	x = 0;
	y = 0;
	icon = 'X';
	xFromPlayer = 0;
	yFromPlayer = 0;
}

Character::Character(int x, int y, char icon) {
	this->x = x;
	this->y = y;
	this->icon = icon;
	xFromPlayer = 0;
	yFromPlayer = 0;
}

int Character::getX() {
	return x;
}

int Character::getY() {
	return y;
}

int Character::getXFromPlayer() {
	return xFromPlayer;
}

int Character::getYFromPlayer() {
	return yFromPlayer;
}

char Character::getIcon() {
	return icon;
}

void Character::setXFromPlayer(int x) {
	xFromPlayer = x;
}

void Character::setYFromPlayer(int y) {
	yFromPlayer = y;
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

void Character::moveRandom(Character player) { // Moves either up, down, left, right, or towards player, randomly.
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
		chasePlayer(player);
		break;
	}
}

void Character::chasePlayer(Character player) { // Should be used when enemy is near or can "see" player.
	if (player.getX() < x) {
		moveLeft();
	}
	else if (player.getX() > x) {
		moveRight();
	}
	else if (player.getY() < y) {
		moveUp();
	}
	else {
		moveDown();
	}
}

void Character::smartMove(Character player) {
	srand(time(NULL));
	int xFromPlayer = abs(player.getX() - getX());
	int yFromPlayer = abs(player.getY() - getY());

	if (xFromPlayer <= 3 && yFromPlayer <= 3) {
		chasePlayer(player);
	} else {
		moveRandom(player);
	}
}