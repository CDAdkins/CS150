#include <string>
using namespace std;

class Character {
private:
	int strength; // How much damage you deal. (1-10)
	int agility; // How well you can dodge. (1-10)
	int speed;  // Decides who gets to attack first. (1-10)
	int hp;    // How long it takes you to die. (1-100) If hp <= 0 then character is dead.
	int x;    // Character's X position
	int y;   // Character's Y position

public:
	Character();
	int getX();
	int getY();
	void moveUp();
	void moveDown();
	void moveLeft();
	void moveRight();
	string where();
};
