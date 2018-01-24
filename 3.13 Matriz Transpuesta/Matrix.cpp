#include "Array.cpp"
class Matrix
{
	private: int** matrix;
	private: int** matrixProcced;
	private: Array* array;
	private: enum {ROWS, COLUMNS};
	
	public: Matrix(int *temp, int coordinates[])
	{
		this->array = new Array(temp, coordinates);
		this->matrix=array->convert();
	}
	
	public: getMatrix(int row, int column)
	{
	    return matrix[row][column];
	}
	
	public: transpose(int coordinate[])
	{
		this->array->setCoordinates(coordinate[ROWS], coordinate[COLUMNS]);
		this->matrixProcced = array->convert();
		
		for(int row=0; row<coordinate[ROWS]; row++ )
		{
			for(int column=0; column<coordinate[COLUMNS]; column++)
			{
				matrixProcced[column][row] = matrix[row][column];
			}
		}
	}
	
	public: getTransposedMatrix(int row, int column)
	{
		return matrixProcced[row][column];
	}
	
};
