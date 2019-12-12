/*	CS 150 Final Project
	File Name: RPG.cpp
	Programmer: Chris Adkins
	Date Last Modified: 12/11/2019
	CS 150 - Thursday 5:30PM

	Problem Statement:
	This is a game where you, the player,
	are tasked with retrieving a coin while
	avoiding the enemy on the screen. As the 
	levels increase the number of enemies increases
	making the game harder as you go along.

	Overall Plan:
	1. Import all of the necessary classes explained below.
	2. Create a new character with the default no arg
		constructor to represent our player.
	3. Create another character to represent the coin.
		This character will be set to pos(10, 10) and
		given the icon "@" to represent it on the board.
	4. Create an array of characters to hold the expanding
		number of characters in the game. We will initialize
		it to 100 even though that score is basically impossible.
		We will also create a Board, the board will handle
		the visual representation of our game.
	5. We will then create our moveCharacter function to
		control our player manually. Using getch we can
		receive user input without waiting for them
		to press enter after every input. This results
		in an experience that feels much more like playing a 
		game rather than simply using a console program.
		Depending on what char we receive as an argument
		the function will run a switch statement to call 
		one of four movement methods defined in the Character
		class.
	6. Finally we will add the main function which will control
		the pace of the game. it will set the srand seed based
		on the system time. This will be used alongside the 
		randNum int to set the enemy spawn to a random Y position
		on the map. This is so multiple enemies don't always spawn
		on top of eachother. This function will use a for loop
		that depends on the current level to spawn the correct
		number of enemies on the map for each level.
		We will then employ a while loop to loop our game until
		the board object's drawMap() function returns either a
		1 or a 2.
	7. Depending on the result of the board.drawMap() function
		we will either increase the level and/or loop main() or 
		end the program.

	Classes Needed and Purpose:
	<iostream>    to handle talking to the user.
	<cstdlib>     because my IDE yells at me if I don't have it.
	<time.h>      to set the srand seed dynamically.
	<conio.h>     to get input from user without hitting enter.
	"Character.h" to create our player, coin, and enemies.
	"Board.h"     to draw our map as well as our characters.
*/

#pragma once
#include <iostream>
#include <cstdlib>
#include <time.h>
#include <conio.h>
#include "Character.h"
#include "Board.h"

using namespace std;

Character player; // Our player character
Character coin(10, 10, '@');
Board board;
Character enemies[100];

void moveCharacter(char key) {
	switch (key) {
	case 'w': 
		player.moveUp();
		break;
	case 'a':
		player.moveLeft();
		break;
	case 's':
		player.moveDown();
		break;
	case 'd':
		player.moveRight();
		break;
	case 32: // [SPACE] player does not move, but the game continues.
		break;
	case 27:
		cout << "\nClosing Game..."; // Press ESC to exit the game
		exit(0);
		break;
	default: // If an unsupported key is pressed.
		moveCharacter(_getch());
	}
}

int main(int level) {
	srand(time(NULL));
	int randNum = rand() % 10;
	bool levelDone = false;
	player = Character(); // This resets the player position after each level

	for (int i = 0; i < level; i++) { // For every level, add one more enemy to the map.
		int randNum = rand() % 10;
		enemies[i] = Character(5, randNum, '#');
	}
	while (!levelDone) {
		switch (board.drawMapImproved(player, enemies, coin, level)) {
		case 0: // No contact is made, game coninues.
			moveCharacter(_getch());
			for (int i = 0; i < level; i++) {
				enemies[i].smartMove(player);
			}
			break;

		case 1: // Player is caught by enemy
			// Replace map with 'YOU LOSE'
			cout << "\nYou Lose\n";
			cin.ignore();
			levelDone = true;
			exit(0);
			break;

		case 2: // Player gets coin, increase level and reset player position.
			moveCharacter(_getch());
			level++;
			main(level);
			break;
		}
	}
}