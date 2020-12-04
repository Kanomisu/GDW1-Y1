#include "resources.h"
#include "levels.h"
HANDLE console = GetStdHandle(STD_OUTPUT_HANDLE); //just a variable for "console"

void help();
void credits();
void options();

levels use;

void menu()
{
	char input = '0';
	int y = 0; //y is set at 0 aka hovering over level select
	int* pY = &y;
	bool running = true;
	system("CLS");

	while (running)
	{
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
		cords(61, 10);
		std::cout << "Main Menu";
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 9);
		cords(56, 11);
		std::cout << "___________________";

		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 10);
		cords(57, 14);
		std::cout << "  Level Select";
		cords(57, 16);
		std::cout << "  How to Play";
		cords(57, 18);
		std::cout << "  Credits";
		cords(57, 20);
		std::cout << "  Options";
		cords(57, 22);
		std::cout << "  Exit Game";

		use.WSInput(input, 56, 14, pY, 2, 8, 0, true, 72, 14);

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

		if (y == 6)
		{
			options();
			y = 6;
		}

		if (y == 8) //exit
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
	int* pX = &x;
	bool selecting = true;

	while (selecting)
	{
		//Name change later accordingly..

		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 11);
		cords(0, 9);
		std::cout << " _|_||___||___||___||___||___||___||_|_ \n";
		std::cout << " -.-..---..---..---..---..---..---..-.- \n";
		std::cout << "  | ||   ||   ||   ||   ||   ||   || |  \n";
		std::cout << "  | ||   ||   ||   ||   ||   ||   || |  \n";
		std::cout << " _|_||___||___||___||___||___||___||_|_ \n";
		std::cout << " -.-..---..---..---..---..---..---..-.- \n";
		std::cout << "  | ||   ||   ||   ||   ||   ||   || |  \n";
		std::cout << "  | ||   ||   ||   ||   ||   ||   || |  \n";
		std::cout << " _|_||___||___||___||___||___||___||_|_ \n";
		std::cout << " -.-..---..---..---..---..---..---..-.- \n";
		std::cout << "  | ||   ||   ||   ||   ||   ||   || |  \n";
		std::cout << "  | ||   ||   ||   ||   ||   ||   || |  \n";
		std::cout << " _|_||___||___||___||___||___||___||_|_ \n";
		std::cout << " -.-..---..---..---..---..---..---..-.- \n";
		std::cout << " -'-||---||---||---||---||---||---||-'- \n";

		cords(49, 9);
		std::cout << " ______________________________";
		cords(49, 10);
		std::cout << "|                              |";
		cords(49, 11);
		std::cout << "|          __________          |";
		cords(49, 12);
		std::cout << "|         /__________\\         |";
		cords(49, 13);
		std::cout << "|         \\          /         |";
		cords(49, 14);
		std::cout << "|          \\        /          |";
		cords(49, 15);
		std::cout << "|           \\      /           |";
		cords(49, 16);
		std::cout << "|            \\    /            |";
		cords(49, 17);
		std::cout << "|             \\  /             |";
		cords(49, 18);
		std::cout << "|______________\\/______________|";
		cords(49, 19);
		std::cout << "|                              |";
		cords(49, 20);
		std::cout << "|                              |";
		cords(49, 21);
		std::cout << "|                              |";
		cords(49, 22);
		std::cout << "|______________________________|";

		cords(94, 9);
		std::cout << "      ___________________";
		cords(94, 10);
		std::cout << "     |                   |";
		cords(94, 11);
		std::cout << "     |                   |";
		cords(94, 12);
		std::cout << "     |                   |";
		cords(94, 13);
		std::cout << "     |                   |";
		cords(94, 14);
		std::cout << "     |                   |";
		cords(94, 15);
		std::cout << "     |                   |";
		cords(94, 16);
		std::cout << "     |                   |";
		cords(94, 17);
		std::cout << "     |                   |";
		cords(94, 18);
		std::cout << "     |___________________|";
		cords(94, 19);
		std::cout << " ____|___________________|____";
		cords(94, 20);
		std::cout << "/                             \\";
		cords(94, 21);
		std::cout << "\\_____________________________/";
		cords(94, 22);
		std::cout << " ____|___________________|____";
		cords(94, 23);
		std::cout << "/                             \\";
		cords(94, 24);
		std::cout << "\\_____________________________/";

		//Level Select
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 10);
		cords(15, 28);
		std::cout << "Level 1";
		cords(60, 28);
		std::cout << "Level 2";
		cords(105, 28);
		std::cout << "Level 3";

		//Name Level
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
		cords(10, 6);
		std::cout << "Escaping the Prison";
		cords(55, 6);
		std::cout << "Stealing the Diamond";
		cords(97, 6);
		std::cout << "Infiltrating the Airship";

		use.ADInput(input, 11, 28, pX, 45, 65, 0, true, 24, 28);

		if (x == 0)
		{
			selecting = false;
			use.level1();
		}

		if (x == 45)
		{
			//WIP
			selecting = false;
			use.level2();
		}

		if (x == 90)
		{
			//WIP
			//if ()
			selecting = false;
			use.level3();
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
	cords(80, 28);
	std::cout << "BACK";
	cords(56, 9);
	std::cout << "HOW TO PLAY";
	cords(51, 10);
	std::cout << "---------------------";
	cords(27, 12);
	std::cout << "1. Use WASD and ENTER to select your choices!";
	cords(27, 14);
	std::cout << "2. Progress through the story and depending on your choices will you succeed!";
	cords(27, 16);
	std::cout << "3. Unlock further levels by reaching one of the ends in the previous entries!";
	cords(27, 18);
	std::cout << "4. Have Fun!!!";
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
	cords(58, 9);
	std::cout << "CREDITS";
	cords(51, 10);
	std::cout << "---------------------";
	cords(50, 12);
	std::cout << "Ryan Dinh - 100804962";
	cords(50, 14);
	std::cout << "Arianna Thorson - 100673627";
	cords(50, 16);
	std::cout << "William Tu - 100661019";
	cords(50, 18);
	std::cout << "Kevin Huang - 100788603";
	cords(50, 20);
	std::cout << "Sivanes Mayooran - 100786195";
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

void options()
{
	char input = '0';
	int x = 20;
	system("CLS");

	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 11);
	cords(53, 9);
	std::cout << "TEXT READ SPEED";
	cords(51, 10);
	std::cout << "---------------------";
	cords(46, 13);
	std::cout << "Increase";
	cords(69, 13);
	std::cout << "Decrease";
	cords(52, 20);
	std::cout << "FASTER = LOWER NUM";
	cords(80, 28);
	std::cout << "PRESS ENTER TO GO BACK";

	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 13);
	cords(60, 14);
	use.displaySpeed();
	while (input != char(13)) //not hit enter
	{
		cords(70, 14); 
		std::cout << "->";
		cords(50, 14);
		std::cout << "<-";
		cords(0, 0);
		input = _getch();
		if (input == 'a')
		{
			if (x > 0)
			{
				x -= 1;
				use.changeSpeed(0); //I couldn't get pointers to work :(
				cords(60, 14);
				std::cout << "  ";
				cords(60, 14);
				use.displaySpeed();
			}
		}

		if (input == 'd')
		{
			if (x < 50)
			{
				x += 1;
				use.changeSpeed(1);
				cords(60, 14);
				std::cout << "  ";
				cords(60, 14);
				use.displaySpeed();
			}
		}
	}
}

void cords(int x, int y) //plot cords
{
	COORD position;
	position.X = x;
	position.Y = y;
	SetConsoleCursorPosition(console, position);
}