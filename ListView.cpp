#include "ListView.h"
#include "EscapesSequences.h"

ListView::interact()
{
	srand(time(NULL));
	for(int i=0; i<100; i++)
	{
		list.push_back( 1 + rand() % (10)  );
		list.push_front( 1 + rand() % (10)  );
	}
	cout<<"Cabeza:"<<list.front();
	cout<<LINEBREAK;
	cout<<"Ultimo elemento:"<<list.back();
	cout<<LINEBREAK;
	cout<<"Tamano de la lista:"<<list.getSize();
}
