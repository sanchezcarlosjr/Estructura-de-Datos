#include "FileView.h"
#include "EscapesSequences.h"

FileView::interact()
{
	
	personView.interact(file.find("General"));
	cout<<LINEBREAK;
	personView.interact(file.find("Estudiante"));
	cout<<LINEBREAK;
	personView.interact(file.find("Empleado"));
	cout<<LINEBREAK;
	cout<<"Lista Ordenada(por apellidos):";
	cout<<LINEBREAK<<LINEBREAK;
	personView.interact(file.find("General", "byLastName"));
	cout<<LINEBREAK;
	personView.interact(file.find("Estudiante", "byLastName"));
	cout<<LINEBREAK;
	personView.interact(file.find("Empleado", "byLastName"));
	cout<<LINEBREAK;
}
