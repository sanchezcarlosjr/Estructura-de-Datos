#ifndef PERSONMODE_H
#define PERSONMODE_H

#include "Mode.h"

class PersonMode : public Mode
{
	private: string hiddenWord;
	public:
		PersonMode();
		public: string getHiddenWord();	
};

#endif
