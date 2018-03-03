#include "AplicationView.h"
#include "EscapesSequences.h"

AplicationView::AplicationView()
{
	this->titleApp = "Ejercicio 10.1 Lista doblemente enlazada"; 
	this->titleApp += LINEBREAK;
	this->titleApp += LINEBREAK;	
	this->exitApp = LINEBREAK;
	this->exitApp += LINEBREAK;
	this->exitApp += "CEST Algo Imposible? ;)"; 
	this->exitApp += LINEBREAK;
	this->exitApp += LINEBREAK;	
}

AplicationView::interact()
{
	cout<<titleApp;
	listView.interact();
	cout<<LINEBREAK;
	system("pause");
	cout<<exitApp;
}

