#include <iostream>
#include <algorithm>
#include <vector>
#include <sstream>
#include "Random.cpp"

using std::string;
using std::sort;
using std::vector;

class Matrix
{
	private: Random* number;
	public: int matrix[3][4];
	
	public: Matrix()
	{
		number = new Random(1,100);
	
		for(int i=0; i<3; i++)
		{
			for(int j=0; j<4; j++)
			{
				matrix[i][j] = number->get();
			}
		}
	}
	
	public: string findChairPoint()
	{
		int searchRow;
		string row = "-1";
		string column = "-1";
		string value = "-1";
		
		for(int j=0; j<3; j++)
		{
			//Es el menor de su fila
			//Ordenar Fila 1
			int rows[4];
			
			for(int row=0; row<4; row++)
			{
				rows[row] = matrix[j][row]; 
			}
			
			vector<int> temp(rows,rows+4); 
			sort(temp.begin(),temp.end());
			
			
			//Valor menor de su fila 1
			int minorOfRow = temp[0];
			
			//Buscar la posicion
			int minorPosition = search(rows, minorOfRow, 4);
			
			//Es el mayor de su columna
			int columns[3];
			for(int column=0; column<3; column++)
			{
				columns[column] = matrix[column][minorPosition];
			}
			
			vector<int> temp2(columns,columns+3); 
			sort(temp2.begin(),temp2.end());
			
			int majorOfColumn = temp2[2];
			
			int majorPosition = search(columns, majorOfColumn, 3);
				
			if(minorOfRow == majorOfColumn)
			{
				row = toString( majorPosition  );
				column = toString(minorPosition );
				value = toString( matrix[majorPosition][minorPosition]  );
				break;
			}
		}
		return "(" +row+ "," + column +") valor "+value;
	}
		
	
	private: string toString(int temp)
	{
		return static_cast<std::ostringstream*>(&(std::ostringstream() << temp))->str();
	}
	
	private: int search(int array[], int number, int size)
	{
		int i=0;
		while( (i<size) )
		{
			if(array[i] == number )
			{
				return i;
			}
			
			i++;		
		}	
		return -1;
	}
	
	
	
	
	
	
	
};
