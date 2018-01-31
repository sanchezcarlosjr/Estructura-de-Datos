#include <iostream>

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
		enum EscapeCodes { endline = '\n' };
		cout<<titleApp;
		cout<<endline;
		cout<<"HOLA";
		
	}
	
	
};
