#include <iostream>
#include "Coordinates.h"

#include "screens.h"
//uses win/loss screens to orient user

#include "pointstack.h"// class that contains tbhe stack used for the mouse position
#include "MazeUtilities.h" //class that contatins the maze and maze display functions
//also contains functions to move the mouse and modify stack
#include "GameRun.h"
//includes functions that actually run the game

using namespace std;

void main()
{
	Screen screen;
	screen.TitleScreen(); //display title
	GameRun maze;
	maze.LetsGo(); // run entire maze game
	screen.WinScreen(); // end screen!!! 

}

