#pragma once
#include <stdlib.h>
#include <iostream>
#include "Character.h"

using namespace std;

class Board { // Add random item pickups
private:
	int height; // How tall the board is
	int width; // How wide the board is
public:
	Board();
	int drawMapImproved(Character player, Character enemies[], Character coin, int level);
	//This draws the map and the characters every frame.
};