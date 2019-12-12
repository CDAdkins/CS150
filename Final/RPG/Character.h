#pragma once
#include <string>
using namespace std;

class Character {
private:
	int xFromPlayer;
	int yFromPlayer;
	char icon; // How the character is defined on the map.
	int x;   // Character's X position
	int y;  // Character's Y position

public:
	Character();
	Character(int x, int y, char icon);
	int getX();
	int getY();
	int getXFromPlayer();
	int getYFromPlayer();
	char getIcon();
	void setXFromPlayer(int x);
	void setYFromPlayer(int y);
	void moveUp();
	void moveDown();
	void moveLeft();
	void moveRight();
	void moveRandom(Character player);
	void chasePlayer(Character player);
	void smartMove(Character player);
};