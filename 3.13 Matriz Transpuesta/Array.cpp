#include <iomanip>

class Array
{
	private: int **matrix;
	private: int *array;
	private: int coordinates[2];
	private: enum {ROWS, COLUMNS};
	
	public: Array(int *array, int coordinates[])
	{
		this->array = array;
		this->coordinates[0] = coordinates[0];
		this->coordinates[1] = coordinates[1];
	}	
	
	public: setCoordinates(int rows, int columns)
	{
		this->coordinates[0] = rows;
		this->coordinates[1] = columns;
	}	
	
	public: int** convert()
	{
		reserveMemory();
		create();
		return matrix;
	}
	
	private: reserveMemory()
	{
		matrix = new int *[coordinates[ROWS]];
		for(size_t row(0); row<coordinates[ROWS]; ++row)
		{
			matrix[row] = new int[coordinates[COLUMNS]];
		}
	}
	
	private: create()
	{ 
		for(int row=0; row<coordinates[ROWS]; row++)
		{
			iterateColumn(row);
		}
	}
	
	private: int i=0;
	private: iterateColumn(int row)
	{
		for(int column=0; column<coordinates[COLUMNS]; column++)
		{
			matrix[row][column] = this->array[i];
			i++;
		}
	}
	
	
};
