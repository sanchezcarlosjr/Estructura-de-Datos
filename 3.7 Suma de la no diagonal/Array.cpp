class Array
{
	private: int array[4][5] = {
								{4,7,-5,4,9},
								{0,3,-2,6,-2},
								{1,2,4,1,1},
								{6,1,0,3,-4},
			                  };
	private: int  actualRow,actualColumn;    
		          

	public: addElementsThatAreNotMainDiagonal()
	{
		int result=0;
		for(int row=0; row<4; row++)
		{
			this->actualRow = row;
			for(int column=0; column<5; column++)
			{
				this->actualColumn = column;
				result += this->calculateResult();
			}
		}
		return result;
	}
	
	private: calculateResult()
	{
		if(!isElementMainDiagonal())
		{
			return this->array[this->actualRow][this->actualColumn];
		}
	}
	
	private: isElementMainDiagonal()
	{
		return this->actualRow== this->actualColumn;
	}
};
