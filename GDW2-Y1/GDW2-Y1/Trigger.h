#pragma once

class Trigger
{
public:
	void WASDInput(char input, int Xcord, int Ycord, int* x, int* y, int Xchange, int Ychange, int Xmax, int Xmin, int Ymax, int Ymin);
	void ADInput(char input, int Xcord, int Ycord, int* x, int change, int Xmax, int Xmin, bool rightsidecursor = false, int Xcord2 = 0, int Ycord2 = 0);
	void WSInput(char input, int Xcord, int Ycord, int* y, int change, int Ymax, int Ymin, bool rightsidecursor = false, int Xcord2 = 0, int Ycord2 = 0);
	void eventInput(int type, int seconds);
	
	//helps clear things
	void clearKeyboardBuffer();
};

