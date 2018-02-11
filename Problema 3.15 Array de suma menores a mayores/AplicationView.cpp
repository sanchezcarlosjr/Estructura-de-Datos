#include <iostream>
#include "ArrayView.cpp"
#include <stdlib.h>


using std::string;
using std::cout;


class AplicationView
{
	ArrayView array;
	string titleApp, exitApp;
	
	public: AplicationView()
	{
		this->titleApp = "Problema 3.15 Array de suma menores a mayores"; 
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
		array.interact();
	}

	public: end()
	{
		cout<<exitApp;
		system("pause");
	}

};
