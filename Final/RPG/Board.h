#pragma once
#include <stdlib.h>
#include <iostream>
#include "Character.h"


using namespace std;

class Board { // Add random item pickups
private:
	int height;
	int width;

public:
	Board();

	void drawMap(Character player, Character enemy);
};