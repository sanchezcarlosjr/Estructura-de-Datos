#include <iostream>
#include "ReportView.cpp"


using std::string;
using std::cout;
using std::cin;

class AplicationView
{
	ReportView reportView;
	string titleApp;
	
	public: AplicationView()
	{
		this->titleApp = "Problema 3.11 Agencia de Automoviles"; 
		this->titleApp += LINEBREAK;
		this->titleApp += LINEBREAK;
	}

	public: start()
	{
		cout<<titleApp;
		reportView.interact();
	}

	
	
	
};
