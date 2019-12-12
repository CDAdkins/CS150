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
	int drawMapImproved(Character player, Character enemies[], Character coin, int level);
};