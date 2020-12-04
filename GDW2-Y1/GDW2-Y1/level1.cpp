#include "levels.h"
#include "resources.h"
//all subject to change (even the code itself 'n variables)

//select from levelSelect();
void levels::level1() //escape the prison
{
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
	playing = true;
	char input = '0';
	int x = 0;
	int y = 0;
	int* pX = &x;
	int* pY = &y;
	system("CLS");
	while (playing)
	{
		if (!played) //for retry purposes
		{
			failCounter1 = 0; //if you happen to go to level select and come back in same session
			char* intro = (char*)"You're Henry Stickmin, and you're currently locked up in a jail cell due to a botched bank heist.\n\nA pair prison guards approaches your cell.\nPrison guard: Hey you! You're free to go. ";
			typeDisplay(intro);
			Sleep(3000);
			char* intro2 = (char*)"Haha, no. I'm just kidding. We got a package for you. Here you go.";
			typeDisplay(intro2);
			Sleep(1500);
			char* intro3 = (char*)"\n\nThey toss the package into your cell.\nAfter the guards leave you open the package to find a wonderful cake... Inside you find: ";
			typeDisplay(intro3);
			played = true;
		}
		else
		{
			std::cout << "You're Henry Stickmin, and you're currently locked up in a jail cell due to a botched bank heist.\n\nA pair prison guards approaches your cell.\nPrison guard: Hey you! You're free to go. ";
			std::cout << "Haha, no. I'm just kidding. We got a package for you. Here you go.\n\nThey toss the package into your cell.\nAfter the guards leave you open the package. Inside you find:";
		}

		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 11);
		//ITEM 1
		cords(16, 8);
		std::cout << "_____";
		for (int i = 0; i < 12; i++)
		{
			cords(15, 9 + i);
			std::cout << "|#####|";
		}
		cords(15, 21);
		std::cout << "|_____|";
		cords(15, 22);
		std::cout << "|     |";
		cords(15, 23);
		std::cout << "| ___ |";
		cords(15, 24);
		std::cout << "||   ||";
		cords(15, 25);
		std::cout << "||   ||";
		cords(15, 26);
		std::cout << "||___||";
		cords(15, 27);
		std::cout << "|_____|";

		//ITEM 2
		cords(53, 8);
		std::cout << "      _________";
		cords(53, 9);
		std::cout << "     |         |";
		cords(53, 10);
		std::cout << "	  |_________|";
		cords(53, 11);
		std::cout << "      |       |";
		cords(53, 12);
		std::cout << "    _/_________\\_";
		cords(53, 13);
		std::cout << "   /             \\";
		cords(53, 14);
		std::cout << " _/               \\_";
		cords(53, 15);
		std::cout << "|                   |";
		cords(53, 16);
		std::cout << " \\                 /";
		cords(53, 17);
		std::cout << "  |               |";
		cords(53, 18);
		std::cout << " /                 \\";
		cords(53, 19);
		std::cout << "|___________________|";
		cords(53, 20);
		std::cout << "|          ___  ___ |";
		cords(53, 21);
		std::cout << "| |\\    | |   \\/  _ |";
		cords(53, 22);
		std::cout << "| | \\   | |___/\\___||";
		cords(53, 23);
		std::cout << "| |  \\  | |\\        |";
		cords(53, 24);
		std::cout << "| |   \\ | | \\       |";
		cords(53, 25);
		std::cout << "| |    \\| |  \\      |";
		cords(53, 26);
		std::cout << "|___________________|";
		cords(53, 27);
		std::cout << "|                   |";
		cords(53, 28);
		std::cout << "|___________________|";

		//ITEM 3
		cords(98, 8);
		std::cout << "            O";
		cords(98, 9);
		std::cout << "            |";
		cords(98, 10);
		std::cout << "            z";
		cords(98, 11);
		std::cout << "            \\";
		cords(98, 12);
		std::cout << "            z";
		cords(98, 13);
		std::cout << "            |";
		cords(98, 14);
		std::cout << "            |";
		cords(98, 15);
		std::cout << " ___________|___________";
		cords(98, 16);
		std::cout << "|                       |";
		cords(98, 17);
		std::cout << "|  ___________________  |";
		cords(98, 18);
		std::cout << "| |         |         | |";
		cords(98, 19);
		std::cout << "| |         |         | |";
		cords(98, 20);
		std::cout << "| |      ___|___      | |";
		cords(98, 21);
		std::cout << "| |     /       \\     | |";
		cords(98, 22);
		std::cout << "| |____/         \\____| |";
		cords(98, 23);
		std::cout << "| |    \\         /    | |";
		cords(98, 24);
		std::cout << "| |     \\_______/     | |";
		cords(98, 25);
		std::cout << "| |                   | |";
		cords(98, 26);
		std::cout << "| |___________________| |";
		cords(98, 27);
		std::cout << "|_______________________|";

		//ITEM 4
		cords(0, 50);
		std::cout << "                    ___";
		cords(0, 51);
		std::cout << "              _____|  /          ______";
		cords(0, 52);
		std::cout << " ____________|________\\_________|      |";
		cords(0, 53);
		std::cout << "|                               |      |";
		cords(0, 54);
		std::cout << "|                               |      |";
		cords(0, 55);
		std::cout << "|_______________________________|      |";
		cords(0, 56);
		std::cout << "            |  |//              |______|";
		cords(0, 57);
		std::cout << "            |  |/";
		cords(0, 58);
		std::cout << "            |___\\";

		//ITEM 5
		cords(51, 33);
		std::cout << " ________________________";
		cords(51, 34);
		std::cout << "|         OOOOO          |";
		cords(51, 35);
		std::cout << "|  ____________________  |";
		cords(51, 36);
		std::cout << "| |                    | |";
		cords(51, 37);
		std::cout << "| |                    | |";
		cords(51, 38);
		std::cout << "| |                    | |";
		cords(51, 39);
		std::cout << "| |                    | |";
		cords(51, 40);
		std::cout << "| |                    | |";
		cords(51, 41);
		std::cout << "| |____________________| |";
		cords(51, 42);
		std::cout << "|  ____________________  |";
		cords(51, 43);
		std::cout << "|   ___    ____    ___   |";
		cords(51, 44);
		std::cout << "|  |   |  | __ |  |\\ /|  |";
		cords(51, 45);
		std::cout << "|  |   |  ||__||  | X |  |";
		cords(51, 46);
		std::cout << "|  |___|  |____|  |/_\\|  |";
		cords(51, 47);
		std::cout << "|  ____________________  |";
		cords(51, 48);
		std::cout << "| |      |      |      | |";
		cords(51, 49);
		std::cout << "| |  1   |  2   |  3   | |";
		cords(51, 50);
		std::cout << "| |______|______|______| |";
		cords(51, 51);
		std::cout << "| |      |      |      | |";
		cords(51, 52);
		std::cout << "| |  4   |  5   |  6   | |";
		cords(51, 53);
		std::cout << "| |______|______|______| |";
		cords(51, 54);
		std::cout << "| |      |      |      | |";
		cords(51, 55);
		std::cout << "| |  7   |  8   |  9   | |";
		cords(51, 56);
		std::cout << "| |______|______|______| |";
		cords(51, 57);
		std::cout << "| |      |      |      | |";
		cords(51, 58);
		std::cout << "| |  *   |  0   |  #   | |";
		cords(51, 59);
		std::cout << "| |______|______|______| |";
		cords(51, 60);
		std::cout << "|                        |";
		cords(51, 61);
		std::cout << "|    I   I   I   I   I   |";
		cords(51, 62);
		std::cout << "|________________________|";

		//ITEM 6
		cords(98, 40);
		std::cout << "    _          _";
		cords(98, 41);
		std::cout << "   | |        | |";
		cords(98, 42);
		std::cout << "   |_|        |_|";
		cords(98, 43);
		std::cout << "   | |________| |";
		cords(98, 44);
		std::cout << "   |____    ____|";
		cords(98, 45);
		std::cout << "        |  | ";
		cords(98, 46);
		std::cout << "  ______|__|_____";
		cords(98, 47);
		std::cout << " /               \\";
		cords(98, 48);
		std::cout << "/_________________\\";
		cords(98, 49);
		std::cout << "\\_________        /";
		cords(98, 50);
		std::cout << " \\        _______/";
		cords(98, 51);
		std::cout << "  \\______       /";
		cords(98, 52);
		std::cout << "   \\      _____/";
		cords(98, 53);
		std::cout << "    \\____     /";
		cords(98, 54);
		std::cout << "     \\    ___/";
		cords(98, 55);
		std::cout << "      \\__   /";
		cords(98, 56);
		std::cout << "       \\ __/";
		cords(98, 57);
		std::cout << "        \\_/";
		cords(98, 58);
		std::cout << "         V ";
		
		//CAKE
		cords(51, 69);
		std::cout << "\\                        /";
		cords(53, 71);
		std::cout << "\\                    /";
		cords(55, 72);
		std::cout << " __O___O___O___O__";
		cords(55, 73);
		std::cout << "|~~~~~~~~~~~~~~~~~|";
		cords(55, 74);
		std::cout << "|~~~~~~~~~~~~~~~~~|";
		cords(55, 75);
		std::cout << "|                 |";
		cords(55, 76);
		std::cout << "|~~~~~~~~~~~~~~~~~|";
		cords(55, 77);
		std::cout << "|_________________|";


		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 10);
		cords(13, 30);
		std::cout << "	File";
		cords(58, 30);
		std::cout << " NRg Drink";
		cords(103, 30);
		std::cout << "	Teleporter";
		cords(13, 65);
		std::cout << "Rocket Launcher";
		cords(58, 65);
		std::cout << " Cellphone";
		cords(103, 65);
		std::cout << "	Drill";

		//INPUT
		WASDInput(input, 11, 30, pX, pY, 45, 35, 90, 0, 35, 0);

		//ROUTES
		if (x == 0 && y == 0)
		{
			played = false;
			fileRoute();
		}
		if (x == 45 && y == 0)
		{
			nrgFail();
		}
		if (x == 90 && y == 0)
		{
			teleporterFail();
		}
		if (x == 0 && y == 35)
		{
			rocketFail();
		}
		if (x == 45 && y == 35)
		{
			//cellphoneRoute();
		}
		if (x == 90 && y == 35)
		{
			//drillRoute();
		}

		//reset everything
		playing = false;
		played = false;
		failCounter1 = 0;
		system("CLS");
		levelSelect();
	}
}