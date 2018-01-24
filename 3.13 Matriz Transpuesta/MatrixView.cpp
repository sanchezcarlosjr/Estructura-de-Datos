#include <iostream>
#include "Matrix.cpp"

using std::cout;
using std::cin;

class MatrixView
{
	
	int *temp; enum {ROWS, COLUMNS};
	int coordinate[2];
	Matrix* matrix;
	
	public: store()
	{
		cout<<"\nIngrese las filas: "; cin>>coordinate[ROWS];
		cout<<"\nIngrese las columnas "; cin>>coordinate[COLUMNS];
		int size = coordinate[ROWS] * coordinate[COLUMNS];
		this->temp = new int [size];
		for(int i=0; i<size; i++)
		{
			cout<<"T:"; cin>>this->temp[i];
		}
		this->matrix = new Matrix(this->temp, coordinate);
	}
	
	public: show()
	{
		for(int row=0; row<coordinate[ROWS]; row++)
		{
			for(int column=0; column<coordinate[COLUMNS]; column++)
			{
				cout<<"\t"<<this->matrix->getMatrix(row, column);
			}
			cout<<"\n";
		}
	}
	
	public: transpose()
	{
		this->matrix->transpose(coordinate);
		int transposeRows = coordinate[COLUMNS];
		int transposeColumns = coordinate[ROWS];
		
		for(int row=0; row<transposeRows; row++)
		{
			for(int column=0; column<transposeColumns; column++)
			{
				cout<<"\t"<<this->matrix->getTransposedMatrix(row, column);
			}
			cout<<"\n";
		}
		
		
	}
	
	
	
};
