class Matrix
{
	private: int matrix[100][100];
											
			  
	public: swapRow(int initialRow, int finalRow)
	{
		int temp;
		for(int column=0; column<5; column++)
		{
			temp = this->matrix[initialRow][column];
			this->matrix[initialRow][column] = this->matrix[finalRow][column];
			this->matrix[finalRow][column] = temp;
		}
	}
	
	public: show(int row, int column)
	{
		return this->matrix[row][column];
	}
	
	public: setMatrix(int row, int column, int value)
	{
		this->matrix[row][column] = value;
	}

};
