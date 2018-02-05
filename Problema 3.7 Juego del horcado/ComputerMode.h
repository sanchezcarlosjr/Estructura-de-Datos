#ifndef COMPUTERMODE_H
#define COMPUTERMODE_H

#include "Mode.h"

class ComputerMode : public Mode
{
	private: string temp;
	private: struct hiddenWords
	{
		string hiddenWord;
	}words[10];
	private: listHiddenWords();
	public: ComputerMode();
	public: string getHiddenWord();	
	
};

#endif
