#pragma once
#include <string>
using namespace std;

class Character {
private:
	int xFromPlayer;  // X Distance from the player character
	int yFromPlayer; // Y Distance from the player character
	int x;          // Character's X position
	int y;         // Character's Y position
	char icon;    // How the character is defined on the map.
	

public:
	Character(); // Default no arg constructor used for player
	Character(int x, int y, char icon); // Constructor to manually build a character
	int getX(); // return X position
	int getY(); // return Y position
	int getXFromPlayer(); // Returrn X Distance from the player
	int getYFromPlayer(); // Returrn Y Distance from the player
	char getIcon(); // Return 'character' that represents this Character
	void setXFromPlayer(int x); // Sets the "xFromPlayer" Variable
	void setYFromPlayer(int y); // Sets the "yFromPlayer" Variable
	void moveUp(); // Decreases the characters Y position by 1
	void moveDown(); // Increases the characters Y position by 1
	void moveLeft(); // Decreases the characters X position by 1
	void moveRight(); // Increases the characters X position by 1
	void moveRandom(Character player); // Randomly calls one of the move() functions
	void chasePlayer(Character player); // Moves the character towards the player
	void smartMove(Character player); // Decides where to move based on distance from player.
};