#include <iostream>
#include "FilesView.h"
#include "EscapesSequences.h"
#include <stdlib.h>

using std::string;
using std::cout;


class AplicationView
{
	FilesView fileView;
	string titleApp, exitApp;
	
	public: AplicationView()
	{
		this->titleApp = "Ejercicio 4.1 Persona"; 
		this->titleApp += LINEBREAK;
		this->titleApp += LINEBREAK;	
		this->exitApp = LINEBREAK;
		this->exitApp += LINEBREAK;
		this->exitApp += "CEST Algo Imposible? ;)"; 
		this->exitApp += LINEBREAK;
		this->exitApp += LINEBREAK;
	}

	public: start()
	{
		cout<<titleApp;
		fileView.interact();
	}

	public: end()
	{
		cout<<exitApp;
		system("pause");
	}

};

