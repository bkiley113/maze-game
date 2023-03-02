#include "InitialBoard.h"

//HERE, I USE A CONSTRUCTOR TO LOAD ALL CARDS AS WELL AS THE SCOREBOARD
InitialBoard::InitialBoard()
{
    randArrayGen(cardTop);
    Sleep(1000);
    randArrayGen(cardBottom);

    LoadCard("files/card0.txt", card[0]);
    LoadCard("files/card1.txt", card[1]);
    LoadCard("files/card2.txt", card[2]);
    LoadCard("files/card3.txt", card[3]);
    LoadCard("files/card4.txt", card[4]);
    LoadCard("files/card5.txt", card[5]);
    LoadCard("files/card6.txt", card[6]);
    LoadCard("files/card7.txt", card[7]);
    LoadCard("files/card8.txt", card[8]);
    LoadCard("files/card9.txt", card[9]);
    LoadCard("files/card10.txt", card[10]);
    LoadCard("files/cardJ.txt", card[11]);
    LoadCard("files/cardK.txt", card[12]);
    LoadCard("files/cardQ.txt", card[13]);
    LoadCard("files/cardBlack.txt", card[14]);
    LoadCard("files/box.txt", card[15]);

}

//THIS FUNCTION CREATES TWO RANDOM ARRAYS 1-6
//EACH ARRAY ASSIGNS HALF THE CARDS TO RANDOM POSITIONS
//I USED TWO SO WE CAN HAVE ONE REPEAT OF EACH CARD
int* InitialBoard::randArrayGen(int ar[6])
{
    srand((unsigned)time(NULL));

    while (true)
    {
        //Generate 6 numbers
        int a = rand() % 6 + 1;
        int b = rand() % 6 + 1;
        int c = rand() % 6 + 1;
        int d = rand() % 6 + 1;
        int e = rand() % 6 + 1;
        int f = rand() % 6 + 1;
        ar[0] = a;
        ar[1] = b;
        ar[2] = c;
        ar[3] = d;
        ar[4] = e;
        ar[5] = f;

        //Check the numbers to make sure none of them equal each other
        if (a == b || a == c || b == c || a == d || a == e || a == f || b == d || b == e || b == f || c == d ||
            c == e || c == f || d == e || d == f || e == f)
        {
            a = rand() % 6 + 1;
            b = rand() % 6 + 1;
            c = rand() % 6 + 1;
            d = rand() % 6 + 1;
            e = rand() % 6 + 1;
            f = rand() % 6 + 1;
        }
        else { return ar; }
    }
}

//FUNCTION TO LOAD CARD
void InitialBoard::LoadCard(string filename, BoardData card[50][50])
{
    int rows, columns;
    ifstream input(filename);
    if (!input)
        return;
    input >> rows >> columns;
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
            input >> card[i][j].symbol >> card[i][j].color >> card[i][j].bgcolor;
    }
    input.close();
}
