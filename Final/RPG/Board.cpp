/*	CS 150 Final Project
	File Name: Board.cpp
	Programmer: Chris Adkins
	Date Last Modified: 12/11/2019
	CS 150 - Thursday 5:30PM

	This class handles the drawing of the game
	without it it would be basically unplayable.

		This class will include the function drawMapImproved()
	as you can probably guess it is an improved version of
	the now deleted drawMap(). This version allows for more
	than one enemy to exist on the map at a time. It begins
	by keeping track of how close the player is to the coin
	so when they get it, the level can end.
	
	It will then set all of the enemies' distance
	from the player so we can determine if the player is caught
	by an enemy so the game can end. 

	The function will then clear the screen of any characters
	and begin drawing. A for loop will print one horizontal line
	of the board, checking every coordinate to see if it matches
	the location of a character, if it does then it will draw the 
	icon of the character, if not then it will draw a blank space.

	Every time the function ends it will return 1 of 3 ints
	0 means nothing happened and the game can continue
	1 means the player touched an enemy and the game ends
	2 means the player touched the coin so the level increases.
*/

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

int Board::drawMapImproved(Character player, Character enemies[], Character coin, int level) { 
	int xFromCoin = abs(player.getX() - coin.getX());
	int yFromCoin = abs(player.getY() - coin.getY());

	for (int i = 0; i < level; i++) {
		enemies[i].setXFromPlayer(abs(player.getX() - enemies[i].getX()));
		enemies[i].setYFromPlayer(abs(player.getY() - enemies[i].getY()));
	}

	system("CLS");
	for (int y = 0; y < height; y++) {
		for (int x = 0; x < width; x++) {
			bool enemySpace = false;

			for (int i = 0; i < level; i++) {
				if (x == enemies[i].getX() && y == enemies[i].getY()) {
					enemySpace = true;
				}
			}
			if (enemySpace == true) {
				cout << "[" << '#' << "]";
			} else if (x == player.getX() && y == player.getY()) {
				cout << "[X]";
			} else if (x == coin.getX() && y == coin.getY()) {
				cout << "[" << coin.getIcon() << "]";

			} else {
				cout << "[ ]";
			}
		}
		cout << "\n";
	}
	cout << "\nLevel: " << level;

	// Return: 0 = continue game; 1 = caught by enemy; 2 = coin grabbed
	for (int i = 0; i < level; i++) {
		if (enemies[i].getXFromPlayer() == 0 && enemies[i].getYFromPlayer() == 0) { // If player is caught by enemy
			return 1;
		}
	}
	if (xFromCoin == 0 && yFromCoin == 0) { // If coin gets grabbed
		return 2;
	}
	else { // If no contact happens
		return 0;
	}

	
}
