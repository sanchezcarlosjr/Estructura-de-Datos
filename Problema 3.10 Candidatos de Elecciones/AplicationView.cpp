#include <iostream>
#include "CandidatesView.cpp"

using std::string;
using std::cout;
using std::cin;

class AplicationView
{
	CandidatesView candidatesView;
	string titleApp;
	public: AplicationView()
	{
		this->titleApp = "Problema 3.10 Candidatos a Acalde de Pueblo X"; 
		this->titleApp += LINEBREAK;
		this->titleApp += LINEBREAK;
	}

	public: start()
	{
		cout<<titleApp;
		candidatesView.interact();
	}

	
	
	
};
