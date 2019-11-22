#include "Character.h"
#include <string>

using namespace std;

class Character { // Player Character
private:

	int strength; // How much damage you deal. (1-10)
	int agility; // How well you can dodge. (1-10)
	int speed;  // Decides who gets to attack first. (1-10)
	int hp;    // How long it takes you to die. (1-100) If hp <= 0 then character is dead.
	int x;    // Character's X position
	int y;   // Character's Y position


public:
	Character() {
		x = 0;
		y = 0;
		hp = 100;
		strength = 5;
		agility = 5;
		speed = 5;
	}

	int getX() {
		return x;
	}

	int getY() {
		return y;
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

	string where() {
		return("\nX: " + to_string(x) + ", Y: " + to_string(y));
	}
};