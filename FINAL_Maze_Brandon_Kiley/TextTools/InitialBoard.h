#pragma once
#include <iostream>
#include "DisplayTools.h"
#include <windows.h>
#include "Coordinates.h"
#include <cstdlib>
#include "DisplayTools.h"

//THIS CLASS LOADS THE CARDS FROM FILES INTO THE GAME

class InitialBoard:public DisplayTools
{
public:
    int cardTop[6] = {0,0,0,0,0,0};
    int cardBottom[6] = {0,0,0,0,0,0};
    BoardData card[16][50][50];

    int* randArrayGen(int ar[6]);
    void LoadCard(string filename, BoardData card[50][50]);

    InitialBoard();



};