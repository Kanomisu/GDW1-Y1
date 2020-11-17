#include "resources.h"
#include <iostream>
#include <windows.h>
#include <conio.h>
#include <cstdlib>

HANDLE console = GetStdHandle(STD_OUTPUT_HANDLE); //just a variable for "console"

void help();
void credits();
void cords(int, int);

void menu()
{
	char input = '0';
	int y = 0; //y is set at 0 aka hovering over level select
	bool running = true;
	system("CLS");

	while (running)
	{
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
		cords(50, 10);
		std::cout << "Main Menu";
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 12);
		cords(45, 11);
		std::cout << "___________________";

		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
		cords(48, 14);
		std::cout << "1) Level Select";
		cords(48, 16);
		std::cout << "2) How to Play";
		cords(48, 18);
		std::cout << "3) Credits";
		cords(48, 20);
		std::cout << "4) Exit Game";

		while (input != char(13)) //if enter hasn't been inputted
		{
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 13);
			cords(45, 14 + y);
			std::cout << "->"; //cursor
			cords(0, 0); //puts the underscore at top left
			input = _getch();
			cords(45, 14 + y);
			std::cout << "  ";

			if (input == 's')
			{
				if (y < 6)
				{
					y += 2;
				}
			}

			if (input == 'w')
			{
				if (y > 0)
				{
					y -= 2;
				}
			}
		}

		if (y == 0) //ends menu -> level select
		{
			running = false;
			system("CLS");
			input = ' ';
		}

		if (y == 2) //how to play
		{
			help();
			y = 2;
		}

		if (y == 4) //credits
		{
			credits();
			y = 4;
		}

		if (y == 6) //exit
		{
			exit(0);
		}

		system("CLS");
		input = ' ';  //input entered
	}
}

void levelSelect()
{
	char input = '0';
	int x = 0;
	bool selecting = true;

	while (selecting)
	{
		//Name change later accordingly..

		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 11);
		cords(15, 28);
		std::cout << "Level 1";
		cords(50, 28);
		std::cout << "Level 2";
		cords(85, 28);
		std::cout << "Level 3";

		while (input != char(13)) //if enter hasn't been inputted
		{
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 13);
			cords(11 + x, 28); //moving left -> right / right -> left
			std::cout << "->"; //cursor leftside
			cords(24 + x, 28);
			std::cout << "<-"; //cursor rightside
			cords(0, 0);
			input = _getch();
			cords(11 + x, 28);
			std::cout << "  "; //refresh every button press
			cords(24 + x, 28);
			std::cout << "  ";

			if (input == 'a')
			{
				if (x > 10)
				{
					x -= 35;
				}
			}

			if (input == 'd')
			{
				if (x < 45)
				{
					x += 35;
				}
			}
		}

		if (x == 0)
		{
			//WIP
			level1();
		}

		if (x == 35)
		{
			//WIP
			level2();
		}

		if (x == 70)
		{
			//WIP
			level3();
		}

		system("CLS");
		input = ' '; //input entered
	}
}

void help()
{
	char input = '0';
	int y = 0;
	system("CLS");

	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 11);
	std::cout << "Help WIP";

	cords(80, 28);
	std::cout << "BACK";
	while (input != char(13))
	{
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 13);
		cords(75, 28 + y);
		std::cout << "->";
		cords(0, 0);
		input = _getch();
		cords(75, 28 + y);
		std::cout << "  ";
	}
}

void credits()
{
	char input = '0';
	int y = 0;
	system("CLS");

	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 11);
	std::cout << "Credits WIP";

	cords(80, 28);
	std::cout << "BACK";
	while (input != char(13))
	{
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 13);
		cords(75, 28 + y);
		std::cout << "->";
		cords(0, 0);
		input = _getch();
		cords(75, 28 + y);
		std::cout << "  ";
	}
}

void cords(int x, int y) //plot cords
{
	COORD position;
	position.X = x;
	position.Y = y;
	SetConsoleCursorPosition(console, position);
}