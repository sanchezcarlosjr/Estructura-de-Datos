#include "PersonView.h"
#include "EscapesSequences.h"

PersonView::interact(vector<Person> persons)
{
	cout<<persons[0].getTitle();
	cout<<LINEBREAK<<LINEBREAK;
	for(int i=0; i<persons.size(); i++)
	{
		cout<<persons[i].getLastName();
		cout<<",";
		cout<<persons[i].getName();
		cout<<HORIZONTALTAB;
		cout<<"Tiene:"<<persons[i].getAge()<<" anyos";
		cout<<LINEBREAK;
	}
}
