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

void Trigger::eventInput(int type, int seconds)
{
	levels use;
	int miliseconds = 0;
	if (type == 1)
	{
		std::cout << "\nQuick! There's a guard on the left!";
		Sleep(500);

		cords(10, 25);
		std::cout << "Press any key to counter him before time runs out!!";
		while (seconds >= 0)
		{
			cords(0, 10);
			std::cout << "                          ";
			cords(0, 10);
			std::cout << "Timer: " << seconds << "." << miliseconds;
			if (_kbhit())
			{
				cords(10, 25);
				std::cout << "                                                       \n";
				char* success = (char*)"You reacted just in time, you parried the guard tackling you with the cell bar in your hand.";
				cords(0, 5);
				use.typeDisplay(success);
				Sleep(1000);
				break;
			}
			if (seconds == 0 && miliseconds == 0)
			{
				system("CLS");
				char* pain = (char*)"The guard kicks you in the guts, and then tackles you onto the ground.";
				cords(0, 0);
				use.typeDisplay(pain);
				Sleep(1000);

				char* failtext = (char*)"Ouch.";
				use.failPrint(failtext, 72);
				use.endScreen(1);
			}
			if (miliseconds == 0)
			{
				seconds--;
				miliseconds = 99;
				Sleep(1);
			}
			miliseconds--;
			Sleep(1);
		}
		Sleep(1000);
		system("CLS");
	}

	if (type == 2)
	{
		std::cout << "Quick! There's a guard on the right!";
		Sleep(500);

		cords(10, 25);
		std::cout << "Press any key to counter him before time runs out!!";
		while (seconds >= 0)
		{
			cords(0, 10);
			std::cout << "                          ";
			cords(0, 10);
			std::cout << "Timer: " << seconds << "." << miliseconds;
			if (_kbhit())
			{
				cords(10, 25);
				std::cout << "                                                                                                                                   \n";
				char* success = (char*)"You reacted just in time... as the other guard approaches you turn around and smack him in the head, knocking him out.";
				cords(0, 5);
				use.typeDisplay(success);
				Sleep(1000);
				break;
			}
			if (seconds == 0 && miliseconds == 0)
			{
				system("CLS");
				char* pain = (char*)"You didn't notice another guard sneaking up on you and he tasers you.";
				cords(0, 0);
				use.typeDisplay(pain);
				Sleep(1000);

				char* failtext = (char*)"What a shocker that was.";
				use.failPrint(failtext, 63);
				use.endScreen(1);
			}
			if (miliseconds == 0)
			{
				seconds--;
				miliseconds = 99;
				Sleep(1);
			}
			miliseconds--;
			Sleep(1);
		}
		Sleep(1000);
		system("CLS");
	}

	if (type == 3)
	{
		cords(10, 25);
		std::cout << "Press any key to outplay them all!!!!!!";
		while (seconds >= 0)
		{
			cords(0, 10);
			std::cout << "                          ";
			cords(0, 10);
			std::cout << "Timer: " << seconds << "." << miliseconds;
			if (_kbhit())
			{
				Sleep(1000);
				break;
			}
			if (seconds == 0 && miliseconds == 0)
			{
				system("CLS");
				char* pain = (char*)"You get turned into a pincushion by the surrounding storm of bullets. Rip.";
				cords(0, 0);
				use.typeDisplay(pain);
				Sleep(1000);

				char* failtext = (char*)"Guess you weren’t the chosen one.";
				use.failPrint(failtext, 60);
				use.endScreen(7);
			}
			if (miliseconds == 0)
			{
				seconds--;
				miliseconds = 99;
				Sleep(1);
			}
			miliseconds--;
			Sleep(1);
		}
	}
}

void Trigger::clearKeyboardBuffer()
{
	while (_kbhit())
	{
		_getche();
	}
}