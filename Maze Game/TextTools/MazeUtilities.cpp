#include "MazeUtilities.h"

void MazeUtilities::Color(int color)
{
	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(hConsole, color);
}

bool MazeUtilities::IDidNOTComeFrom(int x, int y)
{
	point p = S.peek(1);
	if (x == p.x && y == p.y)
		return false;
	return true;
}

void MazeUtilities::isStar()
{
	if (board[ypos][xpos] == 3)
		flag1 = true;
	if (board[ypos][xpos] == 4)
		flag2 = true;
	if (board[ypos][xpos] == 5)
		flag3 = true;
	if (board[ypos][xpos] == 6)
		flag4 = true;
}

void MazeUtilities::MoveMouse()
{
	//is right empty
	if ((board[ypos][xpos + 1] == 0 || board[ypos][xpos + 1] == 3 || board[ypos][xpos + 1] == 4 || board[ypos][xpos + 1] == 5 || board[ypos][xpos + 1] == 6) && IDidNOTComeFrom(xpos + 1, ypos))
	{
		S.push(xpos, ypos);
		xpos++;
	}
	//up
	else if ((board[ypos - 1][xpos] == 0 || board[ypos - 1][xpos] == 3 || board[ypos - 1][xpos] == 4 || board[ypos - 1][xpos] == 5 || board[ypos - 1][xpos] == 6) && IDidNOTComeFrom(xpos, ypos - 1))
	{
		S.push(xpos, ypos);
		ypos--;
	}
	//left
	else if ((board[ypos][xpos - 1] == 0 || board[ypos][xpos - 1] == 3 || board[ypos][xpos - 1] == 4 || board[ypos][xpos - 1] == 5 || board[ypos][xpos - 1] == 6) && IDidNOTComeFrom(xpos - 1, ypos))
	{
		S.push(xpos, ypos);
		xpos--;
	}
	//down
	else if ((board[ypos + 1][xpos] == 0 || board[ypos + 1][xpos] == 3 || board[ypos + 1][xpos] == 4 || board[ypos + 1][xpos] == 5 || board[ypos + 1][xpos] == 6) && IDidNOTComeFrom(xpos, ypos + 1))
	{
		S.push(xpos, ypos);
		ypos++;
	}
	else
	{
		board[ypos][xpos] = 1;
		point p;
		p = S.pop();
		xpos = p.x;
		ypos = p.y;
	}


}

void MazeUtilities::DisplayMouse()
{
	point p;
	int peek = 1;

	Color(12);
	coor.gotoxy(xpos, ypos);
	cout << char(219);
	if (flag1)
	{
		p = S.peek(1);
		peek++;
		coor.gotoxy(p.x, p.y);
		cout << "*";
	}
	if (flag2)
	{
		p = S.peek(2);
		peek++;
		coor.gotoxy(p.x, p.y);
		cout << "*";
	}
	if (flag3)
	{
		p = S.peek(3);
		peek++;
		coor.gotoxy(p.x, p.y);
		cout << "*";
	}
	if (flag4)
	{
		p = S.peek(4);
		peek++;
		coor.gotoxy(p.x, p.y);
		cout << "*";
	}
	//p = S.peek(peek);
	//coor.gotoxy(p.x, p.y);
	//Color(15);
	//cout << ".";


}

void MazeUtilities::HideMouse()
{
	coor.gotoxy(xpos, ypos);
	cout << " ";
	if (flag1)
	{
		point p = S.peek(1);
		coor.gotoxy(p.x, p.y);
		cout << " ";
	}
	if (flag2)
	{
		point p = S.peek(2);
		coor.gotoxy(p.x, p.y);
		cout << " ";
	}
	if (flag3)
	{
		point p = S.peek(3);
		coor.gotoxy(p.x, p.y);
		cout << " ";
	}
	if (flag4)
	{
		point p = S.peek(4);
		coor.gotoxy(p.x, p.y);
		cout << " ";
	}
}