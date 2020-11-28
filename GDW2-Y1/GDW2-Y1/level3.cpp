#include "resources.h"
#include "levels.h"

void levels::level3()
{
	if (finishLevel1 && finishLevel2)
	{

	}

	else
	{
		char input = '0';
		int y = 0;
		system("CLS");

		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 11);
		char* intro = (char*)"You have not beaten both the first and second level yet!!!";
		for (int x = 0; intro[x] != '\0'; x++)
		{
			std::cout << intro[x];
			Sleep(40);
		}

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


