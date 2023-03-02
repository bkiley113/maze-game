#include "pointstack.h"

void Stack::push(int x, int y)
{
	arr[H].x = x;
	arr[H].y = y;
	H++;
}
point Stack::pop()
{
	//point p;
	H--;
	return arr[H];
}
point Stack::peek(int f)
{
	return arr[H - f];
}