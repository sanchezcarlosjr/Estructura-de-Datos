#include <iostream>
#include <stdlib.h>
#include <time.h>
#include "Seller.cpp"
#include "EscapesSequences.h"

using std::cout;
using std::cin;
using std::string;
class ReportView
{
	struct seller
	{
		int models[15];
	}sellers[10];
	int model[15];
	
	public: interact()
	{
		
		srand(time(NULL));
		string SPACE = "   ";
		for(int j=0; j<10; j++)
		{
			for(int i=0; i<15; i++)
			{
				sellers[j].models[i] = 1+rand()%(99);
				
				model[i] += sellers[j].models[i];
			}
			
		}	
		
		cout<<LINEBREAK;
		cout<<SPACE;
		for(int i=1; i<=15; i++)
		{
			if(i<10)
			{
				cout<<"0";
			}
			cout<<i<<"  ";
		}
		cout<<SPACE<<" ";
		cout<<"T";
		cout<<LINEBREAK;
		int seller;
		int majorSeller[2];
		majorSeller[0] = 0;
		majorSeller[1] = 0;
		for(int j=0; j<10; j++)
		{
			cout<<j+1;
			if(j+1<=9)
			{
				cout<<"  ";	
			}
			if( j+1 >= 10)
			{
				cout<<" ";
			}
			for(int i=0; i<15; i++)
			{
				if(sellers[j].models[i]<=9)
				{
					cout<<"0";
				}
				cout<<sellers[j].models[i]<<"  ";
			}
			seller = addModels(sellers[j].models);
			cout<<SPACE<<seller;
			if(seller > majorSeller[0])
			{
				majorSeller[0] = seller;
				majorSeller[1] = j+1;
			}
			cout<<LINEBREAK;
		}
			
		cout<<LINEBREAK;
		cout<<"T";
		cout<<" ";
		for(int i=0; i<15; i++)
		{
			cout<<model[i]<<" ";
		}
	cout<<LINEBREAK;
	cout<<"El mejor vendedor es: "<<majorSeller[1]<<" vendio: "<<majorSeller[0];
	
	
		
	}
	
	public: addModels(int models[])
	{
		int sum=0;
		for(int i=0; i<15; i++)
		{
			sum += models[i];
		}
		return sum;
	}
	
	
	
	
};
