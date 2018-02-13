#include "FilesView.h"
#include "Person.h"
#include "EscapesSequences.h"

FilesView::FilesView()
{
	
	
}

FilesView::~FilesView()
{
}

FilesView::interact()
{
	show();
	cout<<this->content;
	cout<<LINEBREAK;
	cout<<"General";
	Person* persons;
	persons = new Person[1];
	personsView.interact(persons);	
	
	cout<<LINEBREAK;
	cout<<"Estudiantes";
	cout<<LINEBREAK;
	cout<<"Empleados";
	cout<<LINEBREAK;
	cout<<"Estudiantes-Empleados";
}

FilesView::show()
{
	char temp[200];
	ifstream file("Personas.txt");
	
	if(file.fail())
	{
		content = "Error al abrir archivo";
	}	
	else
	{
		while(!file.eof())
		{
			file.getline(temp,sizeof(temp));
			content += temp;
			content += LINEBREAK;
		}
	}
	file.close();
}
