#include "resources.h"

void setWindow(int, int);

//assuming we're adapting 3 levels minimum I'll set it so you can set 3 levels prior to pushing the code 
//	- Ryan

int main() //all functions will go here
{
	setWindow(110, 40);
	menu();					//once menu is done it'll go to levelSelect and so on
	levelSelect();			//select the level you want to play
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