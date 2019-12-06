#pragma once
#include "Character.h"
using namespace std;

class Battle {
private:
	Character char1; // Probably going to be the player
	Character char2; // Probably whoever the player is fighting

public:
	Battle(Character char1, Character char2);
};