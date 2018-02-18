#include "AplicationView.h"
#include "EscapesSequences.h"

AplicationView::AplicationView()
{
	this->titleApp = "Ejercicio 5.1 Vector minimo y maximo"; 
	this->titleApp += LINEBREAK;
	this->titleApp += LINEBREAK;	
	this->exitApp = LINEBREAK;
	this->exitApp += LINEBREAK;
	this->exitApp += "CEST Algo Imposible? ;)"; 
	this->exitApp += LINEBREAK;
	this->exitApp += LINEBREAK;
}

AplicationView::start()
{
	cout<<titleApp;
}

AplicationView::end()
{
	cout<<exitApp;
}
