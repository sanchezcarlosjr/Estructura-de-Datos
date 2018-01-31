#include <iostream>
#include "PascalTriangleView.cpp"

using std::string;
using std::cout;

class ConsoleView
{
	string titleApp;
	
	public: ConsoleView()
	{
		this->titleApp = "Problema 3.2 Triangulo de Pascal";
	}
	
	
	public: start()
	{
		cout<<titleApp<<"\n";
		new PascalTrianguleView();
	}
	
	
};
