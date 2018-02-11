#include <iostream>
#include "Matrix.cpp"
#include "EscapesSequences.h"

using std::cout;

class MatrixView
{
	
	
	public: interact()
	{
		Matrix matrix;
		for(int row=0; row<3; row++)
		{
			for(int column=0; column<4; column++)
			{
				cout<<HORIZONTALTAB<<matrix.matrix[row][column];
			}
			cout<<LINEBREAK;
		}
		cout<<"Punto de silla: "<<matrix.findChairPoint();
	}
	
	
};
