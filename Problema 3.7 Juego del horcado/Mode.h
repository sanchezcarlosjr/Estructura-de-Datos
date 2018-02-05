#include <iostream>
using std::string;
#ifndef MODE_H
#define MODE_H

class Mode
{
	public:
		virtual string  getHiddenWord() = 0;
};

#endif
