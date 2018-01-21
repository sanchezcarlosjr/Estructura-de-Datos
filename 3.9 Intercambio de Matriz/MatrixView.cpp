#include <iostream>
#include "Matrix.cpp"

using std::cout;
using std::cin;

class MatrixView
{
	private: Matrix matrix;
	private: int rows, columns;
	
	public: store()
	{
		this->inputDimensions();
		this->storeMatrix();
	}
	
	private: inputDimensions()
	{
		this->inputColumns();
		this->inputRows();
	}
	
	private: inputColumns()
	{
		cout<<"\nIngrese el numero de columnas: "; cin>>this->columns;
	}
	
	private: inputRows()
	{
		cout<<"\nIngrese el numero de filas: "; cin>>this->rows;
	}
	
	private: storeMatrix()
	{
		int value;
		for(int row=0; row<this->rows; row++)
		{
			for(int column=0; column<this->columns; column++)
			{
				cout<<"\t";
				cout<<"Coordenada:("<<row<<","<<column<<"):"; cin>>value;
				this->matrix.setMatrix(row,column,value);
			}
		}
	}
	
	public: display()
	{
		for(int row=0; row<this->rows; row++)
		{
			for(int column=0; column<this->columns; column++)
			{
				cout<<this->matrix.show(row, column);
				cout<<"\t";
			}
			cout<<"\n";
		}
	}
	
	public: swap()
	{
		int initialRow, finalRow;
		cout<<"\n";
		cout<<"Fila Inicial:"; cin>>initialRow;
		cout<<"Fila Final:"; cin>>finalRow;
		this->matrix.swapRow(initialRow, finalRow);
		
	}
	
};
