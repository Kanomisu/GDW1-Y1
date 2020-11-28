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
			Sleep(10);
		}
		
		while (input != char(13)) //not hit enter
		{
			cords(11 + x, 28); //moving left -> right / right -> left
			std::cout << "->"; //cursor leftside
			cords(24 + x, 28);
			std::cout << "<-"; //cursor rightside
			cords(0, 0);
			input = _getch();
			cords(11 + x, 28);
			std::cout << "  "; //refresh every button press
			cords(24 + x, 28);
			std::cout << "  ";
		}
	}
}