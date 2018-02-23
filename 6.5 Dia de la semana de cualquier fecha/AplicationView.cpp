#include "AplicationView.h"
#include "EscapesSequences.h"

AplicationView::AplicationView()
{
	this->titleApp = "Ejercicio 6.5 Dia de la semana de cualquier fecha"; 
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
