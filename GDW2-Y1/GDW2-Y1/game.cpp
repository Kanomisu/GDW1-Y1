#include "resources.h"

void setWindow(int, int);

int main() //all functions will go here
{
	SetConsoleTitle(L"Henry Stickmin Collection");
	setWindow(120, 40);
	title();
	menu();					//once menu is done it'll go to levelSelect and so on
}

void setWindow(int Width, int Height)
{
	_COORD coord;
	coord.X = Width;
	coord.Y = Height;

	_SMALL_RECT side;
	side.Top = 0;
	side.Left = 0;
	side.Bottom = Height;
	side.Right = Width;

	HANDLE console = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleScreenBufferSize(console, coord); //Buffer size
	SetConsoleWindowInfo(console, TRUE, &side); // Window size
}