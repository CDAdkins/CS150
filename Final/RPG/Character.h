#pragma once
#include <string>
using namespace std;

class Character {
private:

	int xFromPlayer;
	int yFromPlayer;
	int strength; // How much damage you deal. (1-10)
	int agility; // How well you can dodge. (1-10)
	int speed;  // Decides who gets to attack first. (1-10)
	char icon; // How the character is defined on the map.
	int hp;   // How long it takes you to die. (1-100) If hp <= 0 then character is dead.
	int x;   // Character's X position
	int y;  // Character's Y position




public:
	Character();

	Character(int x, int y, int hp, int strength, int agility, int speed, char icon);

	int getX();

	int getY();

	int getXFromPlayer();

	int getYFromPlayer();

	int getHp();

	int getStrength();

	int getAgility();

	int getSpeed();

	char getIcon();

	void setXFromPlayer(int x);

	void setYFromPlayer(int y);

	void moveUp();

	void moveDown();

	void moveLeft();

	void moveRight();

	void moveRandom();

	void chasePlayer(Character player);

	void smartMove(Character player);

	string whereAmI();
};