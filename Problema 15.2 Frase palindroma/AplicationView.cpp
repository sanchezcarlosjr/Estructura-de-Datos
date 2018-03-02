#include "AplicationView.h"
#include "EscapesSequences.h"

AplicationView::AplicationView()
{
	this->titleApp = "Ejercicio 15.2 Frase palindroma"; 
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
	palindrome.interact();
	cout<<exitApp;
	system("pause");
}
