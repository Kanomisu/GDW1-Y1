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
	clearKeyboardBuffer();

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

	ADInput(input, 31, 45,pX, 50, 25, 0);

	if (x == 0)
	{
		windowFail();
	}
	else
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
	clearKeyboardBuffer();
	endScreen(0);
}

void levels::cellbarsRoute()
{
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
	system("CLS");
	char* dialogue1 = (char*)"You manage to remove one on the bars and break out of your cell. But the noise\ngot the attention of the guards on patrol.\n";
	typeDisplay(dialogue1);
	Sleep(2000);

	eventInput(1, 1);
	clearKeyboardBuffer(); //allows the ability to use kbhit once again
	eventInput(2, 1);
	clearKeyboardBuffer();
	
	pastHallway();
}

void levels::pastHallway()
{
	char input = '0';
	int x = 0;
	int* pX = &x;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
	char* dialogue2 = (char*)"Before you can assess your situation carefully another pair of prison guards emerges from the\nelevator at the end of the hallway.\n\nYou panic and lock yourself into a nearby storage closet.";
	typeDisplay(dialogue2);
	Sleep(2000);

	char* dialogue3 = (char*)"\nInside you find a belt of grenades hanging on the wall, and a chair.";
	typeDisplay(dialogue3);

	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 11);
	//Belt of Grenades
	cords(30, 15);
	std::cout << "               ____";
	cords(30, 16);
	std::cout << "              /   /";
	cords(30, 17);
	std::cout << "             /___/";
	cords(30, 18);
	std::cout << "            //_|_\\";
	cords(30, 19);
	std::cout << "           / \\_|_/";
	cords(30, 20);
	std::cout << "          /___/";
	cords(30, 21);
	std::cout << "         //_|_\\";
	cords(30, 22);
	std::cout << "        / \\_|_/";
	cords(30, 23);
	std::cout << "       /___/";
	cords(30, 24);
	std::cout << "      //_|_\\";
	cords(30, 25);
	std::cout << "     / \\_|_/  ";
	cords(30, 26);
	std::cout << "    /___/";
	cords(30, 27);
	std::cout << "   //_|_\\";
	cords(30, 28);
	std::cout << "  / \\_|_/";
	cords(30, 29);
	std::cout << " /   /";
	cords(30, 30);
	std::cout << "/___/";

	//Chair
	cords(70, 15);
	std::cout << "     _______      ___";
	cords(70, 16);
	std::cout << "    |       \\    /   |";
	cords(70, 17);
	std::cout << "     }       \\/\\ \\   |";
	cords(70, 18);
	std::cout << "     {/         \\/   |";
	cords(70, 19);
	std::cout << "    | \            ~~|";
	cords(70, 20);
	std::cout << "    |_/______________|";
	cords(70, 21);
	std::cout << "           \\   \\";
	cords(70, 22);
	std::cout << "     _______\\___\\__________";
	cords(70, 23);
	std::cout << "    |______________________|";
	cords(70, 24);
	std::cout << "    |  |                |  |";
	cords(70, 25);
	std::cout << "    |  |                |  |";
	cords(70, 26);
	std::cout << "    |  |                |  |";
	cords(70, 27);
	std::cout << "    |  |                |  |";
	cords(70, 28);
	std::cout << "    |  |                |  |";
	cords(70, 29);
	std::cout << "    |  |                |  |";
	cords(70, 30);
	std::cout << "    |  |                |  |";
	cords(70, 31);
	std::cout << "    |__|                |__|";

	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 10);
	cords(34, 35);
	std::cout << "Belt of Grenades";
	cords(83, 35);
	std::cout << "Chair";
	ADInput(input, 31, 35, pX, 50, 25, 0);
	if (x == 0)
	{
		grenadeFail();
	}
	else
	{
		chairRoute();
	}
}

void levels::grenadeFail()
{
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
	system("CLS");
	char* dialogue1 = (char*)"You pull the pin on one of the grenades and open the storage door\ntossing the grenade out.";
	typeDisplay(dialogue1);
	Sleep(1000);
	char* dialogue2 = (char*)"\n\nBut before you could shut the door the grenade bounces off the opposite wall and back to you.";
	typeDisplay(dialogue2);
	Sleep(1000);

	char* failtext = (char*)"Cleaning up your bits will take some time.";
	failPrint(failtext, 55);
	clearKeyboardBuffer();
	endScreen(2);
}

void levels::chairRoute()
{
	char input = '0';
	int x = 0;
	int* pX = &x;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
	system("CLS");
	char* dialogue1 = (char*)"You use the chair to boost yourself into the air ducts above you.";
	typeDisplay(dialogue1);
	Sleep(1000);

	cords(40, 10);
	char* dialogue2 = (char*)"Now you have two choices. Left, or Right?";
	typeDisplay(dialogue2);
	Sleep(1000);

	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 10);
	cords(45, 15);
	std::cout << "Left";
	cords(70, 15);
	std::cout << "Right";
	ADInput(input, 40, 15, pX, 25, 25, 0);

	if (x == 0)
	{
		leftFail();
	}
	else
	{
		rightRoute();
	}
}

void levels::leftFail()
{
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
	system("CLS");
	char* dialogue1 = (char*)"You slowly crawl your way left.\nAfter a while you start hearing some voices...\n\n";
	typeDisplay(dialogue1);
	Sleep(1000);

	char* dialogue2 = (char*)"Prison guard: All for more donuts in the break room say \"I\".\n\n";
	typeDisplay(dialogue2);
	Sleep(1000);

	char* dialogue3 = (char*)"You must be above the guard's break room, better be careful!\nYou advance a few more meters...";
	typeDisplay(dialogue3);
	Sleep(1000);

	char* dialogue4 = (char*)"Suddenly, the duct gives way under your weight and you fall right on the table\nwhere all the guards are sitting around.";
	typeDisplay(dialogue4);
	Sleep(1000);
	char* failtext = (char*)"I?";
	failPrint(failtext, 70);
	clearKeyboardBuffer();
	endScreen(3);
}

void levels::rightRoute()
{
	char input = '0';
	int x = 0;
	int y = 0;
	int* pX = &x;
	int* pY = &y;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
	system("CLS");
	if (!played2)
	{
		char* dialogue1 = (char*)"After some crawling you make your way to the roof of the prison. After a bit of punching and kicking,\nyou manage to remove a panel in the duct allowing you to crawl out.";
		typeDisplay(dialogue1);
		Sleep(1000);

		char* dialogue2 = (char*)"\n\nIt's a long way down to the ground so you look around for anything to help you escape.\nSoon you find a crate with some things inside it: ";
		typeDisplay(dialogue2);
		Sleep(1000);
		played2 = true;
	}
	else
	{
		std::cout << "After some crawling you make your way to the roof of the prison. After a bit of punching and kicking,\nyou manage to remove a panel in the duct allowing you to crawl out.\n\nIt's a long way down to the ground so you look around for anything to help you escape.\nSoon you find a crate with some things inside it: ";
	}

	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 11);
	
	//rope gun
	cords(20, 16);
	std::cout << "  _______";
	cords(20, 17);
	std::cout << " /       |__ ___";
	cords(20, 18);
	std::cout << "(   0     __)___)------>>>>";
	cords(20, 19);
	std::cout << " \\_______|";
	cords(20, 20);
	std::cout << "    |  |";
	cords(20, 21);
	std::cout << "    |  |";
	cords(20, 22);
	std::cout << "    |  |";
	cords(20, 23);
	std::cout << "    |  |";
	cords(20, 24);
	std::cout << "    |  |";
	cords(20, 25);
	std::cout << "    |  |";
	cords(20, 26);
	std::cout << "____|__|____";

	//plungers
	cords(60, 13);
	std::cout << "        ___            ___";
	cords(60, 14);
	std::cout << "       |   |          |   |";
	cords(60, 15);
	std::cout << "       |   |          |   |";
	cords(60, 16);
	std::cout << "       |   |          |   |";
	cords(60, 17);
	std::cout << "       |   |          |   |";
	cords(60, 18);
	std::cout << "       |   |          |   |";
	cords(60, 19);
	std::cout << "       |   |          |   |";
	cords(60, 20);
	std::cout << "       |   |          |   |";
	cords(60, 21);
	std::cout << "       |   |          |   |";
	cords(60, 22);
	std::cout << "       |   |          |   |";
	cords(60, 23);
	std::cout << "       |   |          |   |";
	cords(60, 24);
	std::cout << "       |   |          |   |";
	cords(60, 25);
	std::cout << "       |   |          |   |";
	cords(60, 26);
	std::cout << "       |   |          |   |";
	cords(60, 27);
	std::cout << "       |___|          |___|";
	cords(60, 28);
	std::cout << "      |_____|        |_____|";
	cords(60, 29);
	std::cout << "     /       \\      /       \\";
	cords(60, 30);
	std::cout << "   _/_________\\_  _/_________\\_";
	cords(60, 31);
	std::cout << "  |_____________||_____________|";

	//parachute
	cords(15, 40);
	std::cout << "        ____________________";
	cords(15, 41);
	std::cout << "       /    /    ||    \\    \\";
	cords(15, 42);
	std::cout << "      /    /     ||     \\    \\";
	cords(15, 43);
	std::cout << "     /    /      ||      \\    \\";
	cords(15, 44);
	std::cout << "    /    /       ||       \\    \\";
	cords(15, 45);
	std::cout << "   /    /        ||        \\    \\";
	cords(15, 46);
	std::cout << "   \\___/\\___/\\___/\\___/\\___/\\___/";
	cords(15, 47);
	std::cout << "    \\            ||            /";
	cords(15, 48);
	std::cout << "     \\           ||           /";
	cords(15, 49);
	std::cout << "      \\          ||          /";
	cords(15, 50);
	std::cout << "       \\         ||         /";
	cords(15, 51);
	std::cout << "        \\        ||        /";
	cords(15, 52);
	std::cout << "         \\       ||       /";
	cords(15, 53);
	std::cout << "          \\      ||      /";
	cords(15, 54);
	std::cout << "            \\    ||    /";
	cords(15, 55);
	std::cout << "            \\    ||    /";
	cords(15, 56);
	std::cout << "             \\   ||   /";
	cords(15, 57);
	std::cout << "              \\  ||  /";
	cords(15, 58);
	std::cout << "               \\ || /";
	cords(15, 59);
	std::cout << "                \\||/";
	
	//jetpack
	cords(63, 41);
	std::cout << "    _____________________";
	cords(63, 42);
	std::cout << "   |                     |";
	cords(63, 43);
	std::cout << "   |    __         __    |";
	cords(63, 44);
	std::cout << "   |   |  |       |  |   |";
	cords(63, 45);
	std::cout << "   |   |  |       |  |   |";
	cords(63, 46);
	std::cout << "   |   |  |       |  |   |";
	cords(63, 47);
	std::cout << "   |   |  |       |  |   |";
	cords(63, 48);
	std::cout << "   |   |  |       |  |   |";
	cords(63, 49);
	std::cout << "   |   |  |       |  |   |";
	cords(63, 50);
	std::cout << "   |   |  |       |  |   |";
	cords(63, 51);
	std::cout << "   |   |  |       |  |   |";
	cords(63, 52);
	std::cout << "   |   |  |       |  |   |";
	cords(63, 53);
	std::cout << "   |   |__|       |__|   |";
	cords(63, 54);
	std::cout << "   |                     |";
	cords(63, 55);
	std::cout << "   |_____________________|";
	cords(63, 56);
	std::cout << "     /     \\     /     \\";
	cords(63, 57);
	std::cout << "    /       \\   /       \\";
	cords(63, 58);
	std::cout << "   /_________\\ /_________\\";
	
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 10);
	cords(28, 33);
	std::cout << "Rope Gun";
	cords(73, 33);
	std::cout << "Plungers";
	cords(28, 61);
	std::cout << "Parachute";
	cords(73, 61);
	std::cout << "Jetpack";

	//INPUT
	WASDInput(input, 23, 33, pX, pY, 45, 28, 45, 0, 28, 0);

	//ROUTES
	if (x == 0 && y == 0)
	{
		ropegunFail();
	}
	if (x == 45 && y == 0)
	{
		plungersWin();
	}
	if (x == 0 && y == 28)
	{
		parachuteFail();
	}
	if (x == 45 && y == 28)
	{
		jetpackFail();
	}
}

void levels::ropegunFail()
{
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
	system("CLS");
	char* dialogue1 = (char*)"You fire off the rope gun into the distance and start ziplining down it.";
	typeDisplay(dialogue1);
	Sleep(1000);

	char* dialogue2 = (char*)"\n\nHowever because you did not have the right equipment your hand quickly suffers rope burn\ncausing you to let go involuntarily.";
	typeDisplay(dialogue2);
	Sleep(2000);

	char* dialogue3 = (char*)"\n\nFortunately, you drop onto a road, outside the prison. You are a bit dazed and bruised,\nbut otherwise happy to celebrate your escape.";
	typeDisplay(dialogue3);
	Sleep(2000);

	char* dialogue4 = (char*)"\nThen a truck drives by running you over.";
	typeDisplay(dialogue4);
	Sleep(1000);

	char* failtext = (char*)"That sure hit you like a truck huh?";
	failPrint(failtext, 57);
	clearKeyboardBuffer();
	endScreen(4);
}

void levels::parachuteFail()
{
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
	system("CLS");
	char* dialogue1 = (char*)"You put on the pack and jump off the roof...\nAfter falling for a short moment, you tug on the cord.";
	typeDisplay(dialogue1);
	Sleep(2000);

	char* dialogue2 = (char*)"\n\nHowever what came was not a parachute but a bunch of junk.\nYou contemplate checking your equipment next time as you fall to your doom";
	typeDisplay(dialogue2);
	Sleep(2000);

	char* failtext = (char*)"Maybe think before doing next time.";
	failPrint(failtext, 57);
	clearKeyboardBuffer();
	endScreen(4);
}

void levels::jetpackFail()
{
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
	system("CLS");
	char* dialogue1 = (char*)"You strap on the jet pack and press the start button.\n";
	typeDisplay(dialogue1);
	Sleep(1000);

	char* dialogue2 = (char*)"\nOr was that the self-destruction button? Who thought it was a good idea to make both big and red?\n";
	typeDisplay(dialogue2);
	Sleep(1000);

	char* dialogue3 = (char*)"\nYou suddenly feel a rumble as the jetpack roars to life.\nLooks like you are home free, you step off the roof and start flying.\n";
	typeDisplay(dialogue3);
	Sleep(2000);

	char* dialogue4 = (char*)"\nHowever you made a miscalculation. You have no idea on how to steer the jet pack and\nsoon find yourself flying back into the prison, crashing through the cell's window.\nYou are back in your cell with the guards greeting your return.";
	typeDisplay(dialogue4);
	Sleep(3000);

	char* failtext = (char*)"Don't blame the manufacturers for that one.";
	failPrint(failtext, 55);
	clearKeyboardBuffer();
	endScreen(4);
}

void levels::plungersWin()
{
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
	system("CLS");
	char* dialogue1 = (char*)"You take the pair of plungers and slowly climb down the wall of the prison.\n\n";
	typeDisplay(dialogue1);
	Sleep(1000);

	char* dialogue2 = (char*)"Soon you make it to ground level and succeed in escaping the prison.";
	typeDisplay(dialogue2);
	Sleep(1000);

	char* award = (char*)"Sneaky Ending Achieved!";
	sneaky = true;
	played = false;
	played2 = false;
	played3 = false;
	failCounter1 = 0;
	clearKeyboardBuffer();
	successPrint(award, 74);
}

void levels::cellphoneRoute()
{
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
	system("CLS");
	char* dialogue1 = (char*)"You scroll through your list of contacts until you find your attorney Fletcher Reede,\nand you dial...";
	typeDisplay(dialogue1);
	Sleep(1000);

	system("CLS");
	char* dialogue2 = (char*)"\n\nSept 9th, 12:53 PM\nDistrict Court\nCourtroom 4";
	typeDisplay(dialogue2);
	Sleep(1000);

	char* dialogue3 = (char*)"\n\nJudge: Witness please continue your testimony.\n\nWitness: Okay. I was riding alongside my partner within the armored van,\nbut then suddenly we spotted a bag alongside the road. We got out and eventually decided\nto throw the bag alongside the others, we didn’t know there was someone hiding in there...";
	typeDisplay(dialogue3);
	Sleep(3000);

	char* dialogue4 = (char*)"\n\nFletcher: Objection! So, the defendant crawled into the bag\nin order to break into the bank, is that correct?";
	typeDisplay(dialogue4);
	Sleep(2000);

	char* dialogue5 = (char*)"\n\nOpposing lawyer: Is it not obvious?";
	typeDisplay(dialogue5);
	Sleep(1000);

	char* dialogue6 = (char*)"\n\nFletcher: Is it really that obvious? I have proof that defendant did not crawl into that bag.";
	typeDisplay(dialogue6);
	Sleep(2000);

	char* dialogue7 = (char*)"\n\nJudge: Well then, what are you waiting for? Present the evidence already.";
	typeDisplay(dialogue7);
	Sleep(2000);
	clearKeyboardBuffer();
	presentEvidence();
}

void levels::presentEvidence()
{
	char input = '0';
	int x = 0;
	int y = 0;
	int* pX = &x;
	int* pY = &y;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
	system("CLS");
	std::cout << "Choose an evidence to present: ";

	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 11);

	//Floor plans
	cords(5, 12);
	std::cout << " ___________________________________";
	cords(5, 13);
	std::cout << "|               _   _               |";
	cords(5, 14);
	std::cout << "|              |     |              |";
	cords(5, 15);
	std::cout << "|        ______|     |_____         |";
	cords(5, 16);
	std::cout << "|       |      |     |     |        |";
	cords(5, 17);
	std::cout << "|       |______|     |     |        |";
	cords(5, 18);
	std::cout << "|       |            |__ __|        |";
	cords(5, 19);
	std::cout << "|       |__________________|        |";
	cords(5, 20);
	std::cout << "|                                   |";
	cords(5, 21);
	std::cout << "|                                   |";
	cords(5, 22);
	std::cout << "|___________________________________|";

	//disguising bag
	cords(53, 10);
	std::cout << "         /\\/\\/\\";
	cords(53, 11);
	std::cout << "        _\\____/_";
	cords(53, 12);
	std::cout << "       |________|";
	cords(53, 13);
	std::cout << "      /          \\";
	cords(53, 14);
	std::cout << "     /     ||     \\";
	cords(53, 15);
	std::cout << "    |    __||__    |";
	cords(53, 16);
	std::cout << "    |   /  ||      |";
	cords(53, 17);
	std::cout << "    |  /   ||      |";
	cords(53, 18);
	std::cout << "    |  \\   ||      |";
	cords(53, 19);
	std::cout << "    |   \\__||__    |";
	cords(53, 20);
	std::cout << "    |      ||  \\   |";
	cords(53, 21);
	std::cout << "    |      ||   \\  |";
	cords(53, 22);
	std::cout << "    |      ||   /  |";
	cords(53, 23);
	std::cout << "    |   ___||__/   |";
	cords(53, 24);
	std::cout << "    |      ||      |";
	cords(53, 25);
	std::cout << "    |______________|";

	//Mysterious device
	cords(95, 6);
	std::cout << "            O";
	cords(95, 7);
	std::cout << "            |";
	cords(95, 8);
	std::cout << "            z";
	cords(95, 9);
	std::cout << "            \\";
	cords(95, 10);
	std::cout << "            z";
	cords(95, 11);
	std::cout << "            |";
	cords(95, 12);
	std::cout << "            |";
	cords(95, 13);
	std::cout << " ___________|___________";
	cords(95, 14);
	std::cout << "|                       |";
	cords(95, 15);
	std::cout << "|  ___________________  |";
	cords(95, 16);
	std::cout << "| |         |         | |";
	cords(95, 17);
	std::cout << "| |         |         | |";
	cords(95, 18);
	std::cout << "| |      ___|___      | |";
	cords(95, 19);
	std::cout << "| |     /       \\     | |";
	cords(95, 20);
	std::cout << "| |____/         \\____| |";
	cords(95, 21);
	std::cout << "| |    \\         /    | |";
	cords(95, 22);
	std::cout << "| |     \\_______/     | |";
	cords(95, 23);
	std::cout << "| |                   | |";
	cords(95, 24);
	std::cout << "| |___________________| |";
	cords(95, 25);
	std::cout << "|_______________________|";

	//Shovel
	cords(13, 29);
	std::cout << "   ________";
	cords(13, 30);
	std::cout << "  |  ____  |";
	cords(13, 31);
	std::cout << "  | |    | |";
	cords(13, 32);
	std::cout << "  \\ \\____/ /";
	cords(13, 33);
	std::cout << "   \\_    _/";
	cords(13, 34);
	std::cout << "     |  |";
	cords(13, 35);
	std::cout << "     |__|";
	cords(13, 36);
	std::cout << "     |  |";
	cords(13, 37);
	std::cout << "     |  |";
	cords(13, 38);
	std::cout << "     |  |";
	cords(13, 39);
	std::cout << "     |  |";
	cords(13, 40);
	std::cout << "     |  |";
	cords(13, 41);
	std::cout << "     |  |";
	cords(13, 42);
	std::cout << "     |  |";
	cords(13, 43);
	std::cout << " ____|__|____";
	cords(13, 44);
	std::cout << "|    \\  /    |";
	cords(13, 45);
	std::cout << "|     \\/     |";
	cords(13, 46);
	std::cout << "|            |";
	cords(13, 47);
	std::cout << "|            |";
	cords(13, 48);
	std::cout << " \\          /";
	cords(13, 49);
	std::cout << "  \\________/";

	//Security Footage
	cords(55, 39);
	std::cout << " _________________";
	cords(55, 40);
	std::cout << "|_________________|";
	cords(55, 41);
	std::cout << "|  ____     ____  |";
	cords(55, 42);
	std::cout << "| |  \\ |   | /  | |";
	cords(55, 43);
	std::cout << "| |__/_|   |_\\__| |";
	cords(55, 44);
	std::cout << "|_________________|";

	//Doctors analysis
	cords(95, 35);
	std::cout << "  ___________________";
	cords(95, 36);
	std::cout << " |    ____     __    |";
	cords(95, 37);
	std::cout << " |   /    \\  _|  |_  |";
	cords(95, 38);
	std::cout << " |   \\____/ |_    _| |";
	cords(95, 39);
	std::cout << " |   / /\\ \\   |__|   |";
	cords(95, 40);
	std::cout << " |  /_/  \\_\\         |";
	cords(95, 41);
	std::cout << " | ~~~~~~~~~~~~~~~~~ |";
	cords(95, 42);
	std::cout << " | ~~~~~~~~~~~~~~~~~ |";
	cords(95, 43);
	std::cout << " | ~~~~~~~~~~~~~~~~~ |";
	cords(95, 44);
	std::cout << " | ~~~~~~~~~~~~~~~~~ |";
	cords(95, 45);
	std::cout << " | ~~~~~~~~~~~~~~~~~ |";
	cords(95, 46);
	std::cout << " | ~~~~~~~           |";
	cords(95, 47);
	std::cout << " |___________________|";

	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 10);
	cords(16, 27);
	std::cout << "Floor Plan";
	cords(58, 27);
	std::cout << "Disguising Bag";
	cords(100, 27);
	std::cout << "Mysterious Device";
	cords(16, 50);
	std::cout << "Shovel";
	cords(58, 50);
	std::cout << "Security Footage";
	cords(100, 50);
	std::cout << "Doctor's Analysis";

	WASDInput(input, 13, 27, pX, pY, 42, 23, 84, 0, 23, 0);
	
	if (x == 0 && y == 0)
	{
		confirmEvidence(1, false);
	}
	if (x == 42 && y == 0)
	{
		confirmEvidence(2, true);
	}
	if (x == 84 && y == 0)
	{
		confirmEvidence(3, false);
	}
	if (x == 0 && y == 23)
	{
		confirmEvidence(4, false);
	}
	if (x == 42 && y == 23)
	{
		confirmEvidence(5, false);
	}
	if (x == 84 && y == 23)
	{
		confirmEvidence(6, false);
	}
}

void levels::confirmEvidence(int evidence, bool win)
{
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
	system("CLS");
	char input = '0';
	int x = 0;
	int* pX = &x;

	switch (evidence)
	{
	case 1:
		evidenceDisplay(input, pX, "Floor Plans", "\"A diagram of the bank and it's surroundings\"", win);
	case 2:
		evidenceDisplay(input, pX, "Disguising Bag", "\"The bag the defendant hid in, in order to sneak into the bank. The knot is tied on the outside of the bag\"", win);
	case 3:
		evidenceDisplay(input, pX, "Mysterious Device", "\"A device whose use is unknown\"", win);
	case 4:
		evidenceDisplay(input, pX, "Shovel", "\"Found near the bank. Bears the fingerprints of the defendant.\"", win);
	case 5:
		evidenceDisplay(input, pX, "Security Footage", "\"Security footage of the night of the intrusion. Shows the defendant leaving his disguise and setting off the alarm\"", win);
	case 6:
		evidenceDisplay(input, pX, "Doctor's Analysis", "\"Doctor's exam of the defendant done after arrest. Defendant suffered many bruises and cuts.\"", win);
	}
}

void levels::evidenceFail()
{
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
	system("CLS");
	char* dialogue1 = (char*)"Fletcher: Take that!\n\n";
	typeDisplay(dialogue1);
	Sleep(500);

	char* dialogue2 = (char*)"Judge: What is this?\n\n";
	typeDisplay(dialogue2);
	Sleep(500);

	char* dialogue3 = (char*)"Fletcher: Its evidence!\n\n";
	typeDisplay(dialogue3);
	Sleep(500);

	char* dialogue4 = (char*)"Judge: And how exactly does this prove anything?\n\n";
	typeDisplay(dialogue4);
	Sleep(500);

	char* dialogue5 = (char*)"Fletcher: Well...uh, I was just kidding, ha-ha, let me tr-\n\n";
	typeDisplay(dialogue5);
	Sleep(500);

	char* dialogue6 = (char*)"Judge: This is no time for jokes, I see no reason is prolonging this trial.\nI pronounce the defendant, Henry Stickmin: ";
	typeDisplay(dialogue6);
	Sleep(1000);

	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 12);
	char* dialogue7 = (char*)"Guilty!";
	typeDisplay(dialogue7);

	char* failtext = (char*)"What kind of third rate lawyer did you hire?";
	failPrint(failtext, 53);
	clearKeyboardBuffer();
	endScreen(5);
}

void levels::evidenceWin()
{
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
	system("CLS");
	char* dialogue1 = (char*)"Fletcher: Take that!\n\nJudge: Is, this the bag the defendant hid in?\n\nFletcher: Yes, but there is one thing that has been bothering me.\n";
	typeDisplay(dialogue1);
	Sleep(1000);

	char* dialogue2 = (char*)"If the defendant really was hiding in the bag, then...";
	typeDisplay(dialogue2);
	Sleep(1000);

	char* dialogue3 = (char*)"How did he tie the knot from the outside of the bag?!\n";
	typeDisplay(dialogue3);
	Sleep(1000);

	char* dialogue4 = (char*)"If he was inside the bag it'd be impossible for him to tie that knot on the outside.\n\n";
	typeDisplay(dialogue4);
	Sleep(1000);

	char* dialogue5 = (char*)"Judge: But then, how did he do it?\n\n";
	typeDisplay(dialogue5);
	Sleep(500);

	char* dialogue6 = (char*)"Fletcher: Its simple...he didn't!\n\n";
	typeDisplay(dialogue6);
	Sleep(500);

	char* dialogue7 = (char*)"Opposing lawyer: Hwah?! What are you saying?\n\n";
	typeDisplay(dialogue7);
	Sleep(500);

	char* dialogue8 = (char*)"Fletcher: I'm saying that my client didn't hide in that bag at all. He was stuffed in there!\n";
	typeDisplay(dialogue8);
	Sleep(1000);

	char* dialogue9 = (char*)"By this very witness!\n\n";
	typeDisplay(dialogue9);
	Sleep(500);

	char* dialogue10 = (char*)"Witness: Whaaa??\n\n";
	typeDisplay(dialogue10);
	Sleep(500);

	char* dialogue11 = (char*)"Fletcher: As you can see by this doctor's analysis the defendant had taken quite the beating.\nWhile he was in the bag, he was unconscious!\n\n";
	typeDisplay(dialogue11);
	Sleep(1000);

	char* dialogue12 = (char*)"Opposing lawyer: Th-this is absurd!\n\n";
	typeDisplay(dialogue12);
	Sleep(500);

	char* dialogue13 = (char*)"Fletcher: The witness was attempting to dispose of the body.\nHe left the defendant in the bag, knowing he'd drive by it on the way back to the bank.\nWhen the witness and his partner passed the bag he convinced his partner to throw the bag in with the others.\n\n";
	typeDisplay(dialogue13);
	Sleep(2000);

	char* dialogue14 = (char*)"Judge: But...but why would he do that?\n\n";
	typeDisplay(dialogue14);
	Sleep(500);

	char* dialogue15 = (char*)"Fletcher: Why, to dispose of the body of course.\nThere are millions of bags of money in that bank and the witness knew it would take a long time before the body was found.\nBut unfortunately for the witness...";
	typeDisplay(dialogue15);
	Sleep(2000);

	char* dialogue16 = (char*)"His victim woke up and tried to escape from his tomb.\nHe was arrested on the spot and the witness thought everything was over.\nBut it's come back to haunt him now!\n\n";
	typeDisplay(dialogue16);
	Sleep(2000);
		
	char* dialogue17 = (char*)"Witness: You guys can't...This can't be happening to meeee!\n\n";
	typeDisplay(dialogue17);
	Sleep(1000);

	char* dialogue18 = (char*)"Judge: Well, that certainly was an interesting trial.\nHowever, I am now ready to deliver my verdict.\nI find the defendant, Henry Stickmin: ";
	typeDisplay(dialogue18);
	Sleep(1000);

	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 14);
	char* dialogue19 = (char*)"Not guilty!";
	typeDisplay(dialogue19);
	Sleep(500);

	char* award = (char*)"Lame Ending Achieved!";
	justice = true;
	played = false;
	played2 = false;
	played3 = false;
	failCounter1 = 0;
	clearKeyboardBuffer();
	successPrint(award, 75);
}

void levels::drillRoute()
{
	char input = '0';
	int x = 0;
	int* pX = &x;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
	system("CLS");
	if (!played3)
	{
		char* dialogue1 = (char*)"You tug on the cord of the drill a few times, activating the motor.\nIt easily carves its way through the floor below you taking you into an abandoned bathroom.\n\nScrounging around you find a:";
		typeDisplay(dialogue1);
		Sleep(1000);
		played3 = true;
	}
	else
	{
		std::cout << "You tug on the cord of the drill a few times, activating the motor.\nIt easily carves its way through the floor below you taking you into an abandoned bathroom.\n\nScrounging around you find a:";
	}

	clearKeyboardBuffer();

	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 11);
	//Opacitator
	cords(24, 15);
	std::cout << "        __";
	cords(24, 16);
	std::cout << "       /  \\";
	cords(24, 17);
	std::cout << "       \\__/";
	cords(24, 18);
	std::cout << "         \\";
	cords(24, 19);
	std::cout << " ________/________";
	cords(24, 20);
	std::cout << "|  -----------I-  |";
	cords(24, 21);
	std::cout << "|       ___       |";
	cords(24, 22);
	std::cout << "| /|   /   \\   |\\ |";
	cords(24, 23);
	std::cout << "| \\|   \\___/   |/ |";
	cords(24, 24);
	std::cout << "|_________________|";

	//Crowbar
	cords(63, 15);
	std::cout << "  _____";
	cords(63, 16);
	std::cout << " / __  \\";
	cords(63, 17);
	std::cout << "/ /  \\  \\";
	cords(63, 18);
	std::cout << "\\/    \\  \\";
	cords(63, 19);
	std::cout << "       \\  \\";
	cords(63, 20);
	std::cout << "        \\  \\";
	cords(63, 21);
	std::cout << "         \\  \\";
	cords(63, 22);
	std::cout << "          \\  \\   /\\";
	cords(63, 23);
	std::cout << "           \\  \\_/ /";
	cords(63, 24);
	std::cout << "            \\____/";

	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 10);
	cords(28, 30);
	std::cout << "Opacitator";
	cords(67, 30);
	std::cout << "Crowbar";

	ADInput(input, 25, 30, pX, 39, 39, 0);

	if (x == 0)
	{
		opacitatorFail();
	}
	else
	{
		crowbarRoute();
	}
}

void levels::opacitatorFail()
{
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
	system("CLS");
	char* dialogue1 = (char*)"Instructions reads \"Just move the blue slider to the right and you'll be come as opaque as you like.\nNot only that, the more opaque you get, the easier it will be for you\nto pass through solid objects\"\n\n";
	typeDisplay(dialogue1);
	Sleep(2000);

	char* dialogue2 = (char*)"You slide it all the way to the right. Immediately you begin to phase through the floor.\nYou easily slip through the remaining floor to the reception lobby of the prison.\nBut you realize that you no longer have the Opacitator on you and continue to float downwards,\nall the way to the earths core.";
	typeDisplay(dialogue2);
	Sleep(2000);

	char* failtext = (char*)"Guess no one else was able to bring this up during the Beta";
	failPrint(failtext, 48);
	clearKeyboardBuffer();
	endScreen(6);
}

void levels::crowbarRoute()
{
	char input = '0';
	int x = 0;
	int* pX = &x;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
	system("CLS");
	char* dialogue1 = (char*)"You use the crowbar to pry your way through the drainage gate and slip into it.\nAfter some shuffling you fall through a loose panel on the pipe into the lower floor.\nA pair of patrolling guardsmen see you and begin firing at your direction.";
	typeDisplay(dialogue1);
	Sleep(2000);

	char* dialogue2 = (char*)"\n\nYou bolt off down the hallway but the bullets zip dangerously close to you\nso you decide to go:";
	typeDisplay(dialogue2);
	Sleep(1000);

	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 10);
	cords(13, 10);
	std::cout << "Left";
	cords(38, 10);
	std::cout << "Right";
	ADInput(input, 10, 10, pX, 25, 25, 0);

	if (x == 0)
	{
		leftrunRoute();
	}
	else
	{
		runrightFail();
	}
}

void levels::runrightFail()
{
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
	cords(0, 15);
	char* dialogue1 = (char*)"You run straight into a pillar.";
	typeDisplay(dialogue1);
	Sleep(1000);

	char* failtext = (char*)"On the bright side, they'll fix you up right?";
	failPrint(failtext, 54);
	clearKeyboardBuffer();
	endScreen(7);
}

void levels::leftrunRoute()
{
	char input = '0';
	int x = 0;
	int* pX = &x;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
	cords(0, 15);
	char* dialogue1 = (char*)"You continue running for a while before you hit the end of the hallway.";
	typeDisplay(dialogue1);
	Sleep(1000);

	char* dialogue2 = (char*)"\nAs approach the end of the hallway you:";
	typeDisplay(dialogue2);
	Sleep(1000);

	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 10);
	cords(13, 20);
	std::cout << "Turn Left";
	cords(38, 20);
	std::cout << "Go Straight";
	ADInput(input, 10, 20, pX, 25, 25, 0);

	if (x == 0)
	{
		turnleftFail();
	}
	else
	{
		straightWin();
	}
}

void levels::turnleftFail()
{
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
	cords(0, 25);
	char* dialogue1 = (char*)"You run into another pillar and pass out.";
	typeDisplay(dialogue1);
	Sleep(1000);

	char* failtext = (char*)"Ouch. You were that close...";
	failPrint(failtext, 60);
	clearKeyboardBuffer();
	endScreen(7);
}

void levels::straightWin()
{
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
	system("CLS");
	cords(0, 0);
	char* dialogue2 = (char*)"You pick up speed, running as fast your legs can carry you\nand you run up the wall ahead of you and vault over the guards behind you.";
	typeDisplay(dialogue2);
	Sleep(1000);

	char* dialogue3 = (char*)"Taking a right you find yourself in the lobby of the prison,\nall that stands before you is the chief and his remaining men posted there.\nGet ready for an epic showdown!";
	typeDisplay(dialogue3);
	Sleep(1000);
	
	eventInput(3, 1);

	char* success = (char*)"You pull off the most unreal spin counterclockwise dodging all the incoming bullets\nand catching one final one to throw back at the chief.";
	cords(0, 12);
	typeDisplay(success);
	Sleep(1000);

	char* dialogue4 = (char*)"\n\nWith the throw of the bullet you split his gun in half and scare the guards.\nThey all allow you pass in fear and you smile, knowing you earned your freedom in the most badass way possible.";
	typeDisplay(dialogue4);
	Sleep(1000);

	char* award = (char*)"Badass Ending Achieved!";
	epic = true;
	played = false;
	played2 = false;
	played3 = false;
	failCounter1 = 0;
	clearKeyboardBuffer();
	successPrint(award, 74);
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
	clearKeyboardBuffer();
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
	clearKeyboardBuffer();
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
	clearKeyboardBuffer();
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

void levels::evidenceDisplay(char input, int* pX, std::string evidence, const char* description, bool win)
{
	std::cout << "You selected: " << evidence;
	cords(0, 10);
	char* dialogue = (char*)description;
	typeDisplay(dialogue);
	clearKeyboardBuffer();

	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 10);
	cords(30, 15);
	std::cout << "Confirm";
	cords(60, 15);
	std::cout << "Go Back";

	ADInput(input, 27, 15, pX, 30, 30, 0);

	if (*pX == 0)
	{
		if (!win)
		{
			evidenceFail();
		}
		else
		{
			evidenceWin();
		}
	}
	if (*pX == 30)
	{
		presentEvidence();
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

void levels::successPrint(char* text, int x)
{
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 14);
	cords(x, 15);
	typeDisplay(text);
	cords(60, 17);
	std::cout << " __                                               __ ";
	cords(60, 18);
	std::cout << "|    _____ _    _  _____ _____ ______  _____ _____  |";
	cords(60, 19);
	std::cout << "|   / ____| |  | |/ ____/ ____|  ____|/ ____/ ____| |";
	cords(60, 20);
	std::cout << "|  | (___ | |  | | |   | |    | |__  | (___| (___   |";
	cords(60, 21);
	std::cout << "|   \\___ \\| |  | | |   | |    |  __|  \\___ \\\\___ \\  |";
	cords(60, 22);
	std::cout << "|   ____) | |__| | |___| |____| |____ ____) |___) | |";
	cords(60, 23);
	std::cout << "|  |_____/ \\____/ \\_____\\_____|______|_____/_____/  |";
	cords(60, 24);
	std::cout << "|__                                               __|";

	Sleep(1000);

	finishLevel1 = true;
	cords(90, 39);
	std::cout << "Return to Menu";
	int input = _getch();
	if (input == 0xE0)
	{
		input = _getch();
	}
	clearKeyboardBuffer();
	menu();
}
void levels::endScreen(int back)
{
	failCounter1++;
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
		played = false;
		played2 = false;
		system("CLS");
		menu();
	}
	if (y == 0)
	{
		switch (back)
		{
		case 0:
			played = true;
			system("CLS");
			level1();
		case 1:
			system("CLS");
			cellbarsRoute();
		case 2:
			system("CLS");
			pastHallway();
		case 3:
			system("CLS");
			chairRoute();
		case 4:
			played2 = true;
			system("CLS");
			rightRoute();
		case 5:
			system("CLS");
			presentEvidence();
		case 6:
			played3 = true;
			system("CLS");
			drillRoute();
		case 7:
			system("CLS");
			crowbarRoute();
		}
	}
}