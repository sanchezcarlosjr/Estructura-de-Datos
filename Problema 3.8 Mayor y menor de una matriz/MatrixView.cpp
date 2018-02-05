#include <iostream>
#include "EscapesSequences.h"

using std::string;
using std::cout;
using std::cin;

class MatrixView
{
	string titleApp;
	public: MatrixView()
	{
		this->titleApp = "Problema 3.8 Mayor y menor de una matriz"; 
		this->titleApp += LINEBREAK;
		this->titleApp += LINEBREAK;
	}
	
	public: start()
	{
		cout<<titleApp;
		int rows, columns;
		cout<<"Ingrese las filas: "; cin>>rows;
		cout<<"Ingrese las columnas: "; cin>>columns;
		
		
		int major = (int) NULL;
		int majorCoordinate[2];
		
		int menor = (int) NULL;
		int menorCoordinate[2];
		
		int matrix[rows][columns];
		
		for(int row=0; row<rows; row++ )
		{
			for(int column=0; column<columns; column++)
			{
				cout<<"("<<row<<")";
				cout<<"("<<column<<")";
				cout<<":";
				cin>>matrix[row][column];
				if(matrix[row][column] > major)
				{	
					major = matrix[row][column];
					majorCoordinate[0] = row;
					majorCoordinate[1] = column;
				}
				if(matrix[row][column] < menor || (row==0 && column==0) )
				{
					menor = matrix[row][column];
					menorCoordinate[0] = row;
					menorCoordinate[1] = column;
				}
			}
			
		}
		cout<<LINEBREAK;
		for(int row=0; row<rows; row++ )
		{
			for(int column=0; column<columns; column++)
			{
				cout<<matrix[row][column];
				cout<<HORIZONTALTAB;
			}
			cout<<LINEBREAK;
		}
		cout<<LINEBREAK;
		cout<<"Menor elemento: "<<menor<<" "<<"("<<menorCoordinate[0]<<","<<menorCoordinate[1]<<")";
		cout<<LINEBREAK;
		cout<<"Mayor elemento: "<<major<<" "<<"("<<majorCoordinate[0]<<","<<majorCoordinate[1]<<")";
		
			
	}	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
};
