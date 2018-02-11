#include <iostream>
#include "MatrixView.cpp"


using std::string;
using std::cout;


class AplicationView
{
	MatrixView matrix;
	string titleApp;
	
	public: AplicationView()
	{
		this->titleApp = "Problema 3.14 Punto de Silla"; 
		this->titleApp += LINEBREAK;
		this->titleApp += LINEBREAK;
	}

	public: start()
	{
		cout<<titleApp;
		matrix.interact();
	}

};
