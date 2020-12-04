#pragma once
#include "Trigger.h"

class levels : public Trigger
{
public:
	//Escape the prison
	void level1();
	
	//file
	void fileRoute();
	void windowFail();

	void cellbarsRoute();
	void grenadeFail();

	void chairRoute();
	void leftFail();

	void rightRoute();
	void ropegunFail();
	void parachuteFail();
	void jetpackFail();

	void plungersWin();

	//start fails
	void nrgFail();
	void teleporterFail();
	void rocketFail();



	//Diamond
	void level2();
	
	//Airship
	void level3();
	
	//Functions aka pain
	void displaySpeed();
	void changeSpeed(int setting);
	void typeDisplay(char* text);

	//END
	void failPrint(char* text = (char*)"You Failed...", int x = 65); //preset
	void endScreen(int back);

private:
	int speed = 20;

	bool finishLevel1 = false;
	bool finishLevel2 = false;
	bool finishLevel3 = false;
	bool played = false; //played text
	bool playing = true; //playing game itself

	int failCounter1 = 0;
	int failCounter2 = 0;
	int failCounter3 = 0;
};
