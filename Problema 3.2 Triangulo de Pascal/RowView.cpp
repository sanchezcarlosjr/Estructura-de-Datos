#include <iostream>

using std::string;
using std::cout;

class RowView
{
	int array[100];
	int row=0, rows;
	
	public: RowView(int rows)
	{
		this->rows = rows;
	}
	
	public: draw(int pascalTriangleNumbers[])
	{
		set(pascalTriangleNumbers);
		drawSpace();
		drawRow();
	}
	
	
	public: drawRow()
	{		
		const char SPACE = ' ';
		char endline = '\n';
		for(int i=0; i<row; i++)
		{
			cout<<array[i]<<SPACE;
		}
		cout<<endline;
	}
	
	public: drawSpace()
	{
		for(int k=rows; k>row; k--)
		{
			cout<<" ";	
		}
	}
	
	public: set(int pascalTriangleNumbers[])
	{
		int position = calculatePosition(row);
		int finalPosition = calculatePosition(row+1);
		
		int temp = 0; 
		for(int i=position; i<finalPosition; i++)
		{
			array[temp] =  pascalTriangleNumbers[i];
			temp++;
		}
		row = temp;
	}
	
	public: calculatePosition( int row )
	{
		return row * (row + 1 ) / 2;
	}
	
	
	
};
