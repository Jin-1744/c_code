#define _CRT_SECURE_NO_WARNINGS
#include<stdlib.h>
#include<graphics.h>
#include<conio.h>
#include<math.h>

struct Point {
	double x, y;
	COLORREF color;
};

COLORREF colors[256] = { RGB(255,138,180),RGB(252,145,196),RGB(255,144,194),RGB(255,144,194),RGB(255,143,195),RGB(255,140,190),RGB(255,142,193) };
const int xScreen = 1200;
const int yScreen = 800;
const double PI = 3.1426535159;
const double e = 2.71828;
const double averag_distance = 0.162;
const int quantity = 506;
const int circles = 210;
const int frames = 20;
Point origin_points[quantity];
Point points[circles * quantity];
IMAGE images[frames];

double screen_x(double x)
{
	x += xScreen / 2;
	return x;
}

double screen_y(double y)
{
	y=-y + yScreen / 2;
	return y;
}

int creat_random(int x1, int x2)
{
	if (x2 > x1)
		return rand() % (x2 - x1 + 1) + x1;
}

