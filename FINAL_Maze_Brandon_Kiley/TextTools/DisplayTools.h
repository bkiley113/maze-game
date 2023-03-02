#pragma once
#include "TextDraw.h"
#include "MyMouse.h"
#include "Coordinates.h"
#include "Colors.h"

// THIS CLASS DISPLAYS CARDS AT CERTAIN LOCATIONS AFTER BEING LOADED BY INITIALSCREEN CLASS
class DisplayTools
{
public:
    Coordinates C;
    void DisplayCard(int x, int y, int rows, int columns, BoardData card[50][50]);
    void DisplayAtLocation(int cardPlace, BoardData cardNr[50][50]);


};