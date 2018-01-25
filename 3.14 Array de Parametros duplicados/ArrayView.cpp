#include <iostream>
#include "Array.cpp"

using std::cout;
using std::cin;

class ArrayView
{
	private: Array array;
	
	public: store()
	{
		
		int value, iterator=0;
		const int ESCAPEKEY = -5;
		do
		{
			cout<<"Ingrese el valor["<<++iterator<<"]";
			cout<<"="; cin>>value;
			array.push(value);
		}while(value != ESCAPEKEY);
		array.replaceRepeated();
	}
	
	public: show()
	{
		int columns=10, column=0;
		for(int iterator=0; iterator<array.getSize(); iterator++)
		{
			if(columns == column)
			{
				column = 0;
				cout<<"\n";
			}
			else
			{
				cout<<array[iterator];
				cout<<"\t";
				column++;
			}
		}
	}
	
	
};
