#include <iostream>
#include "TextView.cpp"

using std::string;
using std::cout;

class ConsoleView
{
	string titleApp;
	public: ConsoleView()
	{
		this->titleApp = "Problema 3.3 Patatas de un Texto"; 
		start();
	}
	
	
	public: start()
	{
		char endline = '\n';
		cout<<titleApp<<endline;
		new TextView;
	}
	
	
};
