#include <iostream>
#include "Seller.cpp"
#include "EscapesSequences.h"
using std::cout;
using std::cin;

class ReportView
{
	
	
	public: interact()
	{
		int models[15];
		cout<<"Vendedor 1";
		cout<<LINEBREAK;
		for(int i=0; i<15; i++)
		{
			cout<<"Modelo "<<i+1;
			cout<<HORIZONTALTAB;
			cout<<"Vendidos:";
			cin>>models[i];
		}
		Seller seller(models);
		cout<<LINEBREAK;
		for(int i=0; i<15; i++)
		{
			cout<<seller[i];
			cout<<HORIZONTALTAB;
		}
		cout<<LINEBREAK;
		
		
	}
	
	
};
