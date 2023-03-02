#pragma once
#include <iostream>
#include "MazeUtilities.h"
#include "pointstack.h"
using namespace std;

class GameRun :public MazeUtilities
{
public:
	void DisplayMaze();
	void LetsGo();

};
