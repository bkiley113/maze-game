#include "DisplayTools.h"

//FUNCTION TO OUTPUT CARD
void DisplayTools::DisplayCard(int x, int y, int rows, int columns, BoardData card[50][50])
{
    Coordinates C;
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            C.gotoxy(j + x, i + y);
            C.setForeGroundAndBackGroundColor(card[i][j].color, card[i][j].bgcolor);
            cout << char(card[i][j].symbol);
        }
    }
}

//FUNCTION TO OUTPUT CARD AT ONE OF TWELVE FIXED LOCATIONS
void DisplayTools::DisplayAtLocation(int cardPlace, BoardData cardNr[50][50])
{
    if (cardPlace == 1)
    {
        DisplayCard(5, 6, 10, 15, cardNr);
    }
    else if (cardPlace == 2)
    {
        DisplayCard(21, 6, 10, 15, cardNr);
    }
    else if (cardPlace == 3)
    {
        DisplayCard(37, 6, 10, 15, cardNr);
    }
    else if (cardPlace == 4)
    {
        DisplayCard(53, 6, 10, 15, cardNr);
    }
    else if (cardPlace == 5)
    {
        DisplayCard(5, 17, 10, 15, cardNr);
    }
    else if (cardPlace == 6)
    {
        DisplayCard(21, 17, 10, 15, cardNr);
    }
    else if (cardPlace == 7)
    {
        DisplayCard(37, 17, 10, 15, cardNr);
    }
    else if (cardPlace == 8)
    {
        DisplayCard(53, 17, 10, 15, cardNr);
    }
    else if (cardPlace == 9)
    {
        DisplayCard(5, 28, 10, 15, cardNr);
    }
    else if (cardPlace == 10)
    {
        DisplayCard(21, 28, 10, 15, cardNr);
    }
    else if (cardPlace == 11)
    {
        DisplayCard(37, 28, 10, 15, cardNr);
    }
    else if (cardPlace == 12)
    {
        DisplayCard(53, 28, 10, 15, cardNr);
    }

}
