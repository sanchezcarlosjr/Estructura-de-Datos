#include <iostream>
#include "Array.cpp"

using std::cout;

class ConsoleView
{
	private: Array array;
	
	public: void start()
	{
		int columns = 3, rows = 5;
		enum typeArray{INITIAL, FINAL};
		cout<<"Arreglo Inicial\n";
		this->showArray(columns, rows, INITIAL);
		array.reverseArray();
		cout<<"\nArreglo Final\n";
		this->showArray(rows,columns, FINAL);
	}
	
	private: void showArray(int rows, int columns, int typeArray)
	{
		for(int row=0; row<rows; row++)
		{
			for(int column=0; column<columns; column++)
			{
				int value = this->valueArray(typeArray, row, column);
				this->showValue(value);
			}
			cout<<"\n";
		}
	}
	
	private: int valueArray(int typeArray, int row, int column)
	{
		if(typeArray == 0)
		{
			return this->array.showInitialArray(row,column);
		}
		if(typeArray == 1)
		{
			return this->array.showFinalArray(row,column);
		}
	}
	
	private: void showValue(int value)
	{
		cout<<"\t"<<value;
	}		
};
