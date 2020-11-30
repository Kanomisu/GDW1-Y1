#include "resources.h"
#include "levels.h"
//all subject to change (even the code itself 'n variables)

//select from levelSelect();
void levels::level1() //escape the prison
{
	bool playing = true;
	bool selecting = true;
	char input = '0';
	int x = 0;
	int y = 0;
	system("CLS");
	while (playing)
	{
		char* intro = (char*)"Henry is laying on his bed in one of the cells in the prison, when guards walk up to him to make fun of him.\nThey then deliver a package that was mailed to him.\n\nHe finds 6 contraptions inside the cake delivered to him upon inspection... ITS BREAKOUT TIME";
		for (int x = 0; intro[x] != '\0'; x++) 
		{
			std::cout << intro[x];
			Sleep(20);
		}
		
		//ITEM 1
		cords(16, 5);
		std::cout << "_____";
		for (int i = 0; i < 12; i++)
		{
			cords(15, 6 + i);
			std::cout << "|#####|";
		}
		cords(15, 18);
		std::cout << "|_____|";
		cords(15, 19);
		std::cout << "|     |";
		cords(15, 20);
		std::cout << "| ___ |";
		cords(15, 21);
		std::cout << "||   ||";
		cords(15, 22);
		std::cout << "||   ||";
		cords(15, 23);
		std::cout << "||___||";
		cords(15, 24);
		std::cout << "|_____|";
		cords(13, 30);
		std::cout << "	File";

		//ITEM 2
		cords(53, 5);
		std::cout << "      _________";
		cords(53, 6);
		std::cout << "     |         |";
		cords(53, 7);
		std::cout << "	   |_________|";
		cords(53, 8);
		std::cout << "      |       |";
		cords(53, 9);
		std::cout << "    _/_________\\_";
		cords(53, 10);
		std::cout << "   /             \\";
		cords(53, 11);
		std::cout << " _/               \\_";
		cords(53, 12);
		std::cout << "|                   |";
		cords(53, 13);
		std::cout << " \\                 /";
		cords(53, 14);
		std::cout << "  |               |";
		cords(53, 15);
		std::cout << " /                 \\";
		cords(53, 16);
		std::cout << "|___________________|";
		cords(53, 17);
		std::cout << "|          ___  ___ |";
		cords(53, 18);
		std::cout << "| |\\    | |   \\/  _ |";
		cords(53, 19);
		std::cout << "| | \\   | |___/\\___||";
		cords(53, 20);
		std::cout << "| |  \\  | |\\        |";
		cords(53, 21);
		std::cout << "| |   \\ | | \\       |";
		cords(53, 22);
		std::cout << "| |    \\| |  \\      |";
		cords(53, 23);
		std::cout << "|___________________|";
		cords(53, 24);
		std::cout << "|                   |";
		cords(53, 25);
		std::cout << "|___________________|";
		cords(58, 30);
		std::cout << " NRg Drink";

		//ITEM 3
		cords(98, 5);
		std::cout << "            O";
		cords(98, 6);
		std::cout << "            |";
		cords(98, 7);
		std::cout << "            z";
		cords(98, 8);
		std::cout << "            \\";
		cords(98, 9);
		std::cout << "            z";
		cords(98, 10);
		std::cout << "            |";
		cords(98, 11);
		std::cout << "            |";
		cords(98, 12);
		std::cout << " ___________|___________";
		cords(98, 13);
		std::cout << "|                       |";
		cords(98, 14);
		std::cout << "|  ___________________  |";
		cords(98, 15);
		std::cout << "| |         |         | |";
		cords(98, 16);
		std::cout << "| |         |         | |";
		cords(98, 17);
		std::cout << "| |      ___|___      | |";
		cords(98, 18);
		std::cout << "| |     /       \\     | |";
		cords(98, 19);
		std::cout << "| |____/         \\____| |";
		cords(98, 20);
		std::cout << "| |    \\         /    | |";
		cords(98, 21);
		std::cout << "| |     \\_______/     | |";
		cords(98, 22);
		std::cout << "| |                   | |";
		cords(98, 23);
		std::cout << "| |___________________| |";
		cords(98, 24);
		std::cout << "|_______________________|";
		cords(103, 30);
		std::cout << "	Teleporter";

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
		cords(13, 65);
		std::cout << "Rocket Launcher";

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
		cords(58, 65);
		std::cout << " Cellphone";

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
		cords(103, 65);
		std::cout << "	Drill";

		//INPUT
		while (input != char(13)) //not hit enter
		{
			cords(11 + x, 30 + y); //moving left -> right / right -> left
			std::cout << "->"; //cursor leftside
			cords(0, 0);
			input = _getch();
			cords(11 + x, 30 + y);
			std::cout << "  ";

			if (input == 'a')
			{
				if (x > 0)
				{
					x -= 45;
				}
			}

			if (input == 'd')
			{
				if (x < 90)
				{
					x += 45;
				}
			}

			if (input == 'w')
			{
				if (y > 0)
				{
					y -= 35;
				}
			}

			if (input == 's')
			{
				if (y < 35)
				{
					y += 35;
				}
			}
		}

		if (x == 0 && y == 0)
		{
			fileRoute();
		}
		if (x == 45 && y == 0)
		{
			//nrgdrinkRoute();
		}
		if (x == 90 && y == 0)
		{
			//teleporterRoute();
		}
		if (x == 0 && y == 35)
		{
			//rocketRoute();
		}
		if (x == 45 && y == 35)
		{
			//cellphoneRoute();
		}
		if (x == 90 && y == 35)
		{
			//drillRoute();
		}

		levelSelect();
	}
}