#include <iostream>
#include "ConsoleController.cpp"


using std::string;
using std::cout;

class ConsoleView
{
	string titleApp;
	
	public: ConsoleView()
	{
		this->titleApp = "Problema 3.7 Juego del horcado"; 
		this->titleApp += LINEBREAK;
		start();
	}
	
	
	public: start()
	{
		cout<<titleApp;
		new ConsoleController;
	}
	
	
};
