class PascalTriangle
{	
	private: int rows;
	public: int numbers[100] = {1};
	
	public: PascalTriangle()
	{
		this->rows = 0;
	}
	
	public: calculateNumbers(int rows)
	{
		int position, finalPosition, itemElement=1;	
		for(int row=1; row<=rows; row++)
		{
			position = calculatePosition(row-1);
			finalPosition = calculatePosition(row+1);
			
			numbers[itemElement] = numbers[position];
			
			while(itemElement<finalPosition)
			{
				itemElement++;
				numbers[itemElement] = numbers[position] + numbers[position+1];
				position++;
			}
			
			numbers[itemElement-1] = numbers[position-1];		
		}
	
	}
	
	public: calculatePosition( int row )
	{
		return row * (row + 1 ) / 2;
	}
	
};
