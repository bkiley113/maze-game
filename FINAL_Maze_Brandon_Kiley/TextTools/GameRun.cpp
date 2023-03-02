#include "GameRun.h"


void GameRun::DisplayMaze()
{
	for (int i = 0; i < 25; i++)
	{
		for (int j = 0; j < 50; j++)
		{
			if ((board[i][j]) == 1)
			{
				Color(11);
				cout << char(219);
			}
			else if ((board[i][j]) == 2)
			{
				Color(13);
				cout << char(219);
			}
			else if (board[i][j] == 3 || board[i][j] == 4 || board[i][j] == 5 || board[i][j] == 6)
			{
				Color(14);
				cout << "*";
			}
			else cout << " ";
		}
		cout << endl;
	}
}

void GameRun::LetsGo()
{
	xpos = 0;
	ypos = 1;

	DisplayMaze();

	while (1)
	{
		coor.ShowConsoleCursor(false);
		DisplayMouse();
		Sleep(90);
		HideMouse();
		MoveMouse();
		isStar();
		if (xpos == 49 && ypos == 23)
		{
			break;
		}
	}

}