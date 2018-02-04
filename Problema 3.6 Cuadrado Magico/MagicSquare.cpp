class MagicSquare
{
	private: int magicNumbers[121];
	private: int magicSquare[11][11];
	private: int limit, squareOrder;
	private: int x,y;
	
	public: MagicSquare(int squareOrder)
	{
		limit = squareOrder * squareOrder;
		this->squareOrder = squareOrder;
		for(int row=0; row<squareOrder; row++)
		{
			for(int column=0; column<squareOrder; column++)
			{
				magicSquare[row][column] = 0;
			}
		}
	}
	
	public: calculate()
	{
		int tempX=0, tempY=0;
		x = squareOrder / 2;
		y = 0;
			
		for(int i=1; i<=limit; i++ )
		{
			magicSquare[y][x] = i ;
			
			tempX = x;
			tempY = y;
			
			calculateX();
			calculateY();
			
			recalculateIfIsOcupedCoordinate(tempX, tempY);
				
		}
		
		toArray();
	}
	
	private: calculateX()
	{
		int limitX = squareOrder - 1;
		x++;
		if(x > limitX)
		{
			x=0;
		}
	}
	
	private: calculateY()
	{
		int limitY = squareOrder - 1;
		y--;
		if(y < 0)
		{
			y=limitY;
		}
	}
	
	private: recalculateIfIsOcupedCoordinate(int tempX, int tempY)
	{
		if(magicSquare[y][x] > 0)
		{
			x = tempX;
			y = tempY + 1;
		}
	}
		
	public: toArray()
	{
		int iterator=0;
		
		for(int i=0; i<squareOrder; i++)
		{
			for(int j=0; j<squareOrder; j++)
			{
				magicNumbers[iterator] = magicSquare[i][j];
				iterator++;
			}
		}
		
		
	}
	
	
	public: int operator [] (int i)
	{
		return magicNumbers[i];
	}
	
	public: int getSize()
	{
		return limit;
	}
	
};
