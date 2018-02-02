#include <iostream>
#include "ConsoleController.cpp"

using std::string;
using std::cout;

const char LINEBREAK = '\n';

class ConsoleView
{
	string titleApp;
	
	public: ConsoleView()
	{
		this->titleApp = "Problema 3.5 Numeros mas grandes que Long"; 
		this->titleApp += LINEBREAK;
		start();
	}
	
	
	public: start()
	{
		cout<<titleApp;
		new ConsoleController;
	}
	
	
};

