#include <iostream>
#include "Average.cpp"

using std::cout;
using std::cin;

class ElementsView
{
	private: int amountElements = 10;
	private: int elements[10];
	
	public: interact()
	{
		for(int element=0; element<amountElements; element++)
		{
			cout<<"Ingrese el elemento "<<element+1;
			cout<<":";
			cin>>elements[element];
		}
	}
	
	public: interactAverage()
	{
		Average average(elements, amountElements);
		cout<<"Promedio es:";
		cout<<average.calculate();
	}
	
	
	
};
