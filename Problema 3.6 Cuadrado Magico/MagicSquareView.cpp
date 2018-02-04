#include <iostream>
#include "MagicSquare.cpp"
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
		MagicSquare magicSquare(squareOrder);
		int amountMagicNumbers = squareOrder * squareOrder;
		magicSquare.calculate();
		int row=0;
		for(int i=0; i<amountMagicNumbers; i++)
		{
			if( row == squareOrder)
			{
				row=0;
				cout<<LINEBREAK;
			}
			row++;
			cout<<magicSquare[i]<<HORIZONTALTAB;
		}
	}
	
	
};

