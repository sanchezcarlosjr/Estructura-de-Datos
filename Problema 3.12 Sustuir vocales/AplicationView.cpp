#include <iostream>
#include "LineView.cpp"
#include "Line.cpp"
#include "EscapesSequences.h"

using std::string;
using std::cout;
using std::cin;

class AplicationView
{
	Line line;
	LineView lineView;
	string titleApp;
	
	public: AplicationView()
	{
		this->titleApp = "Problema 3.11 Sustituir vocales"; 
		this->titleApp += LINEBREAK;
		this->titleApp += LINEBREAK;
	}

	public: start()
	{
		cout<<titleApp;
		line = lineView.interact();
		line.replace();
		cout<<line;
	}

};

