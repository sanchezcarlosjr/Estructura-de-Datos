#include <iostream>
#include "PascalTriangle.cpp"
#include "RowView.cpp"

using std::cout;
using std::cin;

class PascalTrianguleView
{
	int rows;
	PascalTriangle pascalTriangle;

	public: PascalTrianguleView()
	{
		store();
		cout<<"\n";
		show();
	}
	
	private: store()
	{
		cout<<"Ingrese el numero de filas: "; 
		cin>>this->rows;
		pascalTriangle.calculateNumbers(rows);
	}
	
	private: show()
	{
		RowView rowView(rows);
		for(int row=1; row<=rows; row++)
		{	
			rowView.draw(pascalTriangle.numbers);
		}
	}
	
	
	
	
	
};
