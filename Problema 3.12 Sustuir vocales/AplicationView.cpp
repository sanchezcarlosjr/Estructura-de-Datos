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
		enum symbols{ VOWELS };
		Line line("Hola mundo");
		cout<<titleApp;
		line.replace();
		cout<<line;
	}

	
	
	
};

