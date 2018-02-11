#include <iostream>
#include "Array.cpp"
#include "Random.cpp"
#include "EscapesSequences.h"

using std::string;
using std::cout;


class ArrayView
{
	Array array;

	public: interact()
	{
		generateArray();
		showTitle("Orden Inicial");
		showArray();
		showTitle("Orden Indicado");
		array.sortWithIndicatedDistribution();
		showArray();
	}
	
	
	private: generateArray()
	{
		Random randomNumber(1,100);
		for(int i=0; i<=20; i++)
		{
			array.push(randomNumber.generate());
		}
	}
	
	private: showArray()
	{
		for(int i=0; i<array.Size(); i++)
		{
			cout<<array[i]<<HORIZONTALTAB;
		}
	}
	
	private: showTitle(string title)
	{
		cout<<LINEBREAK<<title<<LINEBREAK;
	}
	
};
