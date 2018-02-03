#include <iostream>
#include "EscapesSequences.cpp"

using std::cout;
using std::string;
using std::cin;

class MagicSquareView
{
	int squareOrder;
	
	public: input()
	{ 	
		do
		{
			cout<<LINEBREAK;
			cout<<"El orden debe ser impar.";
			cout<<"Ingrese el orden del cuadrado: "; cin>>squareOrder;
		}while(squareOrder % 2 == 0 );
		
	}
	
	
	public: output()
	{
		int magicNumbers[9] = {8,1,6,3,5,7,4,9,2};
		int amountMagicNumbers = squareOrder * squareOrder;
		
		int row=0;
		for(int i=0; i<amountMagicNumbers; i++)
		{
			if( row == squareOrder)
			{
				row=0;
				cout<<LINEBREAK;
			}
			row++;
			cout<<magicNumbers[i]<<HORIZONTALTAB;
		}
		
	}
	
	
};

