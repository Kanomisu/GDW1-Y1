#include "levels.h"
#include "resources.h"

void levels::control()
{

}

void levels::fileRoute()
{
	system("CLS");
	char input = '0';
	int x = 0;
	cords(25, 30);
	char* intro = (char*)"Do you want to file through the windows bars or the jail bars?";
	for (int x = 0; intro[x] != '\0'; x++)
	{
		std::cout << intro[x];
		Sleep(20);
	}

	cords(34, 35);
	std::cout << "Window Bars";
	cords(58, 35);
	std::cout << "Jail Bars";
	while (input != char(13)) //not hit enter
	{
		cords(31 + x, 35); //moving left -> right / right -> left
		std::cout << "->"; //cursor leftside
		cords(0, 0);
		input = _getch();
		cords(31 + x, 35);
		std::cout << "  ";

		if (input == 'a')
		{
			if (x > 0)
			{
				x -= 25;
			}
		}

		if (input == 'd')
		{
			if (x < 25)
			{
				x += 25;
			}
		}
	}

	if (x == 0)
	{
		//window();
	}
	if (x == 25)
	{
		//jailbars();
	}
}