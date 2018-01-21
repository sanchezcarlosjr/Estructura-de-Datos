class Array
{
	private: int initialArray[3][5] = {
									{4, 7, 1, 3, 5},
									{2, 0, 6, 9, 7},
									{3, 1, 2, 6, 4}
							};
	private: int finalArray[5][3];	
	
	public: void reverseArray()
	{
		for(int i=0; i<5; i++)
		{
			for(int j=0; j<3; j++)
			{
				this->finalArray[i][j] = this->initialArray[j][i];
			}
		}
	}
	
	public: int showInitialArray(int row, int column)
	{
		return this->initialArray[row][column];
	}	
	
	public: int showFinalArray(int row, int column)
	{
		return this->finalArray[row][column];
	}
		
};
