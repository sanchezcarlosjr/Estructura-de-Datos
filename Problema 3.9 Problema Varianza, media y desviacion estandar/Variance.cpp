class Variance
{
	int elements[16], amountElements, average;
	
	public: Variance(int elements[], int amountElements, int average)
	{
		this->amountElements = amountElements;
		this->average = average;
		
		for(int i=0; i<amountElements; i++)
		{
			this->elements[i] = elements[i];
		}
		
	}
	
	public: float calculate()
	{
		int devation = 0;
		int summation=0;
		
		for(int i=0; i<amountElements;i++)
		{
			devation = this->elements[i] - average;
			summation += devation * devation;
		} 
		
		return (float)summation/(amountElements-1);
	}
	
	
};
