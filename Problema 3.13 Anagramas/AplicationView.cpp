#include <iostream>
#include "AnagramView.cpp"

using std::string;
using std::cout;


class AplicationView
{
	string titleApp;
	
	public: AplicationView()
	{
		this->titleApp = "Problema 3.13 Anagramas"; 
		this->titleApp += LINEBREAK;
		this->titleApp += LINEBREAK;
	}

	public: start()
	{
		cout<<titleApp;
		
		AnagramView anagram;
		anagram.interact();
	}

};


