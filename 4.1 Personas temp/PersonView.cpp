#include "EscapesSequences.h"
#include "PersonView.h"

PersonView::PersonView()
{	
	person = new Person();	
}

PersonView::interact(vector<Person> persons)
{
	cout<<"General"<<LINEBREAK;
	for(int i=0; i<persons.size();i++)
	{
		cout<<persons[i].getName();
		cout<<HORIZONTALTAB;
		cout<<"Tiene como edad: "<<persons[i].getAge();
	}
	


}
