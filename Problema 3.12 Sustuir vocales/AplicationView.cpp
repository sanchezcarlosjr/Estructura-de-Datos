#include <iostream>
#include "Line.cpp"
#include "EscapesSequences.h"

using std::string;
using std::cout;
using std::cin;

class AplicationView
{
	string titleApp;
	public: AplicationView()
	{
		this->titleApp = "Problema 3.11 Sustituir vocales"; 
		this->titleApp += LINEBREAK;
		this->titleApp += LINEBREAK;
	}

	public: start()
	{
		Line line;
		cout<<titleApp;
		//line = lineView.interact();
		//line.replace(VOWELS);
		cout<<line;
	}

	
	
	
};

