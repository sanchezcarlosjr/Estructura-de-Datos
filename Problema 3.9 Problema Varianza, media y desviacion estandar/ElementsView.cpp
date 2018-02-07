#include <iostream>
#include "Variance.cpp"
#include "Average.cpp"
#include "StandardDeviation.cpp"

using std::cout;
using std::cin;

class ElementsView
{
	private: Average* average;
	private: Variance* variance;
	private: int amountElements = 16;
	private: int elements[16];
	
	public: interact()
	{
		for(int element=0; element<amountElements; element++)
		{
			cout<<"Ingrese el elemento "<<element+1;
			cout<<":";
			cin>>elements[element];
		}
		average = new Average (elements, amountElements);
	}
	
	public: interactAverage()
	{
		cout<<"Promedio es:";
		cout<<this->average->calculate();	
	}
	
	public: interactVariance()
	{
		variance = new Variance(elements, amountElements, this->average->calculate());
		cout<<"Varianza es:";
		cout<<this->variance->calculate();
	}
	
	public: interactStandardDeviation()
	{
		StandardDeviation standardDeviation(variance->calculate());
		cout<<"La desviacion estandar es:";
		cout<<standardDeviation.calculate();
	}
	
};
