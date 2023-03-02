#pragma once
#include <iostream>


class point
{
public:
	int x, y;
};

class Stack:public point
{
public:
	point arr[100000];
	int H;
	void push(int x, int y);

	point pop();

	point peek(int f);
};