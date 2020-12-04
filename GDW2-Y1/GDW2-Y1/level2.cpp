#include "resources.h"

void levels::level2()
{
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
	if (finishLevel1)
	{

	}

	else
	{
		char input = '0';
		int y = 0;
		system("CLS");

		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
		char* intro = (char*)"You have not beaten the first level yet!!!";
		typeDisplay(intro);

		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 10);
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
		system("CLS");
	}

	levelSelect();
}