#include <iostream>
#include "TextView.cpp"

using std::string;
using std::cout;

class ConsoleView
{
	string titleApp;
	
	public: ConsoleView()
	{
		this->titleApp = "Problema 3.4 Eliminar la clave de un texto"; 
		start();
	}
	
	
	public: start()
	{
		char endline = '\n';
		cout<<titleApp<<endline;
		new TextView;
	}
	
	
};
