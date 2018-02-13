#include <iostream>
#include "EscapesSequences.h"


using std::cout;
using std::string;

#include "PersonView.h"

PersonView::PersonView()
{
}

PersonView::interact(Person persons[])
{
	for(int i=0; i<1; i++)
	{
		cout<<LINEBREAK;
		cout<<persons[i].getName();
		cout<<HORIZONTALTAB<<"Tiene la edad de:"<<persons[i].getAge();
		cout<<LINEBREAK;
	}
}
