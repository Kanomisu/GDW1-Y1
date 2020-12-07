#pragma once
#include "Trigger.h"
#include <string>

class levels : public Trigger
{
public:
	//Escape the prison
	void level1();
	
	//file
	void fileRoute();
	void windowFail();

	void cellbarsRoute();
	void pastHallway();
	void grenadeFail();

	void chairRoute();
	void leftFail();

	void rightRoute();
	void ropegunFail();
	void parachuteFail();
	void jetpackFail();

	void plungersWin();

	//cellphone
	void cellphoneRoute();
	void presentEvidence();
	void confirmEvidence(int evidence, bool win);
	void evidenceFail(); //every other evidence
	void evidenceWin(); //disguising bag

	//drill
	void drillRoute();
	void opacitatorFail();

	void crowbarRoute();
	void runrightFail();
	
	void leftrunRoute();
	void turnleftFail();

	void straightWin();

	//start fails
	void nrgFail();
	void teleporterFail();
	void rocketFail();


	//didnt get to it
	//Diamond
	void level2();

	//didnt get to it
	//Airship
	void level3();
	

	//Functions
	void displaySpeed();
	void changeSpeed(int setting);
	void typeDisplay(char* text);
	void evidenceDisplay(char input, int* pX, std::string evidence, const char* description, bool win);
	//END
	void successPrint(char* text = (char*)"Congratulations", int x = 60); //preset
	void failPrint(char* text = (char*)"You Failed...", int x = 65); //preset
	void endScreen(int back);

	//trophies
	bool sneaky = false;
	bool justice = false;
	bool epic = false;

private:
	int speed = 20;

	bool finishLevel1 = false;
	bool finishLevel2 = false;
	bool finishLevel3 = false;
	bool played = false; //played text
	bool played2 = false;
	bool played3 = false;
	bool playing = true; //playing game itself

	int failCounter1 = 0;
	int failCounter2 = 0;
	int failCounter3 = 0;
};
