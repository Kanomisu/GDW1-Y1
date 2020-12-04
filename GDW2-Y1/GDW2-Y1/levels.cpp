#include "levels.h"
#include "resources.h"

void levels::fileRoute()
{
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
	system("CLS");
	char input = '0';
	int x = 0;
	int* pX = &x;

	cords(40, 10);
	char* dialogue = (char*)"Do you want to file through the Windows Bars or the Cell Bars?";
	typeDisplay(dialogue);

	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 11);
	//Window Bars
	cords(24, 25);
	std::cout << " ______________________________";
	cords(24, 26);
	std::cout << "|  ____| |__| |__| |__| |____  |";
	cords(24, 27);
	std::cout << "| |\\ __| |__| |__| |__| |__ /| |";
	cords(24, 28);
	std::cout << "| | |  | |  | |  | |  | |  | | |";
	cords(24, 29);
	std::cout << "| | |  | |  | |  | |  | |  | | |";
	cords(24, 30);
	std::cout << "| | |  | |  | |  | |  | |  | | |";
	cords(24, 31);
	std::cout << "| | |  | |  | |  | |  | |  | | |";
	cords(24, 32);
	std::cout << "| | |__| |__| |__| |__| |__| | |";
	cords(24, 33);
	std::cout << "| |/___| |__| |__| |__| |___\\| |";
	cords(24, 34);
	std::cout << "|______|_|__|_|__|_|__|_|______|";

	//Jail Bars
	cords(63, 15);
	std::cout << " ________________________________________________________";
	cords(63, 16);
	std::cout << "|  __|  |_|  |_|  |_|  |_|  |_|  |_|  |_|  |_|  |_|  |_  |";
	cords(63, 17);
	std::cout << "| |__|  |_|  |_|  |_|  |_|  |_|  |_|  |_|  |_|  |_|  |_| |";
	cords(63, 18);
	std::cout << "|  __    _    _    _    _    _    _    _    _    _    _  |";
	cords(63, 19);
	std::cout << "| |  |  | |  | |  | |  | |  | |  | |  | |  | |  | |  | | |";
	cords(63, 20);
	std::cout << "| |  |  | |  | |  | |  | |  | |  | |  | |  | |  | |  | | |";
	cords(63, 21);
	std::cout << "| |  |  | |  | |  | |  | |  | |  | |  | |  | |  | |  | | |";
	cords(63, 22);
	std::cout << "| |  |  | |  | |  | |  | |  | |  | |  | |  | |  | |  | | |";
	cords(63, 23);
	std::cout << "| |  |  | |  | |  | |  | |  | |  | |  | |  | |  | |  | | |";
	cords(63, 24);
	std::cout << "| |  |  | |  | |  | |  | |  | |  | |  | |  | |  | |  | | |";
	cords(63, 25);
	std::cout << "| |  |  | |  | |  | |  | |  | |  | |  | |  | |  |_|__|_| |";
	cords(63, 26);
	std::cout << "| |  |  | |  | |  | |  | |  | |  | |  | |  | |  |  __  | |";
	cords(63, 27);
	std::cout << "| |  |  | |  | |  | |  | |  | |  | |  | |  | |  | /  \\ | |";
	cords(63, 28);
	std::cout << "| |  |  | |  | |  | |  | |  | |  | |  | |  | |  | \\__/ | |";
	cords(63, 29);
	std::cout << "| |  |  | |  | |  | |  | |  | |  | |  | |  | |  |  /\\  | |";
	cords(63, 30);
	std::cout << "| |  |  | |  | |  | |  | |  | |  | |  | |  | |  | /__\\ | |";
	cords(63, 31);
	std::cout << "| |  |  | |  | |  | |  | |  | |  | |  | |  | |  |______| |";
	cords(63, 32);
	std::cout << "| |  |  | |  | |  | |  | |  | |  | |  | |  | |  | |  | | |";
	cords(63, 33);
	std::cout << "| |__|  |_|  |_|  |_|  |_|  |_|  |_|  |_|  |_|  |_|  |_| |";
	cords(63, 34);
	std::cout << "|  __    _    _    _    _    _    _    _    _    _    _| |";
	cords(63, 35);
	std::cout << "| |  |  | |  | |  | |  | |  | |  | |  | |  | |  | |  | | |";
	cords(63, 36);
	std::cout << "| |__|  |_|  |_|  |_|  |_|  |_|  |_|  |_|  |_|  |_|  |_| |";
	cords(63, 37);
	std::cout << "|____|__|_|__|_|__|_|__|_|__|_|__|_|__|_|__|_|__|_|__|___|";

	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 10);
	cords(34, 45);
	std::cout << "Window Bars";
	cords(83, 45);
	std::cout << "Cell Bars";

	Trigger::ADInput(input, 31, 45,pX, 50, 25, 0);

	if (x == 0)
	{
		windowFail();
	}
	if (x == 50)
	{
		cellbarsRoute();
	}
}

void levels::windowFail()
{
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
	system("CLS");
	char* dialogue1 = (char*)"You use the file on the bars of the window in your cell.\n\nAfter removing the bars, you climb out to freedom :)";
	typeDisplay(dialogue1);
	Sleep(2000);
	char* dialogue2 = (char*)"\nOnly to plummet 5 stories into your death.";
	typeDisplay(dialogue2);
	Sleep(1000);

	char* failtext = (char*)"Protip: Look both ways before jumping.";
	failPrint(failtext, 56);
	failCounter1++;
	endScreen(0);
}

void levels::cellbarsRoute()
{
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
	system("CLS");
	char* dialogue1 = (char*)"You manage to remove one on the bars and break out of your cell. But the noise\ngot the attention of the guards on patrol.";
	typeDisplay(dialogue1);
	Sleep(2000);

	std::cout << "\n\nWIP";
	endScreen(0);
}

void levels::grenadeFail()
{
}

void levels::chairRoute()
{
}

void levels::leftFail()
{
}

void levels::rightRoute()
{
}

void levels::ropegunFail()
{
}

void levels::parachuteFail()
{
}

void levels::jetpackFail()
{
}

void levels::plungersWin()
{
}

void levels::nrgFail()
{
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
	system("CLS");
	char* dialogue1 = (char*)"You take a large chug of the NRg Drink. After a moment of letting the drink settle you notice\nthat nothing around you is moving, and you feel much stronger. You gently prod at the bars holding\nyou in and they bend like wet noodle easily allowing you through.";
	typeDisplay(dialogue1);
	Sleep(2000);

	char* dialogue2 = (char*)"\n\nYou easily make your way to the ground floor with your newfound powers. Throwing a prison guard in the trash,\nand casually strolling through the lobby snagging a donut from the hands of a frozen prison guard.";
	typeDisplay(dialogue2);
	Sleep(2000);

	char* dialogue3 = (char*)"\n\nJust as you exit the building you feel a strange pounding. You begin to sweat, and the pounding\nsound in your head is getting louder.";
	typeDisplay(dialogue3);
	Sleep(2000);

	char* dialogue4 = (char*)"\n\nYou suddenly kneel over, dying from a heart attack.";
	typeDisplay(dialogue4);
	Sleep(1000);

	char* failtext = (char*)"Maybe in your next life you'll read the warning labels.";
	failPrint(failtext, 50);
	failCounter1++;
	endScreen(0);
}

void levels::teleporterFail()
{
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
	system("CLS");
	char* dialogue1 = (char*)"You pick up a mysterious device with a couple dials and buttons. You fiddle with it a bit,\npressing things at random.\nSuddenly your surrounding changes and you're no longer in the cell";
	typeDisplay(dialogue1);
	Sleep(2000);

	char* dialogue2 = (char*)"\n\nAs you orient yourself from the sudden teleportation you hear a man shouting in the distance";
	typeDisplay(dialogue2);
	Sleep(2000);

	char* dialogue3 = (char*)"\n\nFire!";
	typeDisplay(dialogue3);
	Sleep(1000);

	char* dialogue4 = (char*)".....A bullet goes right through your head.";
	typeDisplay(dialogue4);
	Sleep(800);

	char* failtext = (char*)"You just can't seem to get the hang of that thing can you?";
	failPrint(failtext, 49);
	failCounter1++;
	endScreen(0);
}

void levels::rocketFail()
{
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
	system("CLS");
	char* dialogue1 = (char*)"You hoist the rocket launcher over your shoulders and aim it down right out your cell into the hallway.";
	typeDisplay(dialogue1);
	Sleep(1000);

	char* dialogue2 = (char*)"\nYou fire and the rocket flies rather quickly.";
	typeDisplay(dialogue2);
	Sleep(1000);

	char* dialogue3 = (char*)"\n\nJust then, it flies right into a U shaped pipe, redirecting it right back into your cell\nright into your precious face.";
	typeDisplay(dialogue3);
	Sleep(2000);
	std::cout << "\n\nBOOM!";
	Sleep(500);

	char* failtext = (char*)"Where'd you learn to aim that thing???";
	failPrint(failtext, 55);
	failCounter1++;
	endScreen(0);
}

void levels::displaySpeed()
{
	std::cout << speed;
}

void levels::changeSpeed(int setting)
{
	if (setting == 1)
	{
		speed++;
	}
	else
	{
		speed--;
	}
}

void levels::typeDisplay(char* text)
{
	for (int x = 0; text[x] != '\0'; x++)
	{
		std::cout << text[x];
		Sleep(speed);
	}
}
void levels::failPrint(char* text, int x)
{
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 12);
	cords(x, 15);
	typeDisplay(text);
	cords(60, 17);
	std::cout << " __                        __ ";
	cords(60, 18);
	std::cout << "|  ______      _____ _       |";
	cords(60, 19);
	std::cout << "| |  ____/\\   |_   _| |      |";
	cords(60, 20);
	std::cout << "| | |__ /  \\    | | | |      |";
	cords(60, 21);
	std::cout << "| |  __/ /\\ \\   | | | |      |";
	cords(60, 22);
	std::cout << "| | | / ____ \\ _| |_| |____  |";
	cords(60, 23);
	std::cout << "| |_|/_/    \\_\\_____|______| |";
	cords(60, 24);
	std::cout << "|__                        __|";
	
	Sleep(1000);
}

void levels::endScreen(int back)
{
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
	char input = '0';
	int y = 0;
	int* pY = &y;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 11);
	cords(40, 38);
	std::cout << "Fail Counter: " << failCounter1;
	cords(90, 38);
	std::cout << "Retry";
	cords(90, 39);
	std::cout << "Return to Menu";

	WSInput(input, 85, 38, pY, 1, 1, 0);
	if (y == 1)
	{
		system("CLS");
		menu();
	}
	if (y == 0)
	{
		if (back == 0)
		{
			played = true;
			system("CLS");
			level1();
		}
		else
		{

		}
	}
}