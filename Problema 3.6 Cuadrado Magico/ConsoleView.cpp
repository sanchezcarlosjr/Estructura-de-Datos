#include <iostream>
#include "ConsoleController.cpp"


using std::string;
using std::cout;

class ConsoleView
{
	string titleApp;
	
	public: ConsoleView()
	{
		this->titleApp = "Problema 3.6 Cuadrado Magico"; 
		this->titleApp += LINEBREAK;
		start();
	}
	
	
	public: start()
	{
		cout<<titleApp;
		new ConsoleController;
	}
	
	
};
