#include <iostream>
#include "Line.cpp"
#include "EscapesSequences.h"

using std::string;
using std::cout;
using std::cin;

class AplicationView
{
	Line line;
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
		line = "CREE ES LA VERDAD";
		line.replace();
		cout<<line;
	}

	
	
	
};

