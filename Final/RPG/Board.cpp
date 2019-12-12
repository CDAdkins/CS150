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
