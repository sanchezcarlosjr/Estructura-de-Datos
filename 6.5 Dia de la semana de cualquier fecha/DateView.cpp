#include "DateView.h"
#include "EscapesSequences.h"

DateView::interact()
{
	string temp;
	cout<<"Ingrese la fecha:"; cin>>temp;
	date=temp;
	cout<<"Fecha:"; cout<<date; 
	cout<<LINEBREAK;
	cout<<"El dia de la semana es:"<<date.determineDayOfWeek();
}
