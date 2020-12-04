#include "Trigger.h"
#include "resources.h"

void Trigger::WASDInput(char input, int Xcord, int Ycord, int* x, int* y, int Xchange, int Ychange, int Xmax, int Xmin, int Ymax, int Ymin)
{
	while (input != char(13)) //not hit enter
	{
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 13);
		cords(Xcord + *x, Ycord + *y); //moving left -> right / right -> left
		std::cout << "->"; //cursor leftside
		cords(0, 0);
		input = _getch();
		cords(Xcord + *x, Ycord + *y);
		std::cout << "  ";

		if (input == 'a')
		{
			if (*x > Xmin)
			{
				*x -= Xchange;
			}
		}

		if (input == 'd')
		{
			if (*x < Xmax)
			{
				*x += Xchange;
			}
		}

		if (input == 'w')
		{
			if (*y > Ymin)
			{
				*y -= Ychange;
			}
		}

		if (input == 's')
		{
			if (*y < Ymax)
			{
				*y += Ychange;
			}
		}
	}
}
void Trigger::ADInput(char input, int Xcord, int Ycord, int *x, int change, int Xmax, int Xmin, bool rightsidecursor, int Xcord2, int Ycord2)
{
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 13);
	while (input != char(13)) //not hit enter
	{
		cords(Xcord + *x, Ycord); //moving left -> right / right -> left
		std::cout << "->"; //cursor leftside
		if (rightsidecursor)
		{
			cords(Xcord2 + *x, Ycord2);
			std::cout << "<-"; //cursor rightside
		}
		cords(0, 0);
		input = _getch();
		cords(Xcord + *x, Ycord);
		std::cout << "  ";
		if (rightsidecursor)
		{
			cords(Xcord2 + *x, Ycord2);
			std::cout << "  ";
		}

		if (input == 'a')
		{
			if (*x > Xmin)
			{
				*x -= change;
			}
		}

		if (input == 'd')
		{
			if (*x < Xmax)
			{
				*x += change;
			}
		}
	}
}

void Trigger::WSInput(char input, int Xcord, int Ycord, int* y, int change, int Ymax, int Ymin, bool rightsidecursor, int Xcord2, int Ycord2)
{
	while (input != char(13)) //not hit enter
	{
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 13);
		cords(Xcord, Ycord + *y); //moving left -> right / right -> left
		std::cout << "->"; //cursor leftside
		if (rightsidecursor)
		{
			cords(Xcord2, Ycord2 + *y);
			std::cout << "<-"; //cursor rightside
		}
		cords(0, 0);
		input = _getch();
		cords(Xcord, Ycord + *y);
		std::cout << "  ";
		if (rightsidecursor)
		{
			cords(Xcord2, Ycord2 + *y);
			std::cout << "  ";
		}

		if (input == 'w')
		{
			if (*y > Ymin)
			{
				*y -= change;
			}
		}
		if (input == 's')
		{
			if (*y < Ymax)
			{
				*y += change;
			}
		}
	}
}