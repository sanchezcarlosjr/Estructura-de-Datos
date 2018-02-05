#include <iostream>
#include "ElementsView.cpp"
#include "EscapesSequences.h"

using std::string;
using std::cout;
using std::cin;


class AplicationView
{
	ElementsView elementsView;
	string titleApp;
	public: AplicationView()
	{
		this->titleApp = "Problema 3.9 Varianza, media y desviacion estandar"; 
		this->titleApp += LINEBREAK;
		this->titleApp += LINEBREAK;
	}

	public: start()
	{
		cout<<titleApp;
		elementsView.interact();
		elementsView.interactAverage();
		elementsView.interactDeviation();
		elementsView.interactVariance();
		elementsView.interactStandardDeviation();
	}

	
	
	
};
